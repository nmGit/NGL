#pragma once

#include <QtWidgets/QWidget>
#include <QtWidgets/QLabel>
#include <QMainWindow>

class MainWindow : public QMainWindow
{
	Q_OBJECT;
public:

	MainWindow();

protected:
private:
	QLabel m_main_label ;
};
