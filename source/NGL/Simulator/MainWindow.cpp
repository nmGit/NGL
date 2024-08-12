#include "MainWindow.h"

MainWindow::MainWindow() : QMainWindow(nullptr)
{
	setCentralWidget(&m_main_label);
	m_main_label.setText("Test Text");
}
