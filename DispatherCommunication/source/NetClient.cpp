#include "NetClient.h"
#include <QTcpSocket>
#include <QHostAddress>
#include <QThread>

int g_nMaxNetBufferLength = 1024;

CNetClient::CNetClient(QObject *parent)
	: QObject(parent)
	, m_bConnectState(false)
{
}

CNetClient::~CNetClient()
{
}

void CNetClient::Initalize(RecvResponse CallBack, void* arg, const QString& strAddr, int nPort, int nReconnectTime)
{
	m_FuncRecvCallBack = CallBack;
	m_pArg = arg;
	m_strAddr = strAddr;
	m_nPort = nPort;
	m_nRecoTime = nReconnectTime;
	m_pSocket = new QTcpSocket(this);
	connect(m_pSocket, &QTcpSocket::connected, this, &CNetClient::Slot_Connected);
	connect(m_pSocket, &QTcpSocket::disconnected, this, &CNetClient::Slot_Disconnected);
	connect(m_pSocket, &QTcpSocket::readyRead, this, &CNetClient::Slot_PendingDataGram);
	connect(this, &CNetClient::Sig_SendData, this, &CNetClient::SLot_WriteData);
	m_pWorkThread = new QThread;
	connect(m_pWorkThread, &QThread::started, this, &CNetClient::Slot_Working);
	connect(m_pWorkThread, &QThread::finished, m_pSocket, &QTcpSocket::deleteLater);
	connect(m_pWorkThread, &QThread::finished, this, &CNetClient::deleteLater);
	connect(m_pWorkThread, &QThread::finished, m_pWorkThread, &QThread::deleteLater);
	this->moveToThread(m_pWorkThread);
	m_pWorkThread->start();
}

void CNetClient::Start()
{
	if (nullptr != m_pWorkThread)
	{
		m_pWorkThread->start();
	}
}

void CNetClient::Slot_Disconnected()
{
	m_bConnectState = false;
	if (nullptr != m_pSocket)
	{
		m_pSocket->connectToHost(m_strAddr, m_nPort);
		m_bConnectState = m_pSocket->waitForConnected(m_nRecoTime);
	}
}

void CNetClient::Slot_Connected()
{
	int a = 0;
}

void CNetClient::Slot_Working()
{
	if (nullptr != m_pSocket)
	{
		m_pSocket->connectToHost(m_strAddr, m_nPort);
		m_bConnectState = m_pSocket->waitForConnected(m_nRecoTime);
	}
}

void CNetClient::Slot_PendingDataGram()
{
	if (nullptr != m_pSocket)
	{
		QByteArray arr = m_pSocket->readAll();
		m_FuncRecvCallBack(arr.data(), m_pArg);
	}
}

void CNetClient::SLot_WriteData(const char* buffer, int nLen)
{
	int nTotalSize = 0;
	while (nTotalSize < nLen)
	{
		int nSendSize = m_pSocket->write(buffer, nLen);
		m_pSocket->flush();
		nTotalSize += nSendSize;
	}
}

void CNetClient::Slot_Error(QAbstractSocket::SocketError socketError)
{
	int a = 0;
}
