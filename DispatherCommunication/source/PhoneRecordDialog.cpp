#include "PhoneRecordDialog.h"
#include <QTableWidget>
#include <QHBoxLayout>
#include <QHeaderView>
#include <QDateTime>
#include "Phone.h"

CPhoneRecordDialog::CPhoneRecordDialog(QWidget *parent)
	: QDialog(parent)
{
	Init();
}

CPhoneRecordDialog::~CPhoneRecordDialog()
{
}

void CPhoneRecordDialog::showEvent(QShowEvent* pEvent)
{
	// ��ռ�¼
	ClearTable();

	QList<PhoneCallRecord> lstPhoneBook = CPhone::GetInstance()->GetPhoneRecord();
	for (int i = 0; i < lstPhoneBook.size(); ++i)
	{
		PhoneCallRecord stRecord = lstPhoneBook.at(i);
		int nRowCount = m_pTableWidget->rowCount();
		int nColumnCount = 0;
		m_pTableWidget->insertRow(nRowCount);
		// ҳ��
		QTableWidgetItem* pItem = new QTableWidgetItem(QString::number(stRecord.m_nPageNo));
		m_pTableWidget->setItem(nRowCount, nColumnCount++, pItem);
		// ����
		pItem = new QTableWidgetItem(stRecord.m_strPhoneNo);
		m_pTableWidget->setItem(nRowCount, nColumnCount++, pItem);
		// ����
		pItem = new QTableWidgetItem(stRecord.m_strStationName);
		m_pTableWidget->setItem(nRowCount, nColumnCount++, pItem);
		// ����
		pItem = new QTableWidgetItem(stRecord.m_nCallType == 0 ? QStringLiteral("ȥ��") : QStringLiteral("Ӧ������"));
		m_pTableWidget->setItem(nRowCount, nColumnCount++, pItem);
		// ͨ��ʱ��
		QDateTime dateTime;
		dateTime.setTime_t(stRecord.m_lCommuTime);
		pItem = new QTableWidgetItem(dateTime.toString("yyyy-MM-dd hh:mm:ss"));
		m_pTableWidget->setItem(nRowCount, nColumnCount++, pItem);
		// ʱ��
		pItem = new QTableWidgetItem(QString::number(stRecord.m_nCommuDuration));
		m_pTableWidget->setItem(nRowCount, nColumnCount++, pItem);
	}
}

void CPhoneRecordDialog::Init()
{
	InitGUI();
}

void CPhoneRecordDialog::InitGUI()
{
	QHBoxLayout* pLayout = new QHBoxLayout(this);
	m_pTableWidget = new QTableWidget(this);
	m_pTableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
	pLayout->addWidget(m_pTableWidget);
	this->setLayout(pLayout);
	setWindowTitle(QStringLiteral("���м�¼"));

	m_pTableWidget->setColumnCount(6);
	QStringList lstHeader;
	lstHeader << QStringLiteral("ҳ��") << QStringLiteral("����") << QStringLiteral("����")
		<< QStringLiteral("����") << QStringLiteral("ͨ��ʱ��") << QStringLiteral("ʱ��(��)");
	m_pTableWidget->setHorizontalHeaderLabels(lstHeader);
	m_pTableWidget->setSelectionMode(QAbstractItemView::SingleSelection);
	m_pTableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
	m_pTableWidget->horizontalHeader()->setStretchLastSection(true);
	m_pTableWidget->setAlternatingRowColors(true);
	m_pTableWidget->setColumnWidth(4, 250);
	setStyleSheet("background-color:rgb(255,255,255);");
	resize(800, 600);
}

void CPhoneRecordDialog::ClearTable()
{
	int nRowCount = m_pTableWidget->rowCount();
	for (int i = 0; i < nRowCount; ++i)
	{
		m_pTableWidget->removeRow(0);
	}
}
