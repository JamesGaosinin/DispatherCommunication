#pragma once

#include <QDialog>

class QTableWidget;

class CPhoneBookWidget : public QDialog
{
	Q_OBJECT

public:
	CPhoneBookWidget(QWidget *parent);
	~CPhoneBookWidget();

protected:
	virtual void showEvent(QShowEvent* pEvent) override;

private:
	void Init();
	void InitGUI();
	void ClearTable();

private:
	QTableWidget* m_pTableWidget = nullptr;
};
