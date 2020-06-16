#ifndef PROFILEDIALOG_H
#define PROFILEDIALOG_H
#include "maincbtwindow.h"
#include <QDialog>
#include <QTimer>
namespace Ui {
class ProfileDialog;
}
class MainCbtWindow;
class ProfileDialog : public QDialog
{
    Q_OBJECT

public:
    explicit ProfileDialog(QWidget *parent = 0);
    ~ProfileDialog();


private slots:
    void on_pushButton_clicked();
    QString getInformationTxtInfo(int x);
    void stopwatch();
    QString last_time();

private:
    Ui::ProfileDialog *ui;
    MainCbtWindow *mainCbtWindow;
    QTimer *timer;
};



#endif // PROFILEDIALOG_H
