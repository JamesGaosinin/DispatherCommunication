#pragma once

#include <QWidget>
#include <QMap>
#include <QList>
#include <QToolButton>
#include <QString>
#include "Common.h"

#define ___MAXCHAINZONE__ (10)	// ����ȥ������

class QFrame;
class QGridLayout;
class CPhoneFunctionManagement;

class CAddressBookWidget : public QWidget
{
	Q_OBJECT

public:
	CAddressBookWidget(QWidget *parent = Q_NULLPTR);
	~CAddressBookWidget();

	void Intialize(const QMap<int, GroupValue>& mapGroup, const QMap<int, StationInfo>& mapPhoneNumber);
	void SetPhoneFuncManager(CPhoneFunctionManagement* pManager);

public slots:
	// ���� + ���� +������+ ������
	void Slot_SetPhoneState(E_Phone_Status eStatus, const QString& strPhoneNum);
	// ����
	void Slot_BtnClicked();

private:
	void Init();
	void InitStyleSheet();
	void InitGUI();
	void InitConnect();
	QString GetPhoneNum(const QString& strStationName);
	QString GetStationName(const QString& strPhoneNum);

private:
	QMap<int, GroupValue> m_mapGroup;				// ������ ���:����
	QMap<int, StationInfo> m_mapPhoneInfo;	 		// �绰���� + վ������
	QFrame* m_pFrameAddress = nullptr;				// �ϱ߿�
	QFrame* m_pFrameRetain = nullptr;				// Ԥ������
	QGridLayout* m_pAddressBookLayout = nullptr;	// �绰������
	QMap<QString, QToolButton*> m_mapToolBtn;		// ��ť����վ�����ƣ���ť

	CPhoneFunctionManagement* m_pManager = nullptr;	// �绰���ܹ���

	QString m_strCurCallGroup;						// ��ǰ��������
	QList<QString> m_lstCurCallGroupRemain;			// ��ǰ��������绰����
};
