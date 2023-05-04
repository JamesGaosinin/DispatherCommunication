#include "AddressBookWidget.h"
#include <QFrame>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QGridLayout>
#include <QToolButton>
#include "PhoneFunctionManagement.h"

CAddressBookWidget::CAddressBookWidget(QWidget *parent)
	: QWidget(parent)
{
	Init();
}

CAddressBookWidget::~CAddressBookWidget()
{
}

void CAddressBookWidget::Intialize(const QMap<int, GroupValue>& mapGroup, const QMap<int, StationInfo>& mapPhoneNumber)
{
	m_mapToolBtn.clear();
	m_mapGroup = mapGroup;
	m_mapPhoneInfo = mapPhoneNumber;
	if (nullptr == m_pAddressBookLayout)
	{
		return;
	}
	m_pAddressBookLayout->setMargin(0);
	m_pAddressBookLayout->setSpacing(5);

	for (int i = 0; i < 40; ++i)
	{
		QToolButton* pToolButton = new QToolButton(this);
		connect(pToolButton, &QToolButton::clicked, this, &CAddressBookWidget::Slot_BtnClicked);
		pToolButton->setCheckable(true);
		pToolButton->setMinimumWidth(95);
		pToolButton->setMinimumHeight(90);
		m_pAddressBookLayout->addWidget(pToolButton, i / ___MAXCHAINZONE__, i % ___MAXCHAINZONE__, Qt::AlignHCenter);
		// 连锁区
		if (i < ___MAXCHAINZONE__)
		{
			auto itr = m_mapGroup.find(i);
			if (itr != m_mapGroup.end())
			{
				QString strName = itr.value().m_strGroupName;
				strName.insert(3, '\n');
				pToolButton->setText(strName);
				m_mapToolBtn[strName] = pToolButton;
			}
		}
		else // 单独电话
		{
			auto itr = m_mapPhoneInfo.find(i - ___MAXCHAINZONE__);
			if (itr != m_mapPhoneInfo.end())
			{
				QString strName = itr.value().m_strStationName;
				pToolButton->setText(strName);
				m_mapToolBtn[strName] = pToolButton;
			}
		}
	}
}

void CAddressBookWidget::SetPhoneFuncManager(CPhoneFunctionManagement* pManager)
{
	m_pManager = pManager;
}

void CAddressBookWidget::Slot_SetPhoneState(E_Phone_Status eStatus, const QString& strPhoneNum)
{
	int nIndex = m_lstCurCallGroupRemain.indexOf(strPhoneNum);
	if (nIndex >= 0 && nIndex < m_lstCurCallGroupRemain.size())
	{
		m_lstCurCallGroupRemain.removeAt(nIndex);
		if (m_lstCurCallGroupRemain.empty())
		{
			auto itr = m_mapToolBtn.find(m_strCurCallGroup);
			if (itr != m_mapToolBtn.end())
			{
				QToolButton* pBtn = itr.value();
				if (pBtn != nullptr)
				{
					pBtn->setStyleSheet("background-color:rgb(192,192,192);");
					m_strCurCallGroup = "";
				}
			}
		}
	}

	QToolButton* pBtn = nullptr;
	auto itr = m_mapToolBtn.find(GetStationName(strPhoneNum));
	if (itr == m_mapToolBtn.end())
	{
		return;
	}
	pBtn = itr.value();
	if (nullptr == pBtn)
	{
		return;
	}
	switch (eStatus)
	{
	case E_Phone_Status_Normal:
		pBtn->setStyleSheet(QString("background-color:rgb(192,192,192);"));
		break;
	case E_Phone_Status_Call:
		pBtn->setStyleSheet(QString("background-color:rgb(185,122,87);"));
		break;
	case E_Phone_Status_ComingCall:
		pBtn->setStyleSheet(QString("background-color:rgb(255,0,0);"));
		break;
	case E_Phone_Status_Pickup:
		pBtn->setStyleSheet(QString("background-color:rgb(181,230,29);"));
		break;
	}
}

void CAddressBookWidget::Slot_BtnClicked()
{
	if (m_pManager->GetState() != E_Phone_Manager_State_Normal)
	{
		return;
	}

	QObject* pObj = sender();
	QToolButton* pBtn = dynamic_cast<QToolButton*>(pObj);
	if (nullptr == pBtn)
	{
		return;
	}
	QString strStationName = pBtn->text();
	strStationName.remove("\n");
	if (strStationName.isEmpty())
	{
		return;
	}
	pBtn->setStyleSheet("background-color:rgb(255,0,0);");
	// TODO
	int nIndex = m_pAddressBookLayout->indexOf(pBtn);
	int nRow = 0, nColum = 0, nTempRow = 0, nTempColum = 0;
	m_pAddressBookLayout->getItemPosition(nIndex, &nRow, &nColum, &nTempRow, &nTempColum);
	// 连锁去
	if (nRow == 0)
	{
		// 连锁区电话记录
		m_strCurCallGroup = strStationName;

		GroupValue stGroupValue = m_mapGroup[nColum];
		if (stGroupValue.m_strGroupName != strStationName)
		{
			return;
		}
		for each (StationInfo var in stGroupValue.m_lstGroupInfo)
		{
			m_lstCurCallGroupRemain.push_back(var.m_strPhoneNumber);
			Slot_SetPhoneState(E_Phone_Status_Call, var.m_strPhoneNumber);
		}
		m_pManager->CallMult(stGroupValue.m_lstGroupInfo);

		if (nullptr != m_pManager)
		{
			m_pManager->SetState(E_Phone_Manager_State_Meeting, stGroupValue.m_strGroupName);
		}
	}
	else// 单独电话
	{
		int nSingleBtnIndex = (nRow - 1)* ___MAXCHAINZONE__ + nColum;
		StationInfo stStationInfo = m_mapPhoneInfo[nSingleBtnIndex];
		Slot_SetPhoneState(E_Phone_Status_Call, GetPhoneNum(strStationName));
		QString strPhoneNum = GetPhoneNum(strStationName);
		if (m_pManager->Call(stStationInfo))
		{
			if (nullptr != m_pManager)
			{
				m_pManager->SetState(E_Phone_Manager_State_Calling, strPhoneNum);
			}
		}
	}
}

void CAddressBookWidget::Init()
{
	InitGUI();
	InitStyleSheet();
	InitConnect();
}

void CAddressBookWidget::InitStyleSheet()
{
	QString strStyleSheet = QString(".QToolButton{background-color:rgb(192,192,192);\
									border-top:2px solid rgb(255,255,255);\
									border-left:2px solid rgb(255,255,255);\
									border-right:2px solid rgb(0,0,0);\
									border-bottom:2px solid rgb(0,0,0);}");
									
	setStyleSheet(styleSheet() + strStyleSheet);
}

void CAddressBookWidget::InitGUI()
{
	QVBoxLayout* pVBoxLayout = new QVBoxLayout(this);
	pVBoxLayout->setMargin(5);
	this->setLayout(pVBoxLayout);
	m_pFrameAddress = new QFrame(this);
	m_pFrameRetain = new QFrame(this);
	pVBoxLayout->addWidget(m_pFrameAddress);
	pVBoxLayout->addWidget(m_pFrameRetain);

	// 电话簿
	m_pAddressBookLayout = new QGridLayout(this);
	m_pFrameAddress->setLayout(m_pAddressBookLayout);

	// 预留区域
	QHBoxLayout* pLayout = new QHBoxLayout(this);
	m_pFrameRetain->setLayout(pLayout);
	pLayout->setMargin(0);
	pLayout->setSpacing(5);
	for (int i = 0; i < 12; ++i)
	{
		QToolButton* pToolButton = new QToolButton(this);
		pToolButton->setMinimumWidth(80);
		pToolButton->setMinimumHeight(60);
		pLayout->addWidget(pToolButton);
	}
}

void CAddressBookWidget::InitConnect()
{

}

QString CAddressBookWidget::GetPhoneNum(const QString& strStationName)
{
	auto itr = m_mapPhoneInfo.begin();
	for (; itr != m_mapPhoneInfo.end(); ++itr)
	{
		StationInfo stStationInfo = itr.value();
		if (stStationInfo.m_strStationName == strStationName)
		{
			return stStationInfo.m_strPhoneNumber;
		}
	}

	return "";
}

QString CAddressBookWidget::GetStationName(const QString& strPhoneNum)
{
	auto itr = m_mapPhoneInfo.begin();
	for (; itr != m_mapPhoneInfo.end(); ++itr)
	{
		StationInfo stStationInfo = itr.value();
		if (stStationInfo.m_strPhoneNumber == strPhoneNum)
		{
			return stStationInfo.m_strStationName;
		}
	}

	return "";
}
