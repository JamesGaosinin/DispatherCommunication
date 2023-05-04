#include "PhoneBookWidget.h"
#include <QTableWidget>
#include <QHBoxLayout>
#include <QHeaderView>
#include "Phone.h"

CPhoneBookWidget::CPhoneBookWidget(QWidget *parent)
	: QDialog(parent)
{
	Init();
}

CPhoneBookWidget::~CPhoneBookWidget()
{
}

void CPhoneBookWidget::showEvent(QShowEvent* pEvent)
{
	// ��ռ�¼
	ClearTable();

	QList<PhoneBookEntry> lstPhoneBook = CPhone::GetInstance()->GetPhoneBook();
	for (int i = 0; i < lstPhoneBook.size(); ++i)
	{
		PhoneBookEntry stBook = lstPhoneBook.at(i);
		int nRowCount = m_pTableWidget->rowCount();
		int nColumnCount = 0;
		m_pTableWidget->insertRow(nRowCount);
		// ҳ��
		QTableWidgetItem* pItem = new QTableWidgetItem(QString::number(stBook.m_nPageNo));
		m_pTableWidget->setItem(nRowCount, nColumnCount++, pItem);
		// �ȼ�
		pItem = new QTableWidgetItem(QString::number(stBook.m_nFastButton));
		m_pTableWidget->setItem(nRowCount, nColumnCount++, pItem);
		// ����
		pItem = new QTableWidgetItem(stBook.m_strStationName);
		m_pTableWidget->setItem(nRowCount, nColumnCount++, pItem);
		// ����1
		pItem = new QTableWidgetItem(stBook.m_strPhoneNo1);
		m_pTableWidget->setItem(nRowCount, nColumnCount++, pItem);
	}
}

void CPhoneBookWidget::Init()
{
	InitGUI();
}

void CPhoneBookWidget::InitGUI()
{
	QHBoxLayout* pLayout = new QHBoxLayout(this);
	m_pTableWidget = new QTableWidget(this);
	m_pTableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
	pLayout->addWidget(m_pTableWidget);
	this->setLayout(pLayout);
	setWindowTitle(QStringLiteral("�绰��"));

	m_pTableWidget->setColumnCount(7);
	QStringList lstHeader;
	lstHeader << QStringLiteral("ҳ��") << QStringLiteral("�ȼ���") << QStringLiteral("����")
		<< QStringLiteral("����һ") << QStringLiteral("�����") << QStringLiteral("������")
		<< QStringLiteral("������");
	m_pTableWidget->setHorizontalHeaderLabels(lstHeader);
	m_pTableWidget->setSelectionMode(QAbstractItemView::SingleSelection);
	m_pTableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
	m_pTableWidget->horizontalHeader()->setStretchLastSection(true);
	m_pTableWidget->setAlternatingRowColors(true);
	setStyleSheet("background-color:rgb(255,255,255);");
	resize(800, 600);
}

void CPhoneBookWidget::ClearTable()
{
	int nRowCount = m_pTableWidget->rowCount();
	for (int i = 0; i < nRowCount; ++i)
	{
		m_pTableWidget->removeRow(0);
	}
}
