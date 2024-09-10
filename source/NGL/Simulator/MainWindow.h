#pragma once

#include <QtWidgets/QWidget>
#include <QtWidgets/QLabel>
#include <QMainWindow>

#include "DockManager.h"

class MainWindow : public QMainWindow
{
	Q_OBJECT;
public:

	MainWindow();

protected:
private:
	QLabel m_main_label ;
	ads::CDockManager* m_dock_manager = nullptr;
};
