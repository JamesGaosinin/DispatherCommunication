#ifndef __NETPROTOCOLHEADER_H__
#define __NETPROTOCOLHEADER_H__
#include <stdint.h>

#define __MAX_ADDR_BUFFER_LENGTH__ (16)

#pragma pack(push, 1)

enum class E_Msg_Type : unsigned char
{
	E_Msg_Type_Unkown=0,				// δ֪
	E_Msg_Type_Comming,					// ����
	E_Msg_Type_SingelCall,				// ����
	E_Msg_Type_MultiCall,				// �ಥ
	E_Msg_Type_Answer,					// ����
	E_Msg_Type_Hangup,					// �Ҷ�
};

struct Head
{
	int64_t lTime;						// ʱ��
	int32_t nPackIndex;					// ����
	E_Msg_Type eMsgType;				// ��Ϣ��
};

struct PhoneAddr
{
	char addr[__MAX_ADDR_BUFFER_LENGTH__];		// ip��ַ
};

struct SingelCall
{
	Head stHead;						// ��ͷ
	PhoneAddr stAddr;					// �����ַ
};

struct MultiCall
{
	Head stHead;						// ��ͷ
	int32_t nCallCnt;					// �������
	PhoneAddr* pAddr;					// ����绰������ ռλ��(nCallCnt * __MAXBUFFERLENGTH__��
};

#pragma pack(pop)
#endif	//!__NETPROTOCOLHEADER_H__