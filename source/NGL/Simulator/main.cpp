#include "MainWindow.h"
#include <stdio.h>
#include <QApplication>

int main(int argc, char* argv[])
{
	printf("NGL Simulator\r\n");

	QApplication app(argc, argv);
	MainWindow mw;
	mw.show();
	mw.setWindowTitle("Noah's Graphics Library");
	return app.exec();
}
