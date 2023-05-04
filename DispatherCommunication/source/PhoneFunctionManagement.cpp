#include "PhoneFunctionManagement.h"
#include <thread>
#include <chrono>
#include <QTcpSocket>
#include <QHostAddress>
#include <QThread>
#include "NetProtocolHeader.h"
#include "QApplication"
#include "NetClient.h"

using namespace std::chrono;
extern int g_nMaxNetBufferLength;

CPhoneFunctionManagement::CPhoneFunctionManagement(QObject *parent)
	: QObject(parent)
	, m_nPackCnt(1)
	, m_pNetClient(nullptr)
	, m_pNetBuffer(nullptr)
{
	Init();
}

CPhoneFunctionManagement::~CPhoneFunctionManagement()
{
	if (nullptr != m_pNetBuffer)
	{
		delete m_pNetBuffer;
		m_pNetBuffer = nullptr;
	}
}

void CPhoneFunctionManagement::OnRecvData(const char* buffer, void* arg)
{
	CPhoneFunctionManagement* pThis = (CPhoneFunctionManagement*)arg;
	// TODO
}

void CPhoneFunctionManagement::SetState(E_Phone_Manager_State eState, const QString& strMsg)
{
	m_ePhoneManageState = eState;
	emit Sig_ChangeCtrlState(eState, strMsg);
}

E_Phone_Manager_State CPhoneFunctionManagement::GetState()
{
	return m_ePhoneManageState;
}

bool CPhoneFunctionManagement::CallMult(QList<StationInfo>& lstBuddy)
{
	if (nullptr == m_pNetClient)
	{
		return false;
	}

	Head stHead;
	system_clock::time_point timePoint = system_clock().now();
	milliseconds duration = duration_cast<milliseconds>(timePoint.time_since_epoch());
	stHead.lTime = duration.count();
	stHead.eMsgType = E_Msg_Type::E_Msg_Type_MultiCall;
	stHead.nPackIndex = m_nPackCnt++;

	int nTotalSize = 0;
	memset(m_pNetBuffer, 0, g_nMaxNetBufferLength);
	memcpy(m_pNetBuffer, &stHead, sizeof(Head));
	nTotalSize += sizeof(Head);
	int nCallCnt = lstBuddy.size();
	memcpy(m_pNetBuffer + nTotalSize, &nCallCnt, sizeof(int));
	nTotalSize += sizeof(int);

	for (int i = 0; i < nCallCnt; ++i)
	{
		StationInfo var = lstBuddy.at(i);
		PhoneAddr stAddr;
		strcpy(m_pNetBuffer + nTotalSize, var.m_strIpAddr.toLocal8Bit().data());
		nTotalSize += __MAX_ADDR_BUFFER_LENGTH__;
	}
	emit m_pNetClient->Sig_SendData((const char*)m_pNetBuffer, sizeof(SingelCall));

	return true;
}

bool CPhoneFunctionManagement::Call(StationInfo& stBuddy)
{
	if (nullptr == m_pNetClient)
	{
		return false;
	}

	m_lstPhoneNumber << stBuddy;
	// 调用拨打电话
	SingelCall stInfo;
	system_clock::time_point timePoint = system_clock().now();
	milliseconds duration = duration_cast<milliseconds>(timePoint.time_since_epoch());
	stInfo.stHead.lTime = duration.count();
	stInfo.stHead.eMsgType = E_Msg_Type::E_Msg_Type_SingelCall;
	stInfo.stHead.nPackIndex = m_nPackCnt++;
	strcpy(stInfo.stAddr.addr, stBuddy.m_strIpAddr.toLocal8Bit().data());
	memset(m_pNetBuffer, 0, g_nMaxNetBufferLength);
	memcpy(m_pNetBuffer, &stInfo, sizeof(SingelCall));
	if (nullptr != m_pNetClient)
	{
		emit m_pNetClient->Sig_SendData((const char*)m_pNetBuffer, sizeof(SingelCall));
	}

	return true;
}

void CPhoneFunctionManagement::PickupPhone(const QString& strNumber)
{
	// 调用接听电话 TODO
}
 
void CPhoneFunctionManagement::ComingCall(const QString& strAddr)
{
	// TODO 来电
	StationInfo stBuddy; 
	stBuddy.m_strIpAddr = strAddr;
	m_lstPhoneNumber.push_back(stBuddy);
}

void CPhoneFunctionManagement::Quit(const QString& strNumber)
{
	// TODO挂断

	//if (m_lstPhoneNumber.empty())
	//{
	//	//emit Sig_ChangeBtnStatus(E_Phone_Status_Normal, )
	//}
}

void CPhoneFunctionManagement::Terminal()
{
	// TODO  终止     
}

void CPhoneFunctionManagement::Clear()
{
	// TODO
	m_lstPhoneNumber.clear();
}

void CPhoneFunctionManagement::Init()
{
	m_pNetClient = new CNetClient;
	m_pNetBuffer = new char[g_nMaxNetBufferLength];
	m_pNetClient->Initalize(&CPhoneFunctionManagement::OnRecvData, this, "127.0.0.1", 5010, 3000);
}
