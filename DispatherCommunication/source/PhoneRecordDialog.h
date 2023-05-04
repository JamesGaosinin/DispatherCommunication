#pragma once

#include <QDialog>

class QTableWidget;

class CPhoneRecordDialog : public QDialog
{
	Q_OBJECT

public:
	CPhoneRecordDialog(QWidget *parent);
	~CPhoneRecordDialog();

protected:
	virtual void showEvent(QShowEvent* pEvent) override;

private:
	void Init();
	void InitGUI();
	void ClearTable();

private:
	QTableWidget* m_pTableWidget = nullptr;
};
