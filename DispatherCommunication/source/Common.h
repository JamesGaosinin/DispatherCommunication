#ifndef __COMMON_H_
#define  __COMMON_H_
#include <QString>
#include <QMap>


enum E_Phone_Status
{
	E_Phone_Status_Normal,		// 普通状态--空闲
	E_Phone_Status_Call,		// 拨打状态--去话
	E_Phone_Status_ComingCall,	// 来电状态--来话
	E_Phone_Status_Pickup,		// 接听状态--通话中

	E_Phone_Status_Emergency_CommingCall,// 紧急来话
	E_Phone_Status_Pickup_Other,	// 与他台通话中
	E_Phone_Status_Busy,			// 忙
};

enum E_Phone_Manager_State
{
	E_Phone_Manager_State_Normal,	// 普通状态
	E_Phone_Manager_State_Calling,	// 呼叫状态
	E_Phone_Manager_State_Meeting,	// 会议状态
	E_Phone_Manager_State_Ringing,	// 来电状态
	E_Phone_Manager_State_Talking,	// 通话状态
};

struct StationInfo
{
	QString m_strStationName;				// 站点名称
	QString m_strPhoneNumber;				// 电话号码
	QString m_strIpAddr;					// IP地址

};

struct GroupValue
{
	QString m_strGroupName;				// 索引
	QList<StationInfo> m_lstGroupInfo;		// 连锁区名称
};

struct PageInfo
{
	QMap<int, GroupValue> m_mapGroup;
	QMap<int, StationInfo> m_mapPhoneNumber;
};

struct PhoneBookEntry
{
	int m_nPageNo;				// 页号
	int m_nFastButton;			// 热键
	QString m_strStationName;	// 名称
	QString m_strPhoneNo1;		// 电话号码1
	QString m_strPhoneNo2;		// 电话号码2
	QString m_strPhoneNo3;		// 电话号码3
	QString m_strPhoneNo4;		// 电话号码4
};

struct PhoneCallRecord
{
	int m_nPageNo;				// 页号
	QString m_strPhoneNo;		// 电话号码
	QString m_strStationName;	// 名称
	int m_nCallType;			// 电话类型	0 去话 1应答来话
	long long m_lCommuTime;		// 通话时间
	int m_nCommuDuration;		// 通话时长
};

Q_DECLARE_METATYPE(E_Phone_Status)
Q_DECLARE_METATYPE(E_Phone_Manager_State)

#endif // !__COMMON_H_
