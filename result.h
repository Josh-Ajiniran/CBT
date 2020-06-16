#ifndef RESULT_H
#define RESULT_H
#include <QMainWindow>
#include <QStandardItemModel>

namespace Ui {
class Result;
}
class MainWindow;
class MainWindowc;
class Result : public QMainWindow
{
    Q_OBJECT

public:
    explicit Result(QWidget *parent = 0);
    ~Result();

private:
    Ui::Result *ui;
     QStandardItemModel *csvModel;
    MainWindow *mainWindow;
    MainWindowc *mainWindowc;
};

#endif // RESULT_H
