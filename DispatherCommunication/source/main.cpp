#include "DispatherCommunication.h"
#include <QtWidgets/QApplication>

/*��ť״̬��û�н���ϸ�����ã��绰���ܿ��ƽ��湦�ܻ�û��д�꣬
CPhoneFunctionManagement���ýӿ���Ҫ��������н��У�������������н����߼�����*/

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	CDispatherCommunication w;
	w.show();
	return a.exec();
}
