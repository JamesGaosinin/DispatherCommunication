#pragma once

#include <QObject>
#include <QAbstractSocket>

typedef void(*RecvResponse)(const char*data, void* arg);// �������ݣ������������Żش���ȥ

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
	// ��������
	void Slot_PendingDataGram();
	// ��������
	void SLot_WriteData(const char* buffer, int nLen);

	void Slot_Error(QAbstractSocket::SocketError socketError);

private:
	QTcpSocket* m_pSocket;					// �׽���
	QThread* m_pWorkThread;					// �����߳�

	QString m_strAddr;						// ��ַ
	int m_nPort;							// �˿�
	int m_nRecoTime;						// �����¼�
	bool m_bConnectState;					// ����״̬

	RecvResponse m_FuncRecvCallBack;		// �յ������ص�
	void* m_pArg;							// �ص��ŵ�this
};
