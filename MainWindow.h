#include <QMainWindow>
#include <QHBoxLayout>
#include <QPushButton>
#include <qdatetimeedit.h>

class MainWindow : public QMainWindow
{
	Q_OBJECT
public:
	MainWindow();
public slots:
	void resetStatusBar();
	void setButton2();
private:
	void createActions();	

	QHBoxLayout *hlayout;
	QVBoxLayout *vlayout;

	QPushButton *button1;
	QPushButton *button2;

	QDateEdit *date;
	QTimeEdit *time;

	QWidget *window;
};