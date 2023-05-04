#include "Phone.h"

CPhone* CPhone::m_pInstance = nullptr;

CPhone::CPhone(QObject *parent)
	: QObject(parent)
{
}

CPhone::~CPhone()
{
}

CPhone* CPhone::GetInstance()
{
	if (nullptr == m_pInstance)
	{
		m_pInstance = new CPhone;
	}
	return m_pInstance;
}

void CPhone::Release()
{
	if (nullptr != m_pInstance)
	{
		delete m_pInstance;
		m_pInstance = nullptr;
	}
}

void CPhone::Initalize(QMap<QString, PageInfo> mapInfo)
{
	int nPageNo = 1;
	auto itrInfo = mapInfo.begin();
	for (; itrInfo != mapInfo.end(); itrInfo++)
	{
		QMap<int, StationInfo>& mapPhoneEntry = itrInfo.value().m_mapPhoneNumber;
		auto itr = mapPhoneEntry.begin();
		int nFastNo = 1;
		for (; itr != mapPhoneEntry.end(); ++itr)
		{
			StationInfo stStationInfo = itr.value();
			PhoneBookEntry stBookEntry;
			stBookEntry.m_nPageNo = nPageNo;
			stBookEntry.m_nFastButton = nFastNo++;
			stBookEntry.m_strStationName = stStationInfo.m_strStationName;
			stBookEntry.m_strPhoneNo1 = stStationInfo.m_strPhoneNumber;

			m_lstPhoneBook.push_back(stBookEntry);
		}

		nPageNo++;
	}
}

QList<PhoneBookEntry> CPhone::GetPhoneBook()
{
	return m_lstPhoneBook;
}

QList<PhoneCallRecord> CPhone::GetPhoneRecord()
{
	return m_lstPhoneRecord;
}
