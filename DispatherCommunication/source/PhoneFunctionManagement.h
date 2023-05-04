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
	// 接听电话的回调函数
	void PickupPhone(const QString& strNumber);
	// 当有电话来时回调函数-- 来电
	void ComingCall(const QString& strAddr);
	// 挂断
	void Quit(const QString& strNumber);
	// 终止所有
	void Terminal();

	void Clear();

// 主动拨打不需要调用，来电时调用
signals:
	void Sig_ChangeBtnStatus(E_Phone_Status eStatus, const QString& strPhoneNum);
	void Sig_ChangeCtrlState(E_Phone_Manager_State eState, const QString& strMsg);
	void Sig_HangupPhone(const QString& strPhoneNum);

private:
	void Init();

private:
	QList<StationInfo> m_lstPhoneNumber;		// 呼出号码
	E_Phone_Manager_State m_ePhoneManageState = E_Phone_Manager_State_Normal;

	CNetClient* m_pNetClient;
	int m_nPackCnt;

	char* m_pNetBuffer;
};
