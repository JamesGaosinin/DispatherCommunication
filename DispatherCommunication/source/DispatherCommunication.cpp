#include "DispatherCommunication.h"
#include <QSizePolicy>
#include <QToolButton>
#include <QMessageBox>
#include <QApplication>
#include <QDomDocument>
#include <QDomElement>
#include <QDomNode>
#include <QTimer>
#include <QDateTime>
#include <QFile>
#include "AddressBookWidget.h"
#include "Common.h"
#include "PhoneFunctionManagement.h"
#include "Phone.h"

CDispatherCommunication::CDispatherCommunication(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	Init();

}

void CDispatherCommunication::Slot_BtnClicked()
{
	QObject* pObj = sender();
	QToolButton* pBtn = dynamic_cast<QToolButton*>(pObj);
	if (nullptr == pBtn)
	{
		return;
	}
	if (pBtn->text().isEmpty())
	{
		pBtn->setChecked(false);
		return;
	}
	int nIndex = SetCurFuncStyle(pBtn);
	if (nIndex > ui.stackedWidget->count() - 1)
	{
		// 显示通话记录
		
	}
	else
	{
		ui.stackedWidget->setCurrentIndex(nIndex);
	}
}

void CDispatherCommunication::Slot_Timeout()
{
	QString strCurDateTime = QDateTime::currentDateTime().toString("yyyy-MM-dd hh:mm:ss");
	ui.label_Time->setText(strCurDateTime);
}

void CDispatherCommunication::Init()
{
	InitGUI();
	InitConnect();
	InitTimer();
}

void CDispatherCommunication::InitGUI()
{
	setWindowFlags(windowFlags() | Qt::FramelessWindowHint);
	QString strSheet = QString("\
		   	QToolButton{font-size:24px;}\
			QLabel{font-size:16px;}\
			QFrame#frame_4{background-color:rgb(182,215,246);}\
			QStackedWidget{background-color: rgb(85, 255, 255);}\
			");

	InitFuncArea();
	setStyleSheet(styleSheet() + strSheet);
	ui.stackedWidget->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
	ui.frame_Tip->setStyleSheet(QString("background-color:rgb(196,231,251);"));

	QMap<QString, PageInfo> mapInfo;
	if (!ReadConfig(mapInfo))
	{
		QMessageBox::information(this, QStringLiteral("提示"), QStringLiteral("电话簿读取失败！"));
	}

	CPhone::GetInstance()->Initalize(mapInfo);
	m_pPhoneFuncManager = new CPhoneFunctionManagement(this);
	ui.widget_Ctrl->SetPhoneFuncManager(m_pPhoneFuncManager);

	int nIndex = 0;
	auto itr = mapInfo.begin();
	for (; itr != mapInfo.end(); ++itr)
	{
		QString strFuncName = itr.key();
		PageInfo stPageInfo = itr.value();
		CAddressBookWidget* pWidget = new CAddressBookWidget(this);
		pWidget->Intialize(stPageInfo.m_mapGroup, stPageInfo.m_mapPhoneNumber);
		pWidget->SetPhoneFuncManager(m_pPhoneFuncManager);
		connect(m_pPhoneFuncManager, &CPhoneFunctionManagement::Sig_ChangeBtnStatus, pWidget, &CAddressBookWidget::Slot_SetPhoneState, Qt::AutoConnection);

		QToolButton* pBtn = m_lstFuncBtn.at(nIndex);
		if (nullptr != pBtn)
		{
			int nSize = strFuncName.size();
			if (nSize > 4)
			{
				strFuncName.insert(3, '\n');
			}
			else if (nSize == 4)
			{
				strFuncName.insert(2, '\n');
			}
			pBtn->setText(strFuncName);
		}
		ui.stackedWidget->insertWidget(nIndex++, pWidget);
	}
	ui.stackedWidget->setCurrentIndex(0);
}

void CDispatherCommunication::InitFuncArea()
{
	QHBoxLayout* layout = new QHBoxLayout(this);
	layout->setMargin(3);
	layout->setSpacing(6);
	ui.frame_Page->setLayout(layout);
	for (int i = 0; i < 12; ++i)
	{
		QToolButton* pBtn = new QToolButton(this);
		pBtn->setFixedSize(80, 60);
		layout->addWidget(pBtn);
		m_lstFuncBtn << pBtn;
	}
	QToolButton* pBtn = m_lstFuncBtn.at(11);
	pBtn->setText(QStringLiteral("通话\n记录"));
	pBtn = m_lstFuncBtn.at(0);
	pBtn->setStyleSheet("color:rgb(255,255,0)");
}

void CDispatherCommunication::InitConnect()
{
	for (int i = 0; i < 12; ++i)
	{
		QToolButton* pBtnTemp = m_lstFuncBtn.at(i);
		if (nullptr != pBtnTemp)
		{
			connect(pBtnTemp, &QToolButton::clicked, this, &CDispatherCommunication::Slot_BtnClicked);
		}
	}
}

void CDispatherCommunication::InitTimer()
{
	QTimer* timer = new QTimer(this);
	timer->setInterval(500);
	timer->setSingleShot(false);
	connect(timer, &QTimer::timeout, this, &CDispatherCommunication::Slot_Timeout);
	timer->start();
}

bool CDispatherCommunication::ReadConfig(QMap<QString, PageInfo>& mapInfo)
{
	QString strConfigFilePath = QApplication::applicationDirPath() + QString("/Config/AddressBook.xml");
	QFile file(strConfigFilePath);
	if (!file.exists())
	{
		return false;
	}
	if (!file.open(QIODevice::ReadOnly))
	{
		return false;
	}
	QDomDocument doc;
	if (!doc.setContent(&file))
	{
		return false;
	}
	QDomElement rootEle = doc.documentElement();
	if (rootEle.isNull())
	{
		return false;
	}
	// 页面
	QDomElement pageEle = rootEle.firstChildElement("Page");
	while (!pageEle.isNull())
	{
		PageInfo stPageInfo;
		QString strPageName = pageEle.attribute("FunctionName");
		QDomElement groupEle = pageEle.firstChildElement("Group");
		if (!groupEle.isNull())
		{
			ReadGroup(groupEle, stPageInfo.m_mapGroup);
		}
		
		QDomElement stationEle = pageEle.firstChildElement("Station");
		if (!stationEle.isNull())
		{
			ReadStation(stationEle, stPageInfo.m_mapPhoneNumber);
		}
		mapInfo[strPageName] = stPageInfo;
		pageEle = pageEle.nextSiblingElement("Page");
	}
	
	file.close();
	return true;
}

bool CDispatherCommunication::ReadGroup(QDomElement& groupEle, QMap<int, GroupValue>& mapGroup)
{
	if (groupEle.isNull())
	{
		return false;
	}
	QDomElement groupItemEle = groupEle.firstChildElement("GroupItem");
	int nIndex = 0;
	while (!groupItemEle.isNull())
	{
		GroupValue stGroupValue;
		stGroupValue.m_strGroupName = groupItemEle.attribute("GroupName");
		QDomElement stationItemEle = groupItemEle.firstChildElement("StationItem");
		while (!stationItemEle.isNull())
		{
			StationInfo stStationInfo;
			stStationInfo.m_strStationName = stationItemEle.attribute("Name");
			stStationInfo.m_strPhoneNumber = stationItemEle.attribute("PhoneNumber");
			stStationInfo.m_strIpAddr = stationItemEle.attribute("Address");
			stGroupValue.m_lstGroupInfo.push_back(stStationInfo);
			stationItemEle = stationItemEle.nextSiblingElement("StationItem");
		}
		mapGroup[nIndex++] = stGroupValue;
		groupItemEle = groupItemEle.nextSiblingElement("GroupItem");
	}
	
	return true;
}

bool CDispatherCommunication::ReadStation(QDomElement& staionEle, QMap<int, StationInfo>& mapPhoneNumber)
{
	if (staionEle.isNull())
	{
		return false;
	}
	QDomElement stationItemEle = staionEle.firstChildElement("StationItem");
	int nIndex = 0;
	while (!stationItemEle.isNull())
	{
		StationInfo stStationInfo;
		stStationInfo.m_strStationName = stationItemEle.attribute("Name");
		stStationInfo.m_strPhoneNumber = stationItemEle.attribute("PhoneNumber");
		stStationInfo.m_strIpAddr = stationItemEle.attribute("Address");
		mapPhoneNumber[nIndex++] = stStationInfo;
		stationItemEle = stationItemEle.nextSiblingElement("StationItem");
	}

	return true;
}

int CDispatherCommunication::SetCurFuncStyle(QToolButton* pBtn)
{
	int nIndex = 0;
	if (nullptr == pBtn)
	{
		return -1;
	}

	for (int i = 0; i < 12; ++i)
	{
		QToolButton* pBtnTemp = m_lstFuncBtn.at(i);
		if (nullptr == pBtnTemp)
		{
			continue;
		}
		if (pBtnTemp == pBtn)
		{
			pBtnTemp->setStyleSheet("color:rgb(255,255,0)");
			nIndex = i;
		}
		else
		{
			pBtnTemp->setStyleSheet("color:rgb(0,0,0)");
		}
	}

	return nIndex;
}
