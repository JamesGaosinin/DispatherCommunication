#ifndef __NETPROTOCOLHEADER_H__
#define __NETPROTOCOLHEADER_H__
#include <stdint.h>

#define __MAX_ADDR_BUFFER_LENGTH__ (16)

#pragma pack(push, 1)

enum class E_Msg_Type : unsigned char
{
	E_Msg_Type_Unkown=0,				// 未知
	E_Msg_Type_Comming,					// 来电
	E_Msg_Type_SingelCall,				// 单播
	E_Msg_Type_MultiCall,				// 多播
	E_Msg_Type_Answer,					// 接听
	E_Msg_Type_Hangup,					// 挂断
};

struct Head
{
	int64_t lTime;						// 时钟
	int32_t nPackIndex;					// 包序
	E_Msg_Type eMsgType;				// 消息号
};

struct PhoneAddr
{
	char addr[__MAX_ADDR_BUFFER_LENGTH__];		// ip地址
};

struct SingelCall
{
	Head stHead;						// 包头
	PhoneAddr stAddr;					// 拨打地址
};

struct MultiCall
{
	Head stHead;						// 包头
	int32_t nCallCnt;					// 拨打个数
	PhoneAddr* pAddr;					// 拨打电话缓冲区 占位符(nCallCnt * __MAXBUFFERLENGTH__）
};

#pragma pack(pop)
#endif	//!__NETPROTOCOLHEADER_H__