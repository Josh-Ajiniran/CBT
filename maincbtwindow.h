#ifndef MAINCBTWINDOW_H
#define MAINCBTWINDOW_H
#include "logindialog.h"
#include "peresult.h"
#include <QMainWindow>
#include <QTimer>
namespace Ui {
class MainCbtWindow;
}
class peresult;
class LoginDialog;
class MainCbtWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainCbtWindow(QWidget *parent = 0);
    ~MainCbtWindow();

private slots:
    QString getData(QString subMain, QString subQues, int que, int x);
    void printQue(QString subMain, QString sub, int num);
QString getQuestion(QString sub, int x);
void getUserChoiceCHE();
void getUserChoiceBIO();

QString getInformationTxtInfo(int x);
QString last_time();
void getUserChoiceMATH();
void switchTab();
void getUserChoicePHY();

void getUserChoiceENG();

void clearOptionMATH();
void clearOptionCHE();
void clearOptionPHY();
void clearOptionENG();
void clearOptionBIO();


int checkImg(QString line);
void stopwatch();
void numberCHE(int num);
void numberMATH(int num);
void numberPHY(int num);
void numberENG(int num);
void numberBIO(int num);

QString correctAnswer(QString subMain, int num);

void saveAnswerCHE(QString sub);
void saveAnswerMATH(QString sub);

void saveAnswerPHY(QString sub);
void saveAnswerENG(QString sub);
void saveAnswerBIO(QString sub);

QString getResultPHY(int x, int k);
QString getResultENG(int x, int k);
QString getResultMATH(int x, int k);
QString getResultBIO(int x, int k);
QString getResultCHE(int x, int k);


    void on_pushButton1_4_clicked();


    void on_pushButton2_4_clicked();

    void on_pushButton3_4_clicked();

    void on_pushButton4_4_clicked();

    void on_pushButton5_4_clicked();

    void on_pushButton6_4_clicked();

    void on_pushButton7_4_clicked();

    void on_pushButton8_4_clicked();

    void on_pushButton9_4_clicked();

    void on_pushButton10_4_clicked();

    void on_pushButton11_4_clicked();

    void on_pushButton12_4_clicked();

    void on_pushButton13_4_clicked();

    void on_pushButton14_4_clicked();

    void on_pushButton15_4_clicked();

    void on_pushButton16_4_clicked();

    void on_pushButton17_4_clicked();

    void on_pushButton18_4_clicked();

    void on_pushButton19_4_clicked();

    void on_pushButton20_4_clicked();


    void on_ENGNEXT_clicked();



    void on_pushButton1_13_clicked();

    void on_pushButton2_13_clicked();

    void on_pushButton3_13_clicked();

    void on_pushButton4_13_clicked();

    void on_pushButton5_13_clicked();

    void on_pushButton6_13_clicked();

    void on_pushButton7_13_clicked();

    void on_pushButton8_13_clicked();

    void on_pushButton9_13_clicked();

    void on_pushButton10_13_clicked();

    void on_pushButton11_13_clicked();

    void on_pushButton12_13_clicked();

    void on_pushButton13_13_clicked();

    void on_pushButton14_13_clicked();

    void on_pushButton15_13_clicked();

    void on_pushButton16_13_clicked();

    void on_pushButton17_13_clicked();

    void on_pushButton18_13_clicked();

    void on_pushButton19_13_clicked();

    void on_pushButton20_13_clicked();

    void on_MATHNEXT_clicked();

    void on_pushButton1_12_clicked();

    void on_pushButton2_12_clicked();

    void on_pushButton3_12_clicked();

    void on_pushButton4_12_clicked();

    void on_pushButton5_12_clicked();

    void on_pushButton6_12_clicked();

    void on_pushButton7_12_clicked();

    void on_pushButton8_12_clicked();

    void on_pushButton9_12_clicked();

    void on_pushButton10_12_clicked();

    void on_pushButton11_12_clicked();

    void on_pushButton12_12_clicked();

    void on_pushButton13_12_clicked();

    void on_pushButton14_12_clicked();

    void on_pushButton15_12_clicked();

    void on_pushButton16_12_clicked();

    void on_pushButton17_12_clicked();

    void on_pushButton18_12_clicked();

    void on_pushButton19_12_clicked();

    void on_pushButton20_12_clicked();

    void on_PHYNEXT_clicked();





    void on_pushButton1_10_clicked();

    void on_pushButton2_10_clicked();

    void on_pushButton3_10_clicked();

    void on_pushButton4_10_clicked();

    void on_pushButton5_10_clicked();

    void on_pushButton6_10_clicked();

    void on_pushButton7_10_clicked();

    void on_pushButton8_10_clicked();

    void on_pushButton9_10_clicked();

    void on_pushButton10_10_clicked();

    void on_pushButton11_10_clicked();

    void on_pushButton12_10_clicked();

    void on_pushButton13_10_clicked();

    void on_pushButton14_10_clicked();

    void on_pushButton15_10_clicked();

    void on_pushButton16_10_clicked();

    void on_pushButton17_10_clicked();

    void on_pushButton18_10_clicked();

    void on_pushButton19_10_clicked();

    void on_pushButton20_10_clicked();

    void on_CHENEXT_clicked();

    void on_pushButton1_11_clicked();

    void on_pushButton2_11_clicked();

    void on_pushButton3_11_clicked();

    void on_pushButton4_11_clicked();

    void on_pushButton5_11_clicked();

    void on_pushButton6_11_clicked();

    void on_pushButton7_11_clicked();

    void on_pushButton8_11_clicked();

    void on_pushButton9_11_clicked();

    void on_pushButton10_11_clicked();

    void on_pushButton11_11_clicked();

    void on_pushButton12_11_clicked();

    void on_pushButton13_11_clicked();

    void on_pushButton14_11_clicked();

    void on_pushButton15_11_clicked();

    void on_pushButton16_11_clicked();

    void on_pushButton17_11_clicked();

    void on_pushButton18_11_clicked();

    void on_pushButton19_11_clicked();

    void on_pushButton20_11_clicked();
    void    on_BIONEXT_clicked();

void collateResult();
void detailedRecord();

    void on_submit_clicked();



private:
    Ui::MainCbtWindow *ui;
    QTimer *timer;
    QTimer *switchTime;
    LoginDialog *loginDialog;
    peresult *peresult1;
};

#endif // MAINCBTWINDOW_H
