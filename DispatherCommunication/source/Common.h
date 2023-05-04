#ifndef __COMMON_H_
#define  __COMMON_H_
#include <QString>
#include <QMap>


enum E_Phone_Status
{
	E_Phone_Status_Normal,		// ��ͨ״̬--����
	E_Phone_Status_Call,		// ����״̬--ȥ��
	E_Phone_Status_ComingCall,	// ����״̬--����
	E_Phone_Status_Pickup,		// ����״̬--ͨ����

	E_Phone_Status_Emergency_CommingCall,// ��������
	E_Phone_Status_Pickup_Other,	// ����̨ͨ����
	E_Phone_Status_Busy,			// æ
};

enum E_Phone_Manager_State
{
	E_Phone_Manager_State_Normal,	// ��ͨ״̬
	E_Phone_Manager_State_Calling,	// ����״̬
	E_Phone_Manager_State_Meeting,	// ����״̬
	E_Phone_Manager_State_Ringing,	// ����״̬
	E_Phone_Manager_State_Talking,	// ͨ��״̬
};

struct StationInfo
{
	QString m_strStationName;				// վ������
	QString m_strPhoneNumber;				// �绰����
	QString m_strIpAddr;					// IP��ַ

};

struct GroupValue
{
	QString m_strGroupName;				// ����
	QList<StationInfo> m_lstGroupInfo;		// ����������
};

struct PageInfo
{
	QMap<int, GroupValue> m_mapGroup;
	QMap<int, StationInfo> m_mapPhoneNumber;
};

struct PhoneBookEntry
{
	int m_nPageNo;				// ҳ��
	int m_nFastButton;			// �ȼ�
	QString m_strStationName;	// ����
	QString m_strPhoneNo1;		// �绰����1
	QString m_strPhoneNo2;		// �绰����2
	QString m_strPhoneNo3;		// �绰����3
	QString m_strPhoneNo4;		// �绰����4
};

struct PhoneCallRecord
{
	int m_nPageNo;				// ҳ��
	QString m_strPhoneNo;		// �绰����
	QString m_strStationName;	// ����
	int m_nCallType;			// �绰����	0 ȥ�� 1Ӧ������
	long long m_lCommuTime;		// ͨ��ʱ��
	int m_nCommuDuration;		// ͨ��ʱ��
};

Q_DECLARE_METATYPE(E_Phone_Status)
Q_DECLARE_METATYPE(E_Phone_Manager_State)

#endif // !__COMMON_H_
