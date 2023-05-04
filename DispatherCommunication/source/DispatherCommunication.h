#pragma once

#include <QtWidgets/QWidget>
#include "ui_DispatherCommunication.h"
#include <QMap>
#include "Common.h"

class QDomElement;
class QToolButton;
class CPhoneFunctionManagement;

class CDispatherCommunication : public QWidget
{
	Q_OBJECT

public:
	CDispatherCommunication(QWidget *parent = Q_NULLPTR);

private slots:
	void Slot_BtnClicked();
	void Slot_Timeout();

private:
	void Init();
	void InitGUI();
	void InitFuncArea();
	void InitConnect();
	void InitTimer();
	bool ReadConfig(QMap<QString, PageInfo>& mapInfo);
	bool ReadGroup(QDomElement& groupEle, QMap<int, GroupValue>& mapGroup);
	bool ReadStation(QDomElement& staionEle, QMap<int, StationInfo>& mapPhoneNumber);

	int SetCurFuncStyle(QToolButton* pBtn);

private:
	Ui::CDispatherCommunicationClass ui;

	CPhoneFunctionManagement* m_pPhoneFuncManager = nullptr;
	QList<QToolButton*> m_lstFuncBtn;		// ¹¦ÄÜ¼ü
};
