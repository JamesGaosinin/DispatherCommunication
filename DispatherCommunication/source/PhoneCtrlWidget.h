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
	// ��ݲ��� + ����
	void Slot_ChangedState(E_Phone_Manager_State eState, const QString& strMsg = QStringLiteral("����"));
	// ��������
	void Slot_BtnClicked();

	// ͨ����¼
	void Slot_Record();
	// �绰��
	void Slot_PhoneBook();

private:
	void Init();
	void InitStyleSheet();
	void InitConnect();

private:
	Ui::CPhoneCtrlWidget ui;
	CPhoneFunctionManagement* m_pManager = nullptr;			// �绰���ܹ���
	CPhoneBookWidget* m_pPhoneBookWgt = nullptr;			// �绰������
	CPhoneRecordDialog* m_pPhoneRecordDlg = nullptr;		// �绰��¼
};
