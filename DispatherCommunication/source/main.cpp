#include "DispatherCommunication.h"
#include <QtWidgets/QApplication>

/*按钮状态还没有进行细致设置，电话功能控制界面功能还没有写完，
CPhoneFunctionManagement调用接口主要在这个类中进行，后期在这个类中进行逻辑处理*/

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	CDispatherCommunication w;
	w.show();
	return a.exec();
}
