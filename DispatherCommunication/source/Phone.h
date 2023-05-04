#pragma once

#include <QObject>
#include "Common.h"

class CPhone : public QObject
{
	Q_OBJECT

public:
	CPhone(QObject *parent = nullptr);
	~CPhone();
	static CPhone* GetInstance();
	static void Release();
	
	void Initalize(QMap<QString, PageInfo> mapInfo);
	QList<PhoneBookEntry> GetPhoneBook();
	QList<PhoneCallRecord> GetPhoneRecord();

private:
	static CPhone* m_pInstance;
	QList<PhoneBookEntry> m_lstPhoneBook;			// 电话簿
	QList<PhoneCallRecord> m_lstPhoneRecord;		// 通话记录
};
