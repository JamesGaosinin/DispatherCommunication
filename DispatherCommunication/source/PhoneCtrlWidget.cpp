#include "PhoneCtrlWidget.h"
#include <QPushButton>
#include "PhoneFunctionManagement.h"
#include "PhoneBookWidget.h"
#include "PhoneRecordDialog.h"

CPhoneCtrlWidget::CPhoneCtrlWidget(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	Init();
}

CPhoneCtrlWidget::~CPhoneCtrlWidget()
{
}

void CPhoneCtrlWidget::SetPhoneFuncManager(CPhoneFunctionManagement* pManager)
{
	m_pManager = pManager;
	connect(m_pManager, &CPhoneFunctionManagement::Sig_ChangeCtrlState, this, &CPhoneCtrlWidget::Slot_ChangedState);
}

void CPhoneCtrlWidget::Slot_ChangedState(E_Phone_Manager_State eState, const QString& strMsg)
{
	switch (eState)
	{
	case E_Phone_Manager_State_Normal:
	{
		int a = 0;
	}break;
	case E_Phone_Manager_State_Calling:
	{
		int a = 0;
	}break;
	case E_Phone_Manager_State_Meeting:
	{
										  
	}break;
	case E_Phone_Manager_State_Ringing:
	{
		int a = 0;
	}break;
	case E_Phone_Manager_State_Talking:
	{
		int a = 0;
	}break;
	default:
		break;
	}

	ui.label_Display_L->setText(strMsg);
	ui.label_Display_R->setText(strMsg);
}

void CPhoneCtrlWidget::Slot_BtnClicked()
{
	// TODO ²âÊÔ
	QObject* pObj = sender();
	if (pObj == ui.Btn_Quit)
	{
		m_pManager->Sig_ChangeBtnStatus(E_Phone_Status_Normal, "000");
	}
	else if (pObj == ui.Btn_Help)
	{
		m_pManager->Sig_ChangeBtnStatus(E_Phone_Status_Pickup, "000");
	}
}

void CPhoneCtrlWidget::Slot_Record()
{
	if (nullptr == m_pPhoneBookWgt)
	{
		return;
	}

	m_pPhoneRecordDlg->exec();
}

void CPhoneCtrlWidget::Slot_PhoneBook()
{
	if (nullptr == m_pPhoneBookWgt)
	{
		return;
	}

	m_pPhoneBookWgt->exec();
}

void CPhoneCtrlWidget::Init()
{
	m_pPhoneBookWgt = new CPhoneBookWidget(this);
	m_pPhoneRecordDlg = new CPhoneRecordDialog(this);
	InitStyleSheet();
	InitConnect();
}

void CPhoneCtrlWidget::InitStyleSheet()
{
}

void CPhoneCtrlWidget::InitConnect()
{
	connect(ui.Btn_Quit, &QPushButton::clicked, this, &CPhoneCtrlWidget::Slot_BtnClicked);
	connect(ui.Btn_Help, &QPushButton::clicked, this, &CPhoneCtrlWidget::Slot_BtnClicked);

	connect(ui.Btn_Record, &QPushButton::clicked, this, &CPhoneCtrlWidget::Slot_Record);
	connect(ui.Btn_PhoneBook, &QPushButton::clicked, this, &CPhoneCtrlWidget::Slot_PhoneBook);
}
