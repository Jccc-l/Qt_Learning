#include "widget.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);		// 应用程序对象，在Qt中只有一个
    Widget w;   			// 窗口对象
    w.show();   			// 调用show方法显示窗口
    return a.exec();			// 让应用程序进入消息循环
}
