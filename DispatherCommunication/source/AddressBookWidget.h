#pragma once

#include <QWidget>
#include <QMap>
#include <QList>
#include <QToolButton>
#include <QString>
#include "Common.h"

#define ___MAXCHAINZONE__ (10)	// 连锁去最多个数

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
	// 来电 + 接听 +主动挂+ 被动挂
	void Slot_SetPhoneState(E_Phone_Status eStatus, const QString& strPhoneNum);
	// 拨打
	void Slot_BtnClicked();

private:
	void Init();
	void InitStyleSheet();
	void InitGUI();
	void InitConnect();
	QString GetPhoneNum(const QString& strStationName);
	QString GetStationName(const QString& strPhoneNum);

private:
	QMap<int, GroupValue> m_mapGroup;				// 连锁区 序号:内容
	QMap<int, StationInfo> m_mapPhoneInfo;	 		// 电话号码 + 站点名称
	QFrame* m_pFrameAddress = nullptr;				// 上边框
	QFrame* m_pFrameRetain = nullptr;				// 预留区域
	QGridLayout* m_pAddressBookLayout = nullptr;	// 电话簿布局
	QMap<QString, QToolButton*> m_mapToolBtn;		// 按钮集合站点名称：按钮

	CPhoneFunctionManagement* m_pManager = nullptr;	// 电话功能管理

	QString m_strCurCallGroup;						// 当前拨打工作组
	QList<QString> m_lstCurCallGroupRemain;			// 当前拨打工作组电话集合
};
