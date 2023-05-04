#pragma once

#include <QWidget>
#include "ui_PhoneCtrlWidget.h"
#include "Common.h"
class CPhoneFunctionManagement;
class CPhoneBookWidget;
class CPhoneRecordDialog;

class CPhoneCtrlWidget : public QWidget
{
	Q_OBJECT

public:
	CPhoneCtrlWidget(QWidget *parent = Q_NULLPTR);
	~CPhoneCtrlWidget();
	void SetPhoneFuncManager(CPhoneFunctionManagement* pManager);

private slots:
	// 快捷拨号 + 来电
	void Slot_ChangedState(E_Phone_Manager_State eState, const QString& strMsg = QStringLiteral("会议"));
	// 主动控制
	void Slot_BtnClicked();

	// 通话记录
	void Slot_Record();
	// 电话簿
	void Slot_PhoneBook();

private:
	void Init();
	void InitStyleSheet();
	void InitConnect();

private:
	Ui::CPhoneCtrlWidget ui;
	CPhoneFunctionManagement* m_pManager = nullptr;			// 电话功能管理
	CPhoneBookWidget* m_pPhoneBookWgt = nullptr;			// 电话簿功能
	CPhoneRecordDialog* m_pPhoneRecordDlg = nullptr;		// 电话记录
};
