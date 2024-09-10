#include "MainWindow.h"

MainWindow::MainWindow() : QMainWindow(nullptr)
{
	m_main_label.setText("Test Text");

	m_dock_manager = new ads::CDockManager(this);

	ads::CDockWidget* m_raster_view = new ads::CDockWidget("Viewer");

	m_raster_view->setWidget(&m_main_label);

	m_dock_manager->addDockWidget(ads::TopDockWidgetArea, m_raster_view);

	setCentralWidget(m_dock_manager);
}
