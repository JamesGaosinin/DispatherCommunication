#pragma once

#include <QObject>
#include "Common.h"

class QTcpSocket;
class CNetClient;

class CPhoneFunctionManagement : public QObject
{
	Q_OBJECT

public:
	CPhoneFunctionManagement(QObject *parent = nullptr);
	~CPhoneFunctionManagement();
	static void OnRecvData(const char* buffer, void* arg);

public:
	void SetState(E_Phone_Manager_State eState, const QString& strMsg);
	E_Phone_Manager_State GetState();

	bool CallMult(QList<StationInfo>& lstBuddy);

	bool Call(StationInfo& stBuddy);
	// �����绰�Ļص�����
	void PickupPhone(const QString& strNumber);
	// ���е绰��ʱ�ص�����-- ����
	void ComingCall(const QString& strAddr);
	// �Ҷ�
	void Quit(const QString& strNumber);
	// ��ֹ����
	void Terminal();

	void Clear();

// ����������Ҫ���ã�����ʱ����
signals:
	void Sig_ChangeBtnStatus(E_Phone_Status eStatus, const QString& strPhoneNum);
	void Sig_ChangeCtrlState(E_Phone_Manager_State eState, const QString& strMsg);
	void Sig_HangupPhone(const QString& strPhoneNum);

private:
	void Init();

private:
	QList<StationInfo> m_lstPhoneNumber;		// ��������
	E_Phone_Manager_State m_ePhoneManageState = E_Phone_Manager_State_Normal;

	CNetClient* m_pNetClient;
	int m_nPackCnt;

	char* m_pNetBuffer;
};
