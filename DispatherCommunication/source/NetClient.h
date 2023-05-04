#pragma once

#include <QObject>
#include <QAbstractSocket>

typedef void(*RecvResponse)(const char*data, void* arg);// 网络数据，将函数所有着回传回去

class QTcpSocket;
class CNetReCoThread;
class CNetRecvThread;
class CNetSendThread;

class CNetClient : public QObject
{
	Q_OBJECT

public:
	CNetClient(QObject *parent = nullptr);
	~CNetClient();
	
public:
	void Initalize(RecvResponse CallBack, void* arg, const QString& strAddr, int nPort, int nReconnectTime);
	void Start();

signals:
	void Sig_SendData(const char* buffer, int nLen);

private slots:
	void Slot_Disconnected();
	void Slot_Connected();
	void Slot_Working();
	// 接受数据
	void Slot_PendingDataGram();
	// 发送数据
	void SLot_WriteData(const char* buffer, int nLen);

	void Slot_Error(QAbstractSocket::SocketError socketError);

private:
	QTcpSocket* m_pSocket;					// 套接字
	QThread* m_pWorkThread;					// 工作线程

	QString m_strAddr;						// 地址
	int m_nPort;							// 端口
	int m_nRecoTime;						// 重连事件
	bool m_bConnectState;					// 链接状态

	RecvResponse m_FuncRecvCallBack;		// 收到函数回调
	void* m_pArg;							// 回调放的this
};
