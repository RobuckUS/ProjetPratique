#include "MainWindow.h"
#include <QtWidgets>
#include <QMenu>

MainWindow::MainWindow()
{
	createActions();
	window = new QWidget();

	hlayout = new QHBoxLayout();
	vlayout = new QVBoxLayout();

	button1 = new QPushButton("Button1");
	button2 = new QPushButton("Button2");
	
	date = new QDateEdit();
	time = new QTimeEdit();

	vlayout->addWidget(date);
	vlayout->addWidget(time);
	hlayout->addWidget(button1);
	hlayout->addWidget(button2);
	hlayout->addItem(vlayout);
	
	window->setLayout(hlayout);
	connect(button1, SIGNAL(released()), this, SLOT(setButton2()));
	setCentralWidget(window);

	
}

void MainWindow::createActions()
{
	QMenu *fileMenu = menuBar()->addMenu(tr("&File"));
	QMenu *editMenu = menuBar()->addMenu(tr("&Edit"));
	QMenu *helpMenu = menuBar()->addMenu(tr("&Help"));
	connect(fileMenu, SIGNAL(aboutToShow()), this, SLOT(resetStatusBar()));
	

}
void MainWindow::resetStatusBar()
{
	statusBar()->showMessage("lol");
}
void MainWindow::setButton2()
{
	if (button2->text() == "Button2")
		button2->setText("LOL");
	else
		button2->setText("Button2");
}