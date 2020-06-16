#include "maincbtwindow.h"
#include "ui_maincbtwindow.h"
#include <QMessageBox>
#include<QFile>
#include<QTextStream>
#include <QMessageBox>
#include<QFileDialog>
#include <QPicture>
#include <QTime>
#include <QLabel>
int currNum1, currNum2, currNum3, currNum4, currNum5,sum;
int sec = 59;int realdur;
int dur;QString info;QString filedi;
MainCbtWindow::MainCbtWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainCbtWindow)
{
    ui->setupUi(this);


    realdur = 0;
    info = "";


  //  ui->submit->setStyleSheet("QPushButton{background-color: red; border-radius: 20px;border-style: inset;}");
ui->label_8->setText(getInformationTxtInfo(2)+" "+getInformationTxtInfo(4));
                timer = new QTimer(this);
                connect(timer, SIGNAL(timeout()), this, SLOT(stopwatch()));
               timer->start(1000);
               sec = 59;
//               dur = getInformationGeneralTxt(4).toInt();
               dur = last_time().toInt();
               realdur = dur -1;
            ui->label_5->setText("");\
               ui->label_7->setText("");
               ui->label_7->setText(QString::number(sec));
               ui->label_5->setText(QString::number(realdur));
                switchTime = new QTimer(this);
                connect(switchTime, SIGNAL(timeout()),this, SLOT(switchTab()));
                   switchTime->start(100);

               {
                   ui->pushButton1_4->setFixedSize(40, 40);
                       ui->pushButton2_4->setFixedSize(40, 40);
                       ui->pushButton3_4->setFixedSize(40, 40);
                       ui->pushButton4_4->setFixedSize(40, 40);
                       ui->pushButton5_4->setFixedSize(40, 40);
                       ui->pushButton6_4->setFixedSize(40, 40);
                       ui->pushButton7_4->setFixedSize(40, 40);
                       ui->pushButton8_4->setFixedSize(40, 40);
                       ui->pushButton9_4->setFixedSize(40, 40);
                       ui->pushButton10_4->setFixedSize(40, 40);
                       ui->pushButton11_4->setFixedSize(40, 40);
                       ui->pushButton12_4->setFixedSize(40, 40);
                       ui->pushButton13_4->setFixedSize(40, 40);
                       ui->pushButton14_4->setFixedSize(40, 40);
                       ui->pushButton15_4->setFixedSize(40, 40);
                       ui->pushButton16_4->setFixedSize(40, 40);
                       ui->pushButton17_4->setFixedSize(40, 40);
                       ui->pushButton18_4->setFixedSize(40, 40);
                       ui->pushButton19_4->setFixedSize(40, 40);
                       ui->pushButton20_4->setFixedSize(40, 40);

               }{ui->pushButton1_13->setFixedSize(40, 40);
                   ui->pushButton2_13->setFixedSize(40, 40);
                   ui->pushButton3_13->setFixedSize(40, 40);
                   ui->pushButton4_13->setFixedSize(40, 40);
                   ui->pushButton5_13->setFixedSize(40, 40);
                   ui->pushButton6_13->setFixedSize(40, 40);
                   ui->pushButton7_13->setFixedSize(40, 40);
                   ui->pushButton8_13->setFixedSize(40, 40);
                   ui->pushButton9_13->setFixedSize(40, 40);
                   ui->pushButton10_13->setFixedSize(40, 40);
                   ui->pushButton11_13->setFixedSize(40, 40);
                   ui->pushButton12_13->setFixedSize(40, 40);
                   ui->pushButton13_13->setFixedSize(40, 40);
                   ui->pushButton14_13->setFixedSize(40, 40);
                   ui->pushButton15_13->setFixedSize(40, 40);
                   ui->pushButton16_13->setFixedSize(40, 40);
                   ui->pushButton17_13->setFixedSize(40, 40);
                   ui->pushButton18_13->setFixedSize(40, 40);
                   ui->pushButton19_13->setFixedSize(40, 40);
                   ui->pushButton20_13->setFixedSize(40, 40);

               }
              {ui->pushButton1_10->setFixedSize(40, 40);
                       ui->pushButton2_10->setFixedSize(40, 40);
                       ui->pushButton3_10->setFixedSize(40, 40);
                       ui->pushButton4_10->setFixedSize(40, 40);
                       ui->pushButton5_10->setFixedSize(40, 40);
                       ui->pushButton6_10->setFixedSize(40, 40);
                       ui->pushButton7_10->setFixedSize(40, 40);
                       ui->pushButton8_10->setFixedSize(40, 40);
                       ui->pushButton9_10->setFixedSize(40, 40);
                       ui->pushButton10_10->setFixedSize(40, 40);
                       ui->pushButton11_10->setFixedSize(40, 40);
                       ui->pushButton12_10->setFixedSize(40, 40);
                       ui->pushButton13_10->setFixedSize(40, 40);
                       ui->pushButton14_10->setFixedSize(40, 40);
                       ui->pushButton15_10->setFixedSize(40, 40);
                       ui->pushButton16_10->setFixedSize(40, 40);
                       ui->pushButton17_10->setFixedSize(40, 40);
                       ui->pushButton18_10->setFixedSize(40, 40);
                       ui->pushButton19_10->setFixedSize(40, 40);
                       ui->pushButton20_10->setFixedSize(40, 40);


                   }
                   {ui->pushButton1_11->setFixedSize(40, 40);
                                      ui->pushButton2_11->setFixedSize(40, 40);
                                      ui->pushButton3_11->setFixedSize(40, 40);
                                      ui->pushButton4_11->setFixedSize(40, 40);
                                      ui->pushButton5_11->setFixedSize(40, 40);
                                      ui->pushButton6_11->setFixedSize(40, 40);
                                      ui->pushButton7_11->setFixedSize(40, 40);
                                      ui->pushButton8_11->setFixedSize(40, 40);
                                      ui->pushButton9_11->setFixedSize(40, 40);
                                      ui->pushButton10_11->setFixedSize(40, 40);
                                      ui->pushButton11_11->setFixedSize(40, 40);
                                      ui->pushButton12_11->setFixedSize(40, 40);
                                      ui->pushButton13_11->setFixedSize(40, 40);
                                      ui->pushButton14_11->setFixedSize(40, 40);
                                      ui->pushButton15_11->setFixedSize(40, 40);
                                      ui->pushButton16_11->setFixedSize(40, 40);
                                      ui->pushButton17_11->setFixedSize(40, 40);
                                      ui->pushButton18_11->setFixedSize(40, 40);
                                      ui->pushButton19_11->setFixedSize(40, 40);
                                      ui->pushButton20_11->setFixedSize(40, 40);

                                  }

               {ui->pushButton1_12->setFixedSize(40, 40);
                                  ui->pushButton2_12->setFixedSize(40, 40);
                                  ui->pushButton3_12->setFixedSize(40, 40);
                                  ui->pushButton4_12->setFixedSize(40, 40);
                                  ui->pushButton5_12->setFixedSize(40, 40);
                                  ui->pushButton6_12->setFixedSize(40, 40);
                                  ui->pushButton7_12->setFixedSize(40, 40);
                                  ui->pushButton8_12->setFixedSize(40, 40);
                                  ui->pushButton9_12->setFixedSize(40, 40);
                                  ui->pushButton10_12->setFixedSize(40, 40);
                                  ui->pushButton11_12->setFixedSize(40, 40);
                                  ui->pushButton12_12->setFixedSize(40, 40);
                                  ui->pushButton13_12->setFixedSize(40, 40);
                                  ui->pushButton14_12->setFixedSize(40, 40);
                                  ui->pushButton15_12->setFixedSize(40, 40);
                                  ui->pushButton16_12->setFixedSize(40, 40);
                                  ui->pushButton17_12->setFixedSize(40, 40);
                                  ui->pushButton18_12->setFixedSize(40, 40);
                                  ui->pushButton19_12->setFixedSize(40, 40);
                                  ui->pushButton20_12->setFixedSize(40, 40);

                              }



               clearOptionENG();
                  printQue("ENG","ENG",1);
                   getUserChoiceENG();
                   clearOptionMATH();
                      printQue("MATH","MATH",1);
                       getUserChoiceMATH();
                       clearOptionPHY();
                          printQue("PHY","PHY",1);
                           getUserChoicePHY();

                               clearOptionCHE();
                                  printQue("CHE","CHE",1);
                                   getUserChoiceCHE();
                                   clearOptionBIO();
                                      printQue("BIO","BIO",1);
                                       getUserChoiceBIO();





}


MainCbtWindow::~MainCbtWindow()
{
    delete ui;
}
void MainCbtWindow::switchTab(){
    ui->queNum_4->setText(QString::number(currNum1));
    ui->queNum_5->setText(QString::number(currNum2));
    ui->queNum_6->setText(QString::number(currNum3));
    ui->queNum_8->setText(QString::number(currNum4));
    ui->queNum_7->setText(QString::number(currNum5));

    getUserChoiceENG();
    getUserChoiceMATH();
    getUserChoicePHY();
    getUserChoiceCHE();
    getUserChoiceBIO();

    switchTime->stop();
    switchTime->destroyed();
}
void MainCbtWindow::stopwatch()
{
    sec = ui->label_7->text().toInt();
    realdur = ui->label_5->text().toInt();
    sec--;
    if((realdur ==0) && (sec == 0))
    {

        ui->label_5->setText("");
        ui->label_7->setText("");
        ui->submit->setVisible(false);


        ui->label_7->setText(QString::number(sec));
        ui->label_5->setText(QString::number(realdur));

//        ui->label_5->setText("");
//        ui->label_7->setText("");
        timer->stop();
        timer->destroyed();
        collateResult();

       detailedRecord();
        QMessageBox::information(this,"DLCF FUTA CBT Alert","TIME UP!\n\nLeave the Hall Quietly");

            hide();
      loginDialog = new LoginDialog(this);
      loginDialog->show();
       peresult1 = new peresult(this);
        peresult1->show();

    }
   if(sec < 1){
       sec = 59;
       realdur--;
       //Save at interval
       QFile fileg("C:/SUB/files/system/sling/file/left/" + getInformationTxtInfo(4) + ".dpt");
           if(!fileg.open(QFile::WriteOnly | QFile::Text)){
               QMessageBox::warning(this, "WARNING", "Error 200.\nFailed to save data. Contact Technical personnel for help");
           }
           QTextStream outg(&fileg);

           outg<<realdur;
           fileg.flush();
           fileg.close();
   }



   if(sec<10){
       ui->label_5->setText(QString::number(realdur));

       ui->label_7->setText("0"+QString::number(sec));
   }else{
    ui->label_5->setText(QString::number(realdur));
    ui->label_7->setText(QString::number(sec));}





}
QString MainCbtWindow::last_time(){
QString information;
    QFile file("C:/SUB/files/system/sling/file/left/" + getInformationTxtInfo(4) + ".dpt");
    file.open(QFile::ReadOnly | QFile::Text);
    QTextStream in(&file);
    QString line[1];   //the index of this array is the line of the text you want to extract
    for(int i = 1;i<=1;i++){
             line[0] = in.readLine();   //the index here only stores the value of the extracted text
            information = line[0]; //prints out the extracted text
}
    file.close();

return information;
}
QString MainCbtWindow::getData(QString subMain,QString subQues, int que, int x){
    //MAIN QUESTIONS ARE GOTTEN
       QString information;
    ui->queNum_4->setText(QString::number(que));
    ui->queNum_5->setText(QString::number(que));
    ui->queNum_6->setText(QString::number(que));
        ui->queNum_7->setText(QString::number(que));
    ui->queNum_8->setText(QString::number(que));
      switchTime->start(100);

       QFile file("C:/DLCF CBTest/files/"+subMain+"/"+QString::number(getQuestion(subQues, que).toInt())+".dpt");
       file.open(QFile::ReadOnly | QFile::Text);


       QTextStream in(&file);
       QString line[x];   //the index of this array is the line of the text you want to extract
       for(int i = 1;i<=x;i++){
                line[0] = in.readLine();   //the index here only stores the value of the extracted text
               information = line[0]; //prints out the extracted text

       }
       file.close();
       return information;
   }
QString MainCbtWindow::getInformationTxtInfo(int x){
       QString information;

       QFile file("C:/DLCF CBTest/SUB/files/system/sling/file/current/current.dpt");
       file.open(QFile::ReadOnly | QFile::Text);
       QTextStream in(&file);
       QString line[x];   //the index of this array is the line of the text you want to extract
       for(int i = 1;i<=x;i++){
                line[0] = in.readLine();   //the index here only stores the value of the extracted text
               information = line[0]; //prints out the extracted text
}
       file.close();
       return information;
   }
QString MainCbtWindow::getQuestion(QString sub, int x){
       QString information;
//RANDOMLY GENERATED NUMBERS
       QFile file("C:/DLCF CBTest/files/rand/"+sub+".dpt");
       file.open(QFile::ReadOnly | QFile::Text);

       QTextStream in(&file);
       QString line[x];   //the index of this array is the line of the text you want to extract
       for(int i = 1;i<=x;i++){
                line[0] = in.readLine();   //the index here only stores the value of the extracted text
               information = line[0]; //prints out the extracted text

       }
       file.close();
       return information;
   }
void MainCbtWindow::printQue(QString subMain,QString sub,int num){

    if(subMain == "ENG"){ ui->queNum_4->setText(QString::number(num));
        if(checkImg(getData(subMain,sub,num,1))== 0){
         ui->question_4->setText(getData(subMain,sub,num, 1));}else
    {ui->question_4->setPixmap(getData(subMain,sub,num,1));}
    if(checkImg(getData(subMain,sub,num,2)) == 1){
        ui->diagram_4->setVisible(true);
        ui->diagram_4->setPixmap(getData(subMain,sub,num,2));
    }
    if(checkImg(getData(subMain,sub,num,3))==0){
         ui->aLabel_4->setText(getData(subMain,sub,num,3));}else
    { ui->aLabel_4->setPixmap(getData(subMain,sub,num,3));}

    if(checkImg(getData(subMain,sub,num,4))==0){
         ui->bLabel_4->setText(getData(subMain,sub,num,4));}else
    {ui->bLabel_4->setPixmap(getData(subMain,sub,num,4));}

    if(checkImg(getData(subMain,sub,num,5))==0){
         ui->cLabel_4->setText(getData(subMain,sub,num,5));}else
     {ui->cLabel_4->setPixmap(getData(subMain,sub,num,5));}

    if(checkImg(getData(subMain,sub,num,6))==0){
         ui->dLabel_4->setText(getData(subMain,sub,num,6));}else
    {  ui->dLabel_4->setPixmap(getData(subMain,sub,num,6));}}
    if(subMain == "MATH"){ ui->queNum_5->setText(QString::number(num));
        if(checkImg(getData(subMain,sub,num,1))== 0){
                 ui->question_5->setText(getData(subMain,sub,num, 1));}else
            {ui->question_5->setPixmap(getData(subMain,sub,num,1));}
            if(checkImg(getData(subMain,sub,num,2)) == 1){
                ui->diagram_5->setVisible(true);
                ui->diagram_5->setPixmap(getData(subMain,sub,num,2));
            }
            if(checkImg(getData(subMain,sub,num,3))==0){
                 ui->aLabel_5->setText(getData(subMain,sub,num,3));}else
            { ui->aLabel_5->setPixmap(getData(subMain,sub,num,3));}

            if(checkImg(getData(subMain,sub,num,4))==0){
                 ui->bLabel_5->setText(getData(subMain,sub,num,4));}else
            {ui->bLabel_5->setPixmap(getData(subMain,sub,num,4));}

            if(checkImg(getData(subMain,sub,num,5))==0){
                 ui->cLabel_5->setText(getData(subMain,sub,num,5));}else
             {ui->cLabel_5->setPixmap(getData(subMain,sub,num,5));}

            if(checkImg(getData(subMain,sub,num,6))==0){
                 ui->dLabel_5->setText(getData(subMain,sub,num,6));}else
            {  ui->dLabel_5->setPixmap(getData(subMain,sub,num,6));}
    }
    if(subMain == "PHY"){ ui->queNum_6->setText(QString::number(num));
        if(checkImg(getData(subMain,sub,num,1))== 0){
                 ui->question_6->setText(getData(subMain,sub,num, 1));}else
            {ui->question_6->setPixmap(getData(subMain,sub,num,1));}
            if(checkImg(getData(subMain,sub,num,2)) == 1){
                ui->diagram_6->setVisible(true);
                ui->diagram_6->setPixmap(getData(subMain,sub,num,2));
            }
            if(checkImg(getData(subMain,sub,num,3))==0){
                 ui->aLabel_6->setText(getData(subMain,sub,num,3));}else
            { ui->aLabel_6->setPixmap(getData(subMain,sub,num,3));}

            if(checkImg(getData(subMain,sub,num,4))==0){
                 ui->bLabel_6->setText(getData(subMain,sub,num,4));}else
            {ui->bLabel_6->setPixmap(getData(subMain,sub,num,4));}

            if(checkImg(getData(subMain,sub,num,5))==0){
                 ui->cLabel_6->setText(getData(subMain,sub,num,5));}else
             {ui->cLabel_6->setPixmap(getData(subMain,sub,num,5));}

            if(checkImg(getData(subMain,sub,num,6))==0){
                 ui->dLabel_6->setText(getData(subMain,sub,num,6));}else
            {  ui->dLabel_6->setPixmap(getData(subMain,sub,num,6));}
    }

    if(subMain == "CHE"){
 ui->queNum_8->setText(QString::number(num));
        if(checkImg(getData(subMain,sub,num,1))== 0){
                 ui->question_8->setText(getData(subMain,sub,num, 1));}else
            {ui->question_8->setPixmap(getData(subMain,sub,num,1));}
            if(checkImg(getData(subMain,sub,num,2)) == 1){
                ui->diagram_8->setVisible(true);
                ui->diagram_8->setPixmap(getData(subMain,sub,num,2));
            }
            if(checkImg(getData(subMain,sub,num,3))==0){
                 ui->aLabel_8->setText(getData(subMain,sub,num,3));}else
            { ui->aLabel_8->setPixmap(getData(subMain,sub,num,3));}

            if(checkImg(getData(subMain,sub,num,4))==0){
                 ui->bLabel_8->setText(getData(subMain,sub,num,4));}else
            {ui->bLabel_8->setPixmap(getData(subMain,sub,num,4));}

            if(checkImg(getData(subMain,sub,num,5))==0){
                 ui->cLabel_8->setText(getData(subMain,sub,num,5));}else
             {ui->cLabel_8->setPixmap(getData(subMain,sub,num,5));}

            if(checkImg(getData(subMain,sub,num,6))==0){
                 ui->dLabel_8->setText(getData(subMain,sub,num,6));}else
            {  ui->dLabel_8->setPixmap(getData(subMain,sub,num,6));}
    }

    if(subMain == "BIO"){
 ui->queNum_7->setText(QString::number(num));
        if(checkImg(getData(subMain,sub,num,1))== 0){
                 ui->question_7->setText(getData(subMain,sub,num, 1));}else
            {ui->question_7->setPixmap(getData(subMain,sub,num,1));}
            if(checkImg(getData(subMain,sub,num,2)) == 1){
                ui->diagram_7->setVisible(true);
                ui->diagram_7->setPixmap(getData(subMain,sub,num,2));
            }
            if(checkImg(getData(subMain,sub,num,3))==0){
                 ui->aLabel_7->setText(getData(subMain,sub,num,3));}else
            { ui->aLabel_7->setPixmap(getData(subMain,sub,num,3));}

            if(checkImg(getData(subMain,sub,num,4))==0){
                 ui->bLabel_7->setText(getData(subMain,sub,num,4));}else
            {ui->bLabel_7->setPixmap(getData(subMain,sub,num,4));}

            if(checkImg(getData(subMain,sub,num,5))==0){
                 ui->cLabel_7->setText(getData(subMain,sub,num,5));}else
             {ui->cLabel_7->setPixmap(getData(subMain,sub,num,5));}

            if(checkImg(getData(subMain,sub,num,6))==0){
                 ui->dLabel_7->setText(getData(subMain,sub,num,6));}else
            {  ui->dLabel_7->setPixmap(getData(subMain,sub,num,6));}
    }

}
void MainCbtWindow::getUserChoiceENG(){
     currNum1 = ui->queNum_4->text().toInt();

    QString information;
  QFile file("C:/SUB/files/system/sling/file/testcurrent/Answer/ENG/"+ QString::number(currNum1) +".dpt");
    file.open(QFile::ReadOnly | QFile::Text);
   QTextStream in(&file);
    QString line[1];   //the index of this array is the line of the text you want to extract
    for(int i = 1;i<=1;i++){
             line[0] = in.readLine();   //the index here only stores the value of the extracted text
            information = line[0]; //prints out the extracted text
   }
    file.close();

    (ui->radioButton_13->setAutoExclusive(false));
    (ui->radioButton_14->setAutoExclusive(false));
     (ui->radioButton_15->setAutoExclusive(false));
      (ui->radioButton_16->setAutoExclusive(false));
   if(information == "A"){
        ui->radioButton_13->setChecked(true);

   } if(information == "B"){
        ui->radioButton_14->setChecked(true);

   } if(information == "C"){
        ui->radioButton_15->setChecked(true);

   } if(information == "D"){
        ui->radioButton_16->setChecked(true);

   } /*if(information == ""){
        ;
   }*/

(ui->radioButton_13->setAutoExclusive(true));
(ui->radioButton_14->setAutoExclusive(true));
 (ui->radioButton_15->setAutoExclusive(true));
  (ui->radioButton_16->setAutoExclusive(true));
}
void MainCbtWindow::getUserChoiceMATH(){
     currNum2 = ui->queNum_5->text().toInt();

    QString information;
  QFile file("C:/SUB/files/system/sling/file/testcurrent/Answer/MATH/"+ QString::number(currNum2) +".dpt");
    file.open(QFile::ReadOnly | QFile::Text);
   QTextStream in(&file);
    QString line[1];   //the index of this array is the line of the text you want to extract
    for(int i = 1;i<=1;i++){
             line[0] = in.readLine();   //the index here only stores the value of the extracted text
            information = line[0]; //prints out the extracted text
   }
    file.close();
    (ui->radioButton_17->setAutoExclusive(false));
    (ui->radioButton_18->setAutoExclusive(false));
     (ui->radioButton_19->setAutoExclusive(false));
      (ui->radioButton_20->setAutoExclusive(false));
   if(information == "A"){
        ui->radioButton_17->setChecked(true);

   } if(information == "B"){
        ui->radioButton_18->setChecked(true);

   } if(information == "C"){
        ui->radioButton_19->setChecked(true);

   } if(information == "D"){
        ui->radioButton_20->setChecked(true);

   } /*if(information == ""){
        ;
   }*/

(ui->radioButton_17->setAutoExclusive(true));
(ui->radioButton_18->setAutoExclusive(true));
 (ui->radioButton_19->setAutoExclusive(true));
  (ui->radioButton_20->setAutoExclusive(true));
}
void MainCbtWindow::getUserChoicePHY(){

     currNum3 = ui->queNum_6->text().toInt();
    QString information;
  QFile file("C:/SUB/files/system/sling/file/testcurrent/Answer/PHY/"+ QString::number(currNum3) +".dpt");
    file.open(QFile::ReadOnly | QFile::Text);
   QTextStream in(&file);
    QString line[1];   //the index of this array is the line of the text you want to extract
    for(int i = 1;i<=1;i++){
             line[0] = in.readLine();   //the index here only stores the value of the extracted text
            information = line[0]; //prints out the extracted text
   }
    file.close();
    (ui->radioButton_21->setAutoExclusive(false));
    (ui->radioButton_22->setAutoExclusive(false));
     (ui->radioButton_23->setAutoExclusive(false));
      (ui->radioButton_24->setAutoExclusive(false));
   if(information == "A"){
        ui->radioButton_21->setChecked(true);

   } if(information == "B"){
        ui->radioButton_22->setChecked(true);

   } if(information == "C"){
        ui->radioButton_23->setChecked(true);

   } if(information == "D"){
        ui->radioButton_24->setChecked(true);

   } /*if(information == ""){
        ;
   }*/

(ui->radioButton_21->setAutoExclusive(true));
(ui->radioButton_22->setAutoExclusive(true));
 (ui->radioButton_23->setAutoExclusive(true));
  (ui->radioButton_24->setAutoExclusive(true));
}

void MainCbtWindow::getUserChoiceCHE(){
     currNum4 = ui->queNum_8->text().toInt();

    QString information;
  QFile file("C:/SUB/files/system/sling/file/testcurrent/Answer/CHE/"+ QString::number(currNum4) +".dpt");
    file.open(QFile::ReadOnly | QFile::Text);
   QTextStream in(&file);
    QString line[1];   //the index of this array is the line of the text you want to extract
    for(int i = 1;i<=1;i++){
             line[0] = in.readLine();   //the index here only stores the value of the extracted text
            information = line[0]; //prints out the extracted text
   }
    file.close();
    (ui->radioButton_29->setAutoExclusive(false));
    (ui->radioButton_30->setAutoExclusive(false));
     (ui->radioButton_31->setAutoExclusive(false));
      (ui->radioButton_32->setAutoExclusive(false));
   if(information == "A"){
        ui->radioButton_29->setChecked(true);

   } if(information == "B"){
        ui->radioButton_30->setChecked(true);

   } if(information == "C"){
        ui->radioButton_31->setChecked(true);

   } if(information == "D"){
        ui->radioButton_32->setChecked(true);

   } /*if(information == ""){
        ;
   }*/

(ui->radioButton_29->setAutoExclusive(true));
(ui->radioButton_30->setAutoExclusive(true));
 (ui->radioButton_31->setAutoExclusive(true));
  (ui->radioButton_32->setAutoExclusive(true));
}
void MainCbtWindow::getUserChoiceBIO(){
     currNum5 = ui->queNum_7->text().toInt();

    QString information;
  QFile file("C:/SUB/files/system/sling/file/testcurrent/Answer/BIO/"+ QString::number(currNum5) +".dpt");
    file.open(QFile::ReadOnly | QFile::Text);
   QTextStream in(&file);
    QString line[1];   //the index of this array is the line of the text you want to extract
    for(int i = 1;i<=1;i++){
             line[0] = in.readLine();   //the index here only stores the value of the extracted text
            information = line[0]; //prints out the extracted text
   }
    file.close();
    (ui->radioButton_25->setAutoExclusive(false));
    (ui->radioButton_26->setAutoExclusive(false));
     (ui->radioButton_27->setAutoExclusive(false));
      (ui->radioButton_28->setAutoExclusive(false));
   if(information == "A"){
        ui->radioButton_25->setChecked(true);

   } if(information == "B"){
        ui->radioButton_26->setChecked(true);

   } if(information == "C"){
        ui->radioButton_27->setChecked(true);

   } if(information == "D"){
        ui->radioButton_28->setChecked(true);

   } /*if(information == ""){
        ;
   }*/

(ui->radioButton_25->setAutoExclusive(true));
(ui->radioButton_26->setAutoExclusive(true));
 (ui->radioButton_27->setAutoExclusive(true));
  (ui->radioButton_28->setAutoExclusive(true));
}

void MainCbtWindow::clearOptionENG(){
        (ui->radioButton_13->setAutoExclusive(false));
        (ui->radioButton_14->setAutoExclusive(false));
         (ui->radioButton_15->setAutoExclusive(false));
          (ui->radioButton_16->setAutoExclusive(false));
    (ui->radioButton_13->setChecked(false));
    (ui->radioButton_14->setChecked(false));
     (ui->radioButton_15->setChecked(false));
      (ui->radioButton_16->setChecked(false));
    (ui->radioButton_13->setAutoExclusive(true));
    (ui->radioButton_14->setAutoExclusive(true));
     (ui->radioButton_15->setAutoExclusive(true));
      (ui->radioButton_16->setAutoExclusive(true));
    ui->diagram_4->setVisible(false);

}

void MainCbtWindow::clearOptionMATH(){
        (ui->radioButton_17->setAutoExclusive(false));
        (ui->radioButton_18->setAutoExclusive(false));
         (ui->radioButton_19->setAutoExclusive(false));
          (ui->radioButton_20->setAutoExclusive(false));
    (ui->radioButton_17->setChecked(false));
    (ui->radioButton_18->setChecked(false));
     (ui->radioButton_19->setChecked(false));
      (ui->radioButton_20->setChecked(false));
    (ui->radioButton_17->setAutoExclusive(true));
    (ui->radioButton_18->setAutoExclusive(true));
     (ui->radioButton_19->setAutoExclusive(true));
      (ui->radioButton_20->setAutoExclusive(true));
    ui->diagram_4->setVisible(false);

}
void MainCbtWindow::clearOptionPHY(){
        (ui->radioButton_21->setAutoExclusive(false));
        (ui->radioButton_22->setAutoExclusive(false));
         (ui->radioButton_23->setAutoExclusive(false));
          (ui->radioButton_24->setAutoExclusive(false));
    (ui->radioButton_21->setChecked(false));
    (ui->radioButton_22->setChecked(false));
     (ui->radioButton_23->setChecked(false));
      (ui->radioButton_24->setChecked(false));
    (ui->radioButton_21->setAutoExclusive(true));
    (ui->radioButton_22->setAutoExclusive(true));
     (ui->radioButton_23->setAutoExclusive(true));
      (ui->radioButton_24->setAutoExclusive(true));
    ui->diagram_4->setVisible(false);

}

void MainCbtWindow::clearOptionCHE(){
        (ui->radioButton_29->setAutoExclusive(false));
        (ui->radioButton_30->setAutoExclusive(false));
         (ui->radioButton_31->setAutoExclusive(false));
          (ui->radioButton_32->setAutoExclusive(false));
    (ui->radioButton_29->setChecked(false));
    (ui->radioButton_30->setChecked(false));
     (ui->radioButton_31->setChecked(false));
      (ui->radioButton_32->setChecked(false));
    (ui->radioButton_29->setAutoExclusive(true));
    (ui->radioButton_30->setAutoExclusive(true));
     (ui->radioButton_31->setAutoExclusive(true));
      (ui->radioButton_32->setAutoExclusive(true));
    ui->diagram_4->setVisible(false);

}
void MainCbtWindow::clearOptionBIO(){
        (ui->radioButton_25->setAutoExclusive(false));
        (ui->radioButton_26->setAutoExclusive(false));
         (ui->radioButton_27->setAutoExclusive(false));
          (ui->radioButton_28->setAutoExclusive(false));
    (ui->radioButton_25->setChecked(false));
    (ui->radioButton_26->setChecked(false));
     (ui->radioButton_27->setChecked(false));
      (ui->radioButton_28->setChecked(false));
    (ui->radioButton_25->setAutoExclusive(true));
    (ui->radioButton_26->setAutoExclusive(true));
     (ui->radioButton_27->setAutoExclusive(true));
      (ui->radioButton_28->setAutoExclusive(true));
    ui->diagram_4->setVisible(false);

}

int MainCbtWindow::checkImg(QString line){
    int img;
    if(line[0]=='C'   && line[1]==':'&& line[2]=='/'){
        img = 1;
    }else{img = 0;}

    return img;
}
void MainCbtWindow::saveAnswerENG(QString sub){
     currNum1 = ui->queNum_4->text().toInt();
    QString ans = getData(sub,sub,currNum1, 7);
    QString input;int score;
    if(ui->radioButton_13->isChecked()){input = "A";}
     if(ui->radioButton_14->isChecked()){input = "B";}
      if(ui->radioButton_15->isChecked()){input = "C";}
       if(ui->radioButton_16->isChecked()){input = "D";}
 if(input==ans){
        score = 1;
    }else{
        score =0;}
    QFile file3("C:/SUB/files/system/sling/file/testcurrent/Answer/"+sub+"/"+QString::number(currNum1)+".dpt");
        if(!file3.open(QFile::WriteOnly|QFile::Text)){
            QMessageBox::warning(this, "WARNING", "Error 200.\nFailed to write data. Contact Technical personnel for help");
        }
        QTextStream out3(&file3);
       out3<<input<<"\r\n"<<score<<"\r\n";
        file3.flush();
        file3.close();
}
void MainCbtWindow::saveAnswerMATH(QString sub){
     currNum2 = ui->queNum_5->text().toInt();
    QString ans = getData(sub,sub,currNum2, 7);
    QString input;int score;
    if(ui->radioButton_17->isChecked()){input = "A";}
     if(ui->radioButton_18->isChecked()){input = "B";}
      if(ui->radioButton_19->isChecked()){input = "C";}
       if(ui->radioButton_20->isChecked()){input = "D";}
 if(input==ans){
        score = 1;
    }else{
        score =0;}
    QFile file3("C:/SUB/files/system/sling/file/testcurrent/Answer/"+sub+"/"+QString::number(currNum2)+".dpt");
        if(!file3.open(QFile::WriteOnly|QFile::Text)){
            QMessageBox::warning(this, "WARNING", "Error 200.\nFailed to write data. Contact Technical personnel for help");
        }
        QTextStream out3(&file3);
       out3<<input<<"\r\n"<<score<<"\r\n";
        file3.flush();
        file3.close();
}
void MainCbtWindow::saveAnswerPHY(QString sub){
     currNum3 = ui->queNum_6->text().toInt();
    QString ans = getData(sub,sub,currNum3, 7);
    QString input;int score;
    if(ui->radioButton_21->isChecked()){input = "A";}
     if(ui->radioButton_22->isChecked()){input = "B";}
      if(ui->radioButton_23->isChecked()){input = "C";}
       if(ui->radioButton_24->isChecked()){input = "D";}
 if(input==ans){
        score = 1;
    }else{
        score =0;}
    QFile file3("C:/SUB/files/system/sling/file/testcurrent/Answer/"+sub+"/"+QString::number(currNum3)+".dpt");
        if(!file3.open(QFile::WriteOnly|QFile::Text)){
            QMessageBox::warning(this, "WARNING", "Error 200.\nFailed to write data. Contact Technical personnel for help");
        }
        QTextStream out3(&file3);
       out3<<input<<"\r\n"<<score<<"\r\n";
        file3.flush();
        file3.close();
}

void MainCbtWindow::saveAnswerCHE(QString sub){
     currNum4 = ui->queNum_8->text().toInt();
    QString ans = getData(sub,sub,currNum4, 7);
    QString input;int score;
    if(ui->radioButton_29->isChecked()){input = "A";}
     if(ui->radioButton_30->isChecked()){input = "B";}
      if(ui->radioButton_31->isChecked()){input = "C";}
       if(ui->radioButton_32->isChecked()){input = "D";}
 if(input==ans){
        score = 1;
    }else{
        score =0;}
    QFile file3("C:/SUB/files/system/sling/file/testcurrent/Answer/"+sub+"/"+QString::number(currNum4)+".dpt");
        if(!file3.open(QFile::WriteOnly|QFile::Text)){
            QMessageBox::warning(this, "WARNING", "Error 200.\nFailed to write data. Contact Technical personnel for help");
        }
        QTextStream out3(&file3);
       out3<<input<<"\r\n"<<score<<"\r\n";
        file3.flush();
        file3.close();
}
void MainCbtWindow::saveAnswerBIO(QString sub){
     currNum5 = ui->queNum_7->text().toInt();
    QString ans = getData(sub,sub,currNum5, 7);
    QString input;int score;
    if(ui->radioButton_25->isChecked()){input = "A";}
     if(ui->radioButton_26->isChecked()){input = "B";}
      if(ui->radioButton_27->isChecked()){input = "C";}
       if(ui->radioButton_28->isChecked()){input = "D";}
 if(input==ans){
        score = 1;
    }else{
        score =0;}
    QFile file3("C:/SUB/files/system/sling/file/testcurrent/Answer/"+sub+"/"+QString::number(currNum5)+".dpt");
        if(!file3.open(QFile::WriteOnly|QFile::Text)){
            QMessageBox::warning(this, "WARNING", "Error 200.\nFailed to write data. Contact Technical personnel for help");
        }
        QTextStream out3(&file3);
       out3<<input<<"\r\n"<<score<<"\r\n";
        file3.flush();
        file3.close();
}

void MainCbtWindow::numberENG(int num){

   if(num == 2){
       if(ui->radioButton_13->isChecked()||ui->radioButton_14->isChecked()||
               ui->radioButton_15->isChecked()||ui->radioButton_16->isChecked()){
           ui->pushButton1_4->setStyleSheet("QPushButton{background-color:green;font: 20px; border:2px solid gray;border-radius: 20px;border-style: inset;max-width:40px;max-height:40px;min-width:40px;min-height:40px;}");
       }
       on_pushButton2_4_clicked();
}

       if(num == 3){
           if(ui->radioButton_13->isChecked()||ui->radioButton_14->isChecked()||
                   ui->radioButton_15->isChecked()||ui->radioButton_16->isChecked()){

               ui->pushButton2_4->setStyleSheet("QPushButton{background-color:green;font: 20px; border:2px solid gray;border-radius: 20px;border-style: inset;max-width:40px;max-height:40px;min-width:40px;min-height:40px;}");
           }
    on_pushButton3_4_clicked();

       }

       if(num == 4){
           if(ui->radioButton_13->isChecked()||ui->radioButton_14->isChecked()||
                   ui->radioButton_15->isChecked()||ui->radioButton_16->isChecked()){

               ui->pushButton3_4->setStyleSheet("QPushButton{background-color:green;font: 20px; border:2px solid gray;border-radius: 20px;border-style: inset;max-width:40px;max-height:40px;min-width:40px;min-height:40px;}");
           }

    on_pushButton4_4_clicked();}

       if(num == 5){
           if(ui->radioButton_13->isChecked()||ui->radioButton_14->isChecked()||
                   ui->radioButton_15->isChecked()||ui->radioButton_16->isChecked()){

               ui->pushButton4_4->setStyleSheet("QPushButton{background-color:green;font: 20px; border:2px solid gray;border-radius: 20px;border-style: inset;max-width:40px;max-height:40px;min-width:40px;min-height:40px;}");
           }
    on_pushButton5_4_clicked();
       }

       if(num == 6){
           if(ui->radioButton_13->isChecked()||ui->radioButton_14->isChecked()||
                   ui->radioButton_15->isChecked()||ui->radioButton_16->isChecked()){

                ui->pushButton5_4->setStyleSheet("QPushButton{background-color:green;font: 20px; border:2px solid gray;border-radius: 20px;border-style: inset;max-width:40px;max-height:40px;min-width:40px;min-height:40px;}");
           }

    on_pushButton6_4_clicked();}


       if(num == 7){
           if(ui->radioButton_13->isChecked()||ui->radioButton_14->isChecked()||
                   ui->radioButton_15->isChecked()||ui->radioButton_16->isChecked()){

                ui->pushButton6_4->setStyleSheet("QPushButton{background-color:green;font: 20px; border:2px solid gray;border-radius: 20px;border-style: inset;max-width:40px;max-height:40px;min-width:40px;min-height:40px;}");
           }

    on_pushButton7_4_clicked();
       }


       if(num == 8){
           if(ui->radioButton_13->isChecked()||ui->radioButton_14->isChecked()||
                   ui->radioButton_15->isChecked()||ui->radioButton_16->isChecked()){

                ui->pushButton7_4->setStyleSheet("QPushButton{background-color:green;font: 20px; border:2px solid gray;border-radius: 20px;border-style: inset;max-width:40px;max-height:40px;min-width:40px;min-height:40px;}");
           }

    on_pushButton8_4_clicked();}


       if(num == 9){
           if(ui->radioButton_13->isChecked()||ui->radioButton_14->isChecked()||
                   ui->radioButton_15->isChecked()||ui->radioButton_16->isChecked()){

               ui->pushButton8_4->setStyleSheet("QPushButton{background-color:green;font: 20px; border:2px solid gray;border-radius: 20px;border-style: inset;max-width:40px;max-height:40px;min-width:40px;min-height:40px;}");
           }

    on_pushButton9_4_clicked();
       }

       if(num == 10){
           if(ui->radioButton_13->isChecked()||ui->radioButton_14->isChecked()||
                   ui->radioButton_15->isChecked()||ui->radioButton_16->isChecked()){

                ui->pushButton9_4->setStyleSheet("QPushButton{background-color:green;font: 20px; border:2px solid gray;border-radius: 20px;border-style: inset;max-width:40px;max-height:40px;min-width:40px;min-height:40px;}");
           }

    on_pushButton10_4_clicked();

       }

            if(num == 11){ if(ui->radioButton_13->isChecked()||ui->radioButton_14->isChecked()||
                              ui->radioButton_15->isChecked()||ui->radioButton_16->isChecked()){
      ui->pushButton10_4->setStyleSheet("QPushButton{background-color:green;font: 20px; border:2px solid gray;border-radius: 20px;border-style: inset;max-width:40px;max-height:40px;min-width:40px;min-height:40px;}");
                      }

     on_pushButton11_4_clicked();
    }
            if(num == 12){ if(ui->radioButton_13->isChecked()||ui->radioButton_14->isChecked()||
                              ui->radioButton_15->isChecked()||ui->radioButton_16->isChecked()){
      ui->pushButton11_4->setStyleSheet("QPushButton{background-color:green;font: 20px; border:2px solid gray;border-radius: 20px;border-style: inset;max-width:40px;max-height:40px;min-width:40px;min-height:40px;}");
                      }
     on_pushButton12_4_clicked();
    }


            if(num == 13){ if(ui->radioButton_13->isChecked()||ui->radioButton_14->isChecked()||
                              ui->radioButton_15->isChecked()||ui->radioButton_16->isChecked()){
      ui->pushButton12_4->setStyleSheet("QPushButton{background-color:green;font: 20px; border:2px solid gray;border-radius: 20px;border-style: inset;max-width:40px;max-height:40px;min-width:40px;min-height:40px;}");
                      }
                on_pushButton13_4_clicked();

    }

            if(num == 14){ if(ui->radioButton_13->isChecked()||ui->radioButton_14->isChecked()||
                              ui->radioButton_15->isChecked()||ui->radioButton_16->isChecked()){
      ui->pushButton13_4->setStyleSheet("QPushButton{background-color:green;font: 20px; border:2px solid gray;border-radius: 20px;border-style: inset;max-width:40px;max-height:40px;min-width:40px;min-height:40px;}");
                      }
                on_pushButton14_4_clicked();

    }

            if(num == 15){ if(ui->radioButton_13->isChecked()||ui->radioButton_14->isChecked()||
                              ui->radioButton_15->isChecked()||ui->radioButton_16->isChecked()){
      ui->pushButton14_4->setStyleSheet("QPushButton{background-color:green;font: 20px; border:2px solid gray;border-radius: 20px;border-style: inset;max-width:40px;max-height:40px;min-width:40px;min-height:40px;}");
                      }
                on_pushButton15_4_clicked();
         }


            if(num == 16){ if(ui->radioButton_13->isChecked()||ui->radioButton_14->isChecked()||
                              ui->radioButton_15->isChecked()||ui->radioButton_16->isChecked()){
      ui->pushButton15_4->setStyleSheet("QPushButton{background-color:green;font: 20px; border:2px solid gray;border-radius: 20px;border-style: inset;max-width:40px;max-height:40px;min-width:40px;min-height:40px;}");
                      }
                on_pushButton16_4_clicked();

    }

            if(num == 17){ if(ui->radioButton_13->isChecked()||ui->radioButton_14->isChecked()||
                              ui->radioButton_15->isChecked()||ui->radioButton_16->isChecked()){
      ui->pushButton16_4->setStyleSheet("QPushButton{background-color:green;font: 20px; border:2px solid gray;border-radius: 20px;border-style: inset;max-width:40px;max-height:40px;min-width:40px;min-height:40px;}");
                      }
                on_pushButton17_4_clicked();

    }


            if(num == 18){ if(ui->radioButton_13->isChecked()||ui->radioButton_14->isChecked()||
                              ui->radioButton_15->isChecked()||ui->radioButton_16->isChecked()){
      ui->pushButton17_4->setStyleSheet("QPushButton{background-color:green;font: 20px; border:2px solid gray;border-radius: 20px;border-style: inset;max-width:40px;max-height:40px;min-width:40px;min-height:40px;}");
                      }
                on_pushButton18_4_clicked();

    }

            if(num == 19){ if(ui->radioButton_13->isChecked()||ui->radioButton_14->isChecked()||
                              ui->radioButton_15->isChecked()||ui->radioButton_16->isChecked()){
      ui->pushButton18_4->setStyleSheet("QPushButton{background-color:green;font: 20px; border:2px solid gray;border-radius: 20px;border-style: inset;max-width:40px;max-height:40px;min-width:40px;min-height:40px;}");
                      }
                on_pushButton19_4_clicked();

    }

            if(num == 20){ if(ui->radioButton_13->isChecked()||ui->radioButton_14->isChecked()||
                              ui->radioButton_15->isChecked()||ui->radioButton_16->isChecked()){
      ui->pushButton19_4->setStyleSheet("QPushButton{background-color:green;font: 20px; border:2px solid gray;border-radius: 20px;border-style: inset;max-width:40px;max-height:40px;min-width:40px;min-height:40px;}");
                    }

                on_pushButton20_4_clicked();

    }

            if(num == 21){ if(ui->radioButton_13->isChecked()||ui->radioButton_14->isChecked()||
                              ui->radioButton_15->isChecked()||ui->radioButton_16->isChecked()){
      ui->pushButton20_4->setStyleSheet("QPushButton{background-color:green;font: 20px; border:2px solid gray;border-radius: 20px;border-style: inset;max-width:40px;max-height:40px;min-width:40px;min-height:40px;}");
                      }
                on_pushButton1_13_clicked();
                    ui->tabWidget->setCurrentIndex(1);

    }
  }
void MainCbtWindow::numberMATH(int num){
   if(num == 2){
       if(ui->radioButton_17->isChecked()||ui->radioButton_18->isChecked()||
               ui->radioButton_19->isChecked()||ui->radioButton_20->isChecked()){
           ui->pushButton1_13->setStyleSheet("QPushButton{background-color:green;font: 20px; border:2px solid gray;border-radius: 20px;border-style: inset;max-width:40px;max-height:40px;min-width:40px;min-height:40px;}");
       }
       on_pushButton2_13_clicked();;
}

       if(num == 3){
           if(ui->radioButton_17->isChecked()||ui->radioButton_18->isChecked()||
                   ui->radioButton_19->isChecked()||ui->radioButton_20->isChecked()){

               ui->pushButton2_13->setStyleSheet("QPushButton{background-color:green;font: 20px; border:2px solid gray;border-radius: 20px;border-style: inset;max-width:40px;max-height:40px;min-width:40px;min-height:40px;}");
           }
    on_pushButton3_13_clicked();;

       }

       if(num == 4){
           if(ui->radioButton_17->isChecked()||ui->radioButton_18->isChecked()||
                   ui->radioButton_19->isChecked()||ui->radioButton_20->isChecked()){

               ui->pushButton3_13->setStyleSheet("QPushButton{background-color:green;font: 20px; border:2px solid gray;border-radius: 20px;border-style: inset;max-width:40px;max-height:40px;min-width:40px;min-height:40px;}");
           }

    on_pushButton4_13_clicked();;}

       if(num == 5){
           if(ui->radioButton_17->isChecked()||ui->radioButton_18->isChecked()||
                   ui->radioButton_19->isChecked()||ui->radioButton_20->isChecked()){

               ui->pushButton4_13->setStyleSheet("QPushButton{background-color:green;font: 20px; border:2px solid gray;border-radius: 20px;border-style: inset;max-width:40px;max-height:40px;min-width:40px;min-height:40px;}");
           }
    on_pushButton5_13_clicked();;
       }

       if(num == 6){
           if(ui->radioButton_17->isChecked()||ui->radioButton_18->isChecked()||
                   ui->radioButton_19->isChecked()||ui->radioButton_20->isChecked()){

                ui->pushButton5_13->setStyleSheet("QPushButton{background-color:green;font: 20px; border:2px solid gray;border-radius: 20px;border-style: inset;max-width:40px;max-height:40px;min-width:40px;min-height:40px;}");
           }

    on_pushButton6_13_clicked();;}


       if(num == 7){
           if(ui->radioButton_17->isChecked()||ui->radioButton_18->isChecked()||
                   ui->radioButton_19->isChecked()||ui->radioButton_20->isChecked()){

                ui->pushButton6_13->setStyleSheet("QPushButton{background-color:green;font: 20px; border:2px solid gray;border-radius: 20px;border-style: inset;max-width:40px;max-height:40px;min-width:40px;min-height:40px;}");
           }

    on_pushButton7_13_clicked();;
       }


       if(num == 8){
           if(ui->radioButton_17->isChecked()||ui->radioButton_18->isChecked()||
                   ui->radioButton_19->isChecked()||ui->radioButton_20->isChecked()){

                ui->pushButton7_13->setStyleSheet("QPushButton{background-color:green;font: 20px; border:2px solid gray;border-radius: 20px;border-style: inset;max-width:40px;max-height:40px;min-width:40px;min-height:40px;}");
           }

    on_pushButton8_13_clicked();;}


       if(num == 9){
           if(ui->radioButton_17->isChecked()||ui->radioButton_18->isChecked()||
                   ui->radioButton_19->isChecked()||ui->radioButton_20->isChecked()){

               ui->pushButton8_13->setStyleSheet("QPushButton{background-color:green;font: 20px; border:2px solid gray;border-radius: 20px;border-style: inset;max-width:40px;max-height:40px;min-width:40px;min-height:40px;}");
           }

    on_pushButton9_13_clicked();;
       }

       if(num == 10){
           if(ui->radioButton_17->isChecked()||ui->radioButton_18->isChecked()||
                   ui->radioButton_19->isChecked()||ui->radioButton_20->isChecked()){

                ui->pushButton9_13->setStyleSheet("QPushButton{background-color:green;font: 20px; border:2px solid gray;border-radius: 20px;border-style: inset;max-width:40px;max-height:40px;min-width:40px;min-height:40px;}");
           }

    on_pushButton10_13_clicked();;

       }

            if(num == 11){ if(ui->radioButton_17->isChecked()||ui->radioButton_18->isChecked()||
                              ui->radioButton_19->isChecked()||ui->radioButton_20->isChecked()){
      ui->pushButton10_13->setStyleSheet("QPushButton{background-color:green;font: 20px; border:2px solid gray;border-radius: 20px;border-style: inset;max-width:40px;max-height:40px;min-width:40px;min-height:40px;}");
                      }

     on_pushButton11_13_clicked();;
    }
            if(num == 12){ if(ui->radioButton_17->isChecked()||ui->radioButton_18->isChecked()||
                              ui->radioButton_19->isChecked()||ui->radioButton_20->isChecked()){
      ui->pushButton11_13->setStyleSheet("QPushButton{background-color:green;font: 20px; border:2px solid gray;border-radius: 20px;border-style: inset;max-width:40px;max-height:40px;min-width:40px;min-height:40px;}");
                      }
     on_pushButton12_13_clicked();;
    }


            if(num == 13){ if(ui->radioButton_17->isChecked()||ui->radioButton_18->isChecked()||
                              ui->radioButton_19->isChecked()||ui->radioButton_20->isChecked()){
      ui->pushButton12_13->setStyleSheet("QPushButton{background-color:green;font: 20px; border:2px solid gray;border-radius: 20px;border-style: inset;max-width:40px;max-height:40px;min-width:40px;min-height:40px;}");
                      }
                on_pushButton13_13_clicked();;

    }

            if(num == 14){ if(ui->radioButton_17->isChecked()||ui->radioButton_18->isChecked()||
                              ui->radioButton_19->isChecked()||ui->radioButton_20->isChecked()){
      ui->pushButton13_13->setStyleSheet("QPushButton{background-color:green;font: 20px; border:2px solid gray;border-radius: 20px;border-style: inset;max-width:40px;max-height:40px;min-width:40px;min-height:40px;}");
                      }
                on_pushButton14_13_clicked();;

    }

            if(num == 15){ if(ui->radioButton_17->isChecked()||ui->radioButton_18->isChecked()||
                              ui->radioButton_19->isChecked()||ui->radioButton_20->isChecked()){
      ui->pushButton14_13->setStyleSheet("QPushButton{background-color:green;font: 20px; border:2px solid gray;border-radius: 20px;border-style: inset;max-width:40px;max-height:40px;min-width:40px;min-height:40px;}");
                      }
                on_pushButton15_13_clicked();;
         }


            if(num == 16){ if(ui->radioButton_17->isChecked()||ui->radioButton_18->isChecked()||
                              ui->radioButton_19->isChecked()||ui->radioButton_20->isChecked()){
      ui->pushButton15_13->setStyleSheet("QPushButton{background-color:green;font: 20px; border:2px solid gray;border-radius: 20px;border-style: inset;max-width:40px;max-height:40px;min-width:40px;min-height:40px;}");
                      }
                on_pushButton16_13_clicked();;

    }

            if(num == 17){ if(ui->radioButton_17->isChecked()||ui->radioButton_18->isChecked()||
                              ui->radioButton_19->isChecked()||ui->radioButton_20->isChecked()){
      ui->pushButton16_13->setStyleSheet("QPushButton{background-color:green;font: 20px; border:2px solid gray;border-radius: 20px;border-style: inset;max-width:40px;max-height:40px;min-width:40px;min-height:40px;}");
                      }
                on_pushButton17_13_clicked();;

    }


            if(num == 18){ if(ui->radioButton_17->isChecked()||ui->radioButton_18->isChecked()||
                              ui->radioButton_19->isChecked()||ui->radioButton_20->isChecked()){
      ui->pushButton17_13->setStyleSheet("QPushButton{background-color:green;font: 20px; border:2px solid gray;border-radius: 20px;border-style: inset;max-width:40px;max-height:40px;min-width:40px;min-height:40px;}");
                      }
                on_pushButton18_13_clicked();;

    }

            if(num == 19){ if(ui->radioButton_17->isChecked()||ui->radioButton_18->isChecked()||
                              ui->radioButton_19->isChecked()||ui->radioButton_20->isChecked()){
      ui->pushButton18_13->setStyleSheet("QPushButton{background-color:green;font: 20px; border:2px solid gray;border-radius: 20px;border-style: inset;max-width:40px;max-height:40px;min-width:40px;min-height:40px;}");
                      }
                on_pushButton19_13_clicked();;

    }

            if(num == 20){ if(ui->radioButton_17->isChecked()||ui->radioButton_18->isChecked()||
                              ui->radioButton_19->isChecked()||ui->radioButton_20->isChecked()){
      ui->pushButton19_13->setStyleSheet("QPushButton{background-color:green;font: 20px; border:2px solid gray;border-radius: 20px;border-style: inset;max-width:40px;max-height:40px;min-width:40px;min-height:40px;}");
                    }

                on_pushButton20_13_clicked();

    }

            if(num == 21){ if(ui->radioButton_17->isChecked()||ui->radioButton_18->isChecked()||
                              ui->radioButton_19->isChecked()||ui->radioButton_20->isChecked()){
      ui->pushButton20_13->setStyleSheet("QPushButton{background-color:green;font: 20px; border:2px solid gray;border-radius: 20px;border-style: inset;max-width:40px;max-height:40px;min-width:40px;min-height:40px;}");
                      }
                    ui->tabWidget->setCurrentIndex(2);
                    on_pushButton1_12_clicked();

    }
  }
void MainCbtWindow::numberPHY(int num){
   if(num == 2){
       if(ui->radioButton_21->isChecked()||ui->radioButton_22->isChecked()||
               ui->radioButton_23->isChecked()||ui->radioButton_24->isChecked()){
           ui->pushButton1_12->setStyleSheet("QPushButton{background-color:green;font: 20px; border:2px solid gray;border-radius: 20px;border-style: inset;max-width:40px;max-height:40px;min-width:40px;min-height:40px;}");
       }
       on_pushButton2_12_clicked();;
}

       if(num == 3){
           if(ui->radioButton_21->isChecked()||ui->radioButton_22->isChecked()||
                   ui->radioButton_23->isChecked()||ui->radioButton_24->isChecked()){

               ui->pushButton2_12->setStyleSheet("QPushButton{background-color:green;font: 20px; border:2px solid gray;border-radius: 20px;border-style: inset;max-width:40px;max-height:40px;min-width:40px;min-height:40px;}");
           }
    on_pushButton3_12_clicked();;

       }

       if(num == 4){
           if(ui->radioButton_21->isChecked()||ui->radioButton_22->isChecked()||
                   ui->radioButton_23->isChecked()||ui->radioButton_24->isChecked()){

               ui->pushButton3_12->setStyleSheet("QPushButton{background-color:green;font: 20px; border:2px solid gray;border-radius: 20px;border-style: inset;max-width:40px;max-height:40px;min-width:40px;min-height:40px;}");
           }

    on_pushButton4_12_clicked();;}

       if(num == 5){
           if(ui->radioButton_21->isChecked()||ui->radioButton_22->isChecked()||
                   ui->radioButton_23->isChecked()||ui->radioButton_24->isChecked()){

               ui->pushButton4_12->setStyleSheet("QPushButton{background-color:green;font: 20px; border:2px solid gray;border-radius: 20px;border-style: inset;max-width:40px;max-height:40px;min-width:40px;min-height:40px;}");
           }
    on_pushButton5_12_clicked();;
       }

       if(num == 6){
           if(ui->radioButton_21->isChecked()||ui->radioButton_22->isChecked()||
                   ui->radioButton_23->isChecked()||ui->radioButton_24->isChecked()){

                ui->pushButton5_12->setStyleSheet("QPushButton{background-color:green;font: 20px; border:2px solid gray;border-radius: 20px;border-style: inset;max-width:40px;max-height:40px;min-width:40px;min-height:40px;}");
           }

    on_pushButton6_12_clicked();;}


       if(num == 7){
           if(ui->radioButton_21->isChecked()||ui->radioButton_22->isChecked()||
                   ui->radioButton_23->isChecked()||ui->radioButton_24->isChecked()){

                ui->pushButton6_12->setStyleSheet("QPushButton{background-color:green;font: 20px; border:2px solid gray;border-radius: 20px;border-style: inset;max-width:40px;max-height:40px;min-width:40px;min-height:40px;}");
           }

    on_pushButton7_12_clicked();;
       }


       if(num == 8){
           if(ui->radioButton_21->isChecked()||ui->radioButton_22->isChecked()||
                   ui->radioButton_23->isChecked()||ui->radioButton_24->isChecked()){

                ui->pushButton7_12->setStyleSheet("QPushButton{background-color:green;font: 20px; border:2px solid gray;border-radius: 20px;border-style: inset;max-width:40px;max-height:40px;min-width:40px;min-height:40px;}");
           }

    on_pushButton8_12_clicked();;}


       if(num == 9){
           if(ui->radioButton_21->isChecked()||ui->radioButton_22->isChecked()||
                   ui->radioButton_23->isChecked()||ui->radioButton_24->isChecked()){

               ui->pushButton8_12->setStyleSheet("QPushButton{background-color:green;font: 20px; border:2px solid gray;border-radius: 20px;border-style: inset;max-width:40px;max-height:40px;min-width:40px;min-height:40px;}");
           }

    on_pushButton9_12_clicked();;
       }

       if(num == 10){
           if(ui->radioButton_21->isChecked()||ui->radioButton_22->isChecked()||
                   ui->radioButton_23->isChecked()||ui->radioButton_24->isChecked()){

                ui->pushButton9_12->setStyleSheet("QPushButton{background-color:green;font: 20px; border:2px solid gray;border-radius: 20px;border-style: inset;max-width:40px;max-height:40px;min-width:40px;min-height:40px;}");
           }

    on_pushButton10_12_clicked();;

       }

            if(num == 11){ if(ui->radioButton_21->isChecked()||ui->radioButton_22->isChecked()||
                              ui->radioButton_23->isChecked()||ui->radioButton_24->isChecked()){
      ui->pushButton10_12->setStyleSheet("QPushButton{background-color:green;font: 20px; border:2px solid gray;border-radius: 20px;border-style: inset;max-width:40px;max-height:40px;min-width:40px;min-height:40px;}");
                      }

     on_pushButton11_12_clicked();;
    }
            if(num == 12){ if(ui->radioButton_21->isChecked()||ui->radioButton_22->isChecked()||
                              ui->radioButton_23->isChecked()||ui->radioButton_24->isChecked()){
      ui->pushButton11_12->setStyleSheet("QPushButton{background-color:green;font: 20px; border:2px solid gray;border-radius: 20px;border-style: inset;max-width:40px;max-height:40px;min-width:40px;min-height:40px;}");
                      }
     on_pushButton12_12_clicked();;
    }


            if(num == 13){ if(ui->radioButton_21->isChecked()||ui->radioButton_22->isChecked()||
                              ui->radioButton_23->isChecked()||ui->radioButton_24->isChecked()){
      ui->pushButton12_12->setStyleSheet("QPushButton{background-color:green;font: 20px; border:2px solid gray;border-radius: 20px;border-style: inset;max-width:40px;max-height:40px;min-width:40px;min-height:40px;}");
                      }
                on_pushButton13_12_clicked();;

    }

            if(num == 14){ if(ui->radioButton_21->isChecked()||ui->radioButton_22->isChecked()||
                              ui->radioButton_23->isChecked()||ui->radioButton_24->isChecked()){
      ui->pushButton13_12->setStyleSheet("QPushButton{background-color:green;font: 20px; border:2px solid gray;border-radius: 20px;border-style: inset;max-width:40px;max-height:40px;min-width:40px;min-height:40px;}");
                      }
                on_pushButton14_12_clicked();;

    }

            if(num == 15){ if(ui->radioButton_21->isChecked()||ui->radioButton_22->isChecked()||
                              ui->radioButton_23->isChecked()||ui->radioButton_24->isChecked()){
      ui->pushButton14_12->setStyleSheet("QPushButton{background-color:green;font: 20px; border:2px solid gray;border-radius: 20px;border-style: inset;max-width:40px;max-height:40px;min-width:40px;min-height:40px;}");
                      }
                on_pushButton15_12_clicked();;
         }


            if(num == 16){ if(ui->radioButton_21->isChecked()||ui->radioButton_22->isChecked()||
                              ui->radioButton_23->isChecked()||ui->radioButton_24->isChecked()){
      ui->pushButton15_12->setStyleSheet("QPushButton{background-color:green;font: 20px; border:2px solid gray;border-radius: 20px;border-style: inset;max-width:40px;max-height:40px;min-width:40px;min-height:40px;}");
                      }
                on_pushButton16_12_clicked();;

    }

            if(num == 17){ if(ui->radioButton_21->isChecked()||ui->radioButton_22->isChecked()||
                              ui->radioButton_23->isChecked()||ui->radioButton_24->isChecked()){
      ui->pushButton16_12->setStyleSheet("QPushButton{background-color:green;font: 20px; border:2px solid gray;border-radius: 20px;border-style: inset;max-width:40px;max-height:40px;min-width:40px;min-height:40px;}");
                      }
                on_pushButton17_12_clicked();;

    }


            if(num == 18){ if(ui->radioButton_21->isChecked()||ui->radioButton_22->isChecked()||
                              ui->radioButton_23->isChecked()||ui->radioButton_24->isChecked()){
      ui->pushButton17_12->setStyleSheet("QPushButton{background-color:green;font: 20px; border:2px solid gray;border-radius: 20px;border-style: inset;max-width:40px;max-height:40px;min-width:40px;min-height:40px;}");
                      }
                on_pushButton18_12_clicked();;

    }

            if(num == 19){ if(ui->radioButton_21->isChecked()||ui->radioButton_22->isChecked()||
                              ui->radioButton_23->isChecked()||ui->radioButton_24->isChecked()){
      ui->pushButton18_12->setStyleSheet("QPushButton{background-color:green;font: 20px; border:2px solid gray;border-radius: 20px;border-style: inset;max-width:40px;max-height:40px;min-width:40px;min-height:40px;}");
                      }
                on_pushButton19_12_clicked();;

    }

            if(num == 20){ if(ui->radioButton_21->isChecked()||ui->radioButton_22->isChecked()||
                              ui->radioButton_23->isChecked()||ui->radioButton_24->isChecked()){
      ui->pushButton19_12->setStyleSheet("QPushButton{background-color:green;font: 20px; border:2px solid gray;border-radius: 20px;border-style: inset;max-width:40px;max-height:40px;min-width:40px;min-height:40px;}");
                    }

                on_pushButton20_12_clicked();;

    }

            if(num == 21){ if(ui->radioButton_21->isChecked()||ui->radioButton_22->isChecked()||
                              ui->radioButton_23->isChecked()||ui->radioButton_24->isChecked()){
      ui->pushButton20_12->setStyleSheet("QPushButton{background-color:green;font: 20px; border:2px solid gray;border-radius: 20px;border-style: inset;max-width:40px;max-height:40px;min-width:40px;min-height:40px;}");
                      }
                    ui->tabWidget->setCurrentIndex(3);
                     on_pushButton1_10_clicked();

    }
  }

void MainCbtWindow::numberCHE(int num){
   if(num == 2){
       if(ui->radioButton_29->isChecked()||ui->radioButton_30->isChecked()||
               ui->radioButton_31->isChecked()||ui->radioButton_32->isChecked()){
           ui->pushButton1_10->setStyleSheet("QPushButton{background-color:green;font: 20px; border:2px solid gray;border-radius: 20px;border-style: inset;max-width:40px;max-height:40px;min-width:40px;min-height:40px;}");
       }
       on_pushButton2_10_clicked();;
}

       if(num == 3){
           if(ui->radioButton_29->isChecked()||ui->radioButton_30->isChecked()||
                   ui->radioButton_31->isChecked()||ui->radioButton_32->isChecked()){

               ui->pushButton2_10->setStyleSheet("QPushButton{background-color:green;font: 20px; border:2px solid gray;border-radius: 20px;border-style: inset;max-width:40px;max-height:40px;min-width:40px;min-height:40px;}");
           }
    on_pushButton3_10_clicked();;

       }

       if(num == 4){
           if(ui->radioButton_29->isChecked()||ui->radioButton_30->isChecked()||
                   ui->radioButton_31->isChecked()||ui->radioButton_32->isChecked()){

               ui->pushButton3_10->setStyleSheet("QPushButton{background-color:green;font: 20px; border:2px solid gray;border-radius: 20px;border-style: inset;max-width:40px;max-height:40px;min-width:40px;min-height:40px;}");
           }

    on_pushButton4_10_clicked();;}

       if(num == 5){
           if(ui->radioButton_29->isChecked()||ui->radioButton_30->isChecked()||
                   ui->radioButton_31->isChecked()||ui->radioButton_32->isChecked()){

               ui->pushButton4_10->setStyleSheet("QPushButton{background-color:green;font: 20px; border:2px solid gray;border-radius: 20px;border-style: inset;max-width:40px;max-height:40px;min-width:40px;min-height:40px;}");
           }
    on_pushButton5_10_clicked();;
       }

       if(num == 6){
           if(ui->radioButton_29->isChecked()||ui->radioButton_30->isChecked()||
                   ui->radioButton_31->isChecked()||ui->radioButton_32->isChecked()){

                ui->pushButton5_10->setStyleSheet("QPushButton{background-color:green;font: 20px; border:2px solid gray;border-radius: 20px;border-style: inset;max-width:40px;max-height:40px;min-width:40px;min-height:40px;}");
           }

    on_pushButton6_10_clicked();;}


       if(num == 7){
           if(ui->radioButton_29->isChecked()||ui->radioButton_30->isChecked()||
                   ui->radioButton_31->isChecked()||ui->radioButton_32->isChecked()){

                ui->pushButton6_10->setStyleSheet("QPushButton{background-color:green;font: 20px; border:2px solid gray;border-radius: 20px;border-style: inset;max-width:40px;max-height:40px;min-width:40px;min-height:40px;}");
           }

    on_pushButton7_10_clicked();;
       }


       if(num == 8){
           if(ui->radioButton_29->isChecked()||ui->radioButton_30->isChecked()||
                   ui->radioButton_31->isChecked()||ui->radioButton_32->isChecked()){

                ui->pushButton7_10->setStyleSheet("QPushButton{background-color:green;font: 20px; border:2px solid gray;border-radius: 20px;border-style: inset;max-width:40px;max-height:40px;min-width:40px;min-height:40px;}");
           }

    on_pushButton8_10_clicked();;}


       if(num == 9){
           if(ui->radioButton_29->isChecked()||ui->radioButton_30->isChecked()||
                   ui->radioButton_31->isChecked()||ui->radioButton_32->isChecked()){

               ui->pushButton8_10->setStyleSheet("QPushButton{background-color:green;font: 20px; border:2px solid gray;border-radius: 20px;border-style: inset;max-width:40px;max-height:40px;min-width:40px;min-height:40px;}");
           }

    on_pushButton9_10_clicked();;
       }

       if(num == 10){
           if(ui->radioButton_29->isChecked()||ui->radioButton_30->isChecked()||
                   ui->radioButton_31->isChecked()||ui->radioButton_32->isChecked()){

                ui->pushButton9_10->setStyleSheet("QPushButton{background-color:green;font: 20px; border:2px solid gray;border-radius: 20px;border-style: inset;max-width:40px;max-height:40px;min-width:40px;min-height:40px;}");
           }

    on_pushButton10_10_clicked();;

       }

            if(num == 11){ if(ui->radioButton_29->isChecked()||ui->radioButton_30->isChecked()||
                              ui->radioButton_31->isChecked()||ui->radioButton_32->isChecked()){
      ui->pushButton10_10->setStyleSheet("QPushButton{background-color:green;font: 20px; border:2px solid gray;border-radius: 20px;border-style: inset;max-width:40px;max-height:40px;min-width:40px;min-height:40px;}");
                      }


                on_pushButton11_10_clicked();;
    }
            if(num == 12){ if(ui->radioButton_29->isChecked()||ui->radioButton_30->isChecked()||
                              ui->radioButton_31->isChecked()||ui->radioButton_32->isChecked()){
      ui->pushButton11_10->setStyleSheet("QPushButton{background-color:green;font: 20px; border:2px solid gray;border-radius: 20px;border-style: inset;max-width:40px;max-height:40px;min-width:40px;min-height:40px;}");
                      }
     on_pushButton12_10_clicked();;
    }


            if(num == 13){ if(ui->radioButton_29->isChecked()||ui->radioButton_30->isChecked()||
                              ui->radioButton_31->isChecked()||ui->radioButton_32->isChecked()){
      ui->pushButton12_10->setStyleSheet("QPushButton{background-color:green;font: 20px; border:2px solid gray;border-radius: 20px;border-style: inset;max-width:40px;max-height:40px;min-width:40px;min-height:40px;}");
                      }
                on_pushButton13_10_clicked();;

    }

            if(num == 14){ if(ui->radioButton_29->isChecked()||ui->radioButton_30->isChecked()||
                              ui->radioButton_31->isChecked()||ui->radioButton_32->isChecked()){
      ui->pushButton13_10->setStyleSheet("QPushButton{background-color:green;font: 20px; border:2px solid gray;border-radius: 20px;border-style: inset;max-width:40px;max-height:40px;min-width:40px;min-height:40px;}");
                      }
                on_pushButton14_10_clicked();;

    }

            if(num == 15){ if(ui->radioButton_29->isChecked()||ui->radioButton_30->isChecked()||
                              ui->radioButton_31->isChecked()||ui->radioButton_32->isChecked()){
      ui->pushButton14_10->setStyleSheet("QPushButton{background-color:green;font: 20px; border:2px solid gray;border-radius: 20px;border-style: inset;max-width:40px;max-height:40px;min-width:40px;min-height:40px;}");
                      }
                on_pushButton15_10_clicked();;
         }


            if(num == 16){ if(ui->radioButton_29->isChecked()||ui->radioButton_30->isChecked()||
                              ui->radioButton_31->isChecked()||ui->radioButton_32->isChecked()){
      ui->pushButton15_10->setStyleSheet("QPushButton{background-color:green;font: 20px; border:2px solid gray;border-radius: 20px;border-style: inset;max-width:40px;max-height:40px;min-width:40px;min-height:40px;}");
                      }
                on_pushButton16_10_clicked();;

    }

            if(num == 17){ if(ui->radioButton_29->isChecked()||ui->radioButton_30->isChecked()||
                              ui->radioButton_31->isChecked()||ui->radioButton_32->isChecked()){
      ui->pushButton16_10->setStyleSheet("QPushButton{background-color:green;font: 20px; border:2px solid gray;border-radius: 20px;border-style: inset;max-width:40px;max-height:40px;min-width:40px;min-height:40px;}");
                      }
                on_pushButton17_10_clicked();;

    }


            if(num == 18){ if(ui->radioButton_29->isChecked()||ui->radioButton_30->isChecked()||
                              ui->radioButton_31->isChecked()||ui->radioButton_32->isChecked()){
      ui->pushButton17_10->setStyleSheet("QPushButton{background-color:green;font: 20px; border:2px solid gray;border-radius: 20px;border-style: inset;max-width:40px;max-height:40px;min-width:40px;min-height:40px;}");
                      }
                on_pushButton18_10_clicked();;

    }

            if(num == 19){ if(ui->radioButton_29->isChecked()||ui->radioButton_30->isChecked()||
                              ui->radioButton_31->isChecked()||ui->radioButton_32->isChecked()){
      ui->pushButton18_10->setStyleSheet("QPushButton{background-color:green;font: 20px; border:2px solid gray;border-radius: 20px;border-style: inset;max-width:40px;max-height:40px;min-width:40px;min-height:40px;}");
                      }
                on_pushButton19_10_clicked();;

    }

            if(num == 20){ if(ui->radioButton_29->isChecked()||ui->radioButton_30->isChecked()||
                              ui->radioButton_31->isChecked()||ui->radioButton_32->isChecked()){
      ui->pushButton19_10->setStyleSheet("QPushButton{background-color:green;font: 20px; border:2px solid gray;border-radius: 20px;border-style: inset;max-width:40px;max-height:40px;min-width:40px;min-height:40px;}");
                    }

                on_pushButton20_10_clicked();;

    }

            if(num == 21){ if(ui->radioButton_29->isChecked()||ui->radioButton_30->isChecked()||
                              ui->radioButton_31->isChecked()||ui->radioButton_32->isChecked()){
      ui->pushButton20_10->setStyleSheet("QPushButton{background-color:green;font: 20px; border:2px solid gray;border-radius: 20px;border-style: inset;max-width:40px;max-height:40px;min-width:40px;min-height:40px;}");
                      }
 ui->tabWidget->setCurrentIndex(4);
 on_pushButton1_11_clicked();
    }
  }

void MainCbtWindow::numberBIO(int num){
   if(num == 2){
       if(ui->radioButton_25->isChecked()||ui->radioButton_26->isChecked()||
               ui->radioButton_27->isChecked()||ui->radioButton_28->isChecked()){
           ui->pushButton1_11->setStyleSheet("QPushButton{background-color:green;font: 20px; border:2px solid gray;border-radius: 20px;border-style: inset;max-width:40px;max-height:40px;min-width:40px;min-height:40px;}");
       }
       on_pushButton2_11_clicked();;
}

       if(num == 3){
           if(ui->radioButton_25->isChecked()||ui->radioButton_26->isChecked()||
                   ui->radioButton_27->isChecked()||ui->radioButton_28->isChecked()){

               ui->pushButton2_11->setStyleSheet("QPushButton{background-color:green;font: 20px; border:2px solid gray;border-radius: 20px;border-style: inset;max-width:40px;max-height:40px;min-width:40px;min-height:40px;}");
           }
    on_pushButton3_11_clicked();;

       }

       if(num == 4){
           if(ui->radioButton_25->isChecked()||ui->radioButton_26->isChecked()||
                   ui->radioButton_27->isChecked()||ui->radioButton_28->isChecked()){

               ui->pushButton3_11->setStyleSheet("QPushButton{background-color:green;font: 20px; border:2px solid gray;border-radius: 20px;border-style: inset;max-width:40px;max-height:40px;min-width:40px;min-height:40px;}");
           }

    on_pushButton4_11_clicked();;}

       if(num == 5){
           if(ui->radioButton_25->isChecked()||ui->radioButton_26->isChecked()||
                   ui->radioButton_27->isChecked()||ui->radioButton_28->isChecked()){

               ui->pushButton4_11->setStyleSheet("QPushButton{background-color:green;font: 20px; border:2px solid gray;border-radius: 20px;border-style: inset;max-width:40px;max-height:40px;min-width:40px;min-height:40px;}");
           }
    on_pushButton5_11_clicked();;
       }

       if(num == 6){
           if(ui->radioButton_25->isChecked()||ui->radioButton_26->isChecked()||
                   ui->radioButton_27->isChecked()||ui->radioButton_28->isChecked()){

                ui->pushButton5_11->setStyleSheet("QPushButton{background-color:green;font: 20px; border:2px solid gray;border-radius: 20px;border-style: inset;max-width:40px;max-height:40px;min-width:40px;min-height:40px;}");
           }

    on_pushButton6_11_clicked();;}


       if(num == 7){
           if(ui->radioButton_25->isChecked()||ui->radioButton_26->isChecked()||
                   ui->radioButton_27->isChecked()||ui->radioButton_28->isChecked()){

                ui->pushButton6_11->setStyleSheet("QPushButton{background-color:green;font: 20px; border:2px solid gray;border-radius: 20px;border-style: inset;max-width:40px;max-height:40px;min-width:40px;min-height:40px;}");
           }

    on_pushButton7_11_clicked();;
       }


       if(num == 8){
           if(ui->radioButton_25->isChecked()||ui->radioButton_26->isChecked()||
                   ui->radioButton_27->isChecked()||ui->radioButton_28->isChecked()){

                ui->pushButton7_11->setStyleSheet("QPushButton{background-color:green;font: 20px; border:2px solid gray;border-radius: 20px;border-style: inset;max-width:40px;max-height:40px;min-width:40px;min-height:40px;}");
           }

    on_pushButton8_11_clicked();;}


       if(num == 9){
           if(ui->radioButton_25->isChecked()||ui->radioButton_26->isChecked()||
                   ui->radioButton_27->isChecked()||ui->radioButton_28->isChecked()){

               ui->pushButton8_11->setStyleSheet("QPushButton{background-color:green;font: 20px; border:2px solid gray;border-radius: 20px;border-style: inset;max-width:40px;max-height:40px;min-width:40px;min-height:40px;}");
           }

    on_pushButton9_11_clicked();;
       }

       if(num == 10){
           if(ui->radioButton_25->isChecked()||ui->radioButton_26->isChecked()||
                   ui->radioButton_27->isChecked()||ui->radioButton_28->isChecked()){

                ui->pushButton9_11->setStyleSheet("QPushButton{background-color:green;font: 20px; border:2px solid gray;border-radius: 20px;border-style: inset;max-width:40px;max-height:40px;min-width:40px;min-height:40px;}");
           }

    on_pushButton10_11_clicked();;

       }

            if(num == 11){ if(ui->radioButton_25->isChecked()||ui->radioButton_26->isChecked()||
                              ui->radioButton_27->isChecked()||ui->radioButton_28->isChecked()){
      ui->pushButton10_11->setStyleSheet("QPushButton{background-color:green;font: 20px; border:2px solid gray;border-radius: 20px;border-style: inset;max-width:40px;max-height:40px;min-width:40px;min-height:40px;}");
                      }

     on_pushButton11_11_clicked();;
    }
            if(num == 12){ if(ui->radioButton_25->isChecked()||ui->radioButton_26->isChecked()||
                              ui->radioButton_27->isChecked()||ui->radioButton_28->isChecked()){
      ui->pushButton11_11->setStyleSheet("QPushButton{background-color:green;font: 20px; border:2px solid gray;border-radius: 20px;border-style: inset;max-width:40px;max-height:40px;min-width:40px;min-height:40px;}");
                      }
     on_pushButton12_11_clicked();;
    }


            if(num == 13){ if(ui->radioButton_25->isChecked()||ui->radioButton_26->isChecked()||
                              ui->radioButton_27->isChecked()||ui->radioButton_28->isChecked()){
      ui->pushButton12_11->setStyleSheet("QPushButton{background-color:green;font: 20px; border:2px solid gray;border-radius: 20px;border-style: inset;max-width:40px;max-height:40px;min-width:40px;min-height:40px;}");
                      }
                on_pushButton13_11_clicked();;

    }

            if(num == 14){ if(ui->radioButton_25->isChecked()||ui->radioButton_26->isChecked()||
                              ui->radioButton_27->isChecked()||ui->radioButton_28->isChecked()){
      ui->pushButton13_11->setStyleSheet("QPushButton{background-color:green;font: 20px; border:2px solid gray;border-radius: 20px;border-style: inset;max-width:40px;max-height:40px;min-width:40px;min-height:40px;}");
                      }
                on_pushButton14_11_clicked();;

    }

            if(num == 15){ if(ui->radioButton_25->isChecked()||ui->radioButton_26->isChecked()||
                              ui->radioButton_27->isChecked()||ui->radioButton_28->isChecked()){
      ui->pushButton14_11->setStyleSheet("QPushButton{background-color:green;font: 20px; border:2px solid gray;border-radius: 20px;border-style: inset;max-width:40px;max-height:40px;min-width:40px;min-height:40px;}");
                      }
                on_pushButton15_11_clicked();;
         }


            if(num == 16){ if(ui->radioButton_25->isChecked()||ui->radioButton_26->isChecked()||
                              ui->radioButton_27->isChecked()||ui->radioButton_28->isChecked()){
      ui->pushButton15_11->setStyleSheet("QPushButton{background-color:green;font: 20px; border:2px solid gray;border-radius: 20px;border-style: inset;max-width:40px;max-height:40px;min-width:40px;min-height:40px;}");
                      }
                on_pushButton16_11_clicked();;

    }

            if(num == 17){ if(ui->radioButton_25->isChecked()||ui->radioButton_26->isChecked()||
                              ui->radioButton_27->isChecked()||ui->radioButton_28->isChecked()){
      ui->pushButton16_11->setStyleSheet("QPushButton{background-color:green;font: 20px; border:2px solid gray;border-radius: 20px;border-style: inset;max-width:40px;max-height:40px;min-width:40px;min-height:40px;}");
                      }
                on_pushButton17_11_clicked();;

    }


            if(num == 18){ if(ui->radioButton_25->isChecked()||ui->radioButton_26->isChecked()||
                              ui->radioButton_27->isChecked()||ui->radioButton_28->isChecked()){
      ui->pushButton17_11->setStyleSheet("QPushButton{background-color:green;font: 20px; border:2px solid gray;border-radius: 20px;border-style: inset;max-width:40px;max-height:40px;min-width:40px;min-height:40px;}");
                      }
                on_pushButton18_11_clicked();;

    }

            if(num == 19){ if(ui->radioButton_25->isChecked()||ui->radioButton_26->isChecked()||
                              ui->radioButton_27->isChecked()||ui->radioButton_28->isChecked()){
      ui->pushButton18_11->setStyleSheet("QPushButton{background-color:green;font: 20px; border:2px solid gray;border-radius: 20px;border-style: inset;max-width:40px;max-height:40px;min-width:40px;min-height:40px;}");
                      }
                on_pushButton19_11_clicked();;

    }

            if(num == 20){ if(ui->radioButton_25->isChecked()||ui->radioButton_26->isChecked()||
                              ui->radioButton_27->isChecked()||ui->radioButton_28->isChecked()){
      ui->pushButton19_11->setStyleSheet("QPushButton{background-color:green;font: 20px; border:2px solid gray;border-radius: 20px;border-style: inset;max-width:40px;max-height:40px;min-width:40px;min-height:40px;}");
                    }

                on_pushButton20_11_clicked();;

    }

            if(num == 21){ if(ui->radioButton_25->isChecked()||ui->radioButton_26->isChecked()||
                              ui->radioButton_27->isChecked()||ui->radioButton_28->isChecked()){
      ui->pushButton20_11->setStyleSheet("QPushButton{background-color:green;font: 20px; border:2px solid gray;border-radius: 20px;border-style: inset;max-width:40px;max-height:40px;min-width:40px;min-height:40px;}");
                      }
                    //ui->tabWidget->setCurrentIndex(0);
                     //on_pushButton1_11_clicked();

    }
  }

void MainCbtWindow::on_pushButton1_4_clicked()
{currNum1 =1;
    clearOptionENG();
       printQue("ENG","ENG",1);
        getUserChoiceENG();

}

void MainCbtWindow::on_pushButton2_4_clicked()
{currNum1 = 2;
    clearOptionENG();
       printQue("ENG","ENG",2);
        getUserChoiceENG();
}

void MainCbtWindow::on_pushButton3_4_clicked()
{currNum1 = 3;
    clearOptionENG();
       printQue("ENG","ENG",3);
        getUserChoiceENG();
}

void MainCbtWindow::on_pushButton4_4_clicked()
{
    clearOptionENG();
       printQue("ENG","ENG",4);
        getUserChoiceENG();
}

void MainCbtWindow::on_pushButton5_4_clicked()
{
    clearOptionENG();
       printQue("ENG","ENG",5);
        getUserChoiceENG();
}

void MainCbtWindow::on_pushButton6_4_clicked()
{
    clearOptionENG();
       printQue("ENG","ENG",6);
        getUserChoiceENG();
}

void MainCbtWindow::on_pushButton7_4_clicked()
{
    clearOptionENG();
       printQue("ENG","ENG",7);
        getUserChoiceENG();
}

void MainCbtWindow::on_pushButton8_4_clicked()
{
    clearOptionENG();
       printQue("ENG","ENG",8);
        getUserChoiceENG();
}

void MainCbtWindow::on_pushButton9_4_clicked()
{
    clearOptionENG();
       printQue("ENG","ENG",9);
        getUserChoiceENG();
}

void MainCbtWindow::on_pushButton10_4_clicked()
{
    clearOptionENG();
       printQue("ENG","ENG",10);
        getUserChoiceENG();
}

void MainCbtWindow::on_pushButton11_4_clicked()
{

    clearOptionENG();
       printQue("ENG","ENG",11);
        getUserChoiceENG();
}

void MainCbtWindow::on_pushButton12_4_clicked()
{

    clearOptionENG();
       printQue("ENG","ENG",12);
        getUserChoiceENG();
}

void MainCbtWindow::on_pushButton13_4_clicked()
{

    clearOptionENG();
       printQue("ENG","ENG",13);
        getUserChoiceENG();
}

void MainCbtWindow::on_pushButton14_4_clicked()
{

    clearOptionENG();
       printQue("ENG","ENG",14);
        getUserChoiceENG();
}

void MainCbtWindow::on_pushButton15_4_clicked()
{

    clearOptionENG();
       printQue("ENG","ENG",15);
        getUserChoiceENG();
}

void MainCbtWindow::on_pushButton16_4_clicked()
{

    clearOptionENG();
       printQue("ENG","ENG",16);
        getUserChoiceENG();
}

void MainCbtWindow::on_pushButton17_4_clicked()
{

    clearOptionENG();
       printQue("ENG","ENG",17);
        getUserChoiceENG();
}

void MainCbtWindow::on_pushButton18_4_clicked()
{

    clearOptionENG();
       printQue("ENG","ENG",18);
        getUserChoiceENG();
}

void MainCbtWindow::on_pushButton19_4_clicked()
{

    clearOptionENG();
       printQue("ENG","ENG",19);
        getUserChoiceENG();
}

void MainCbtWindow::on_pushButton20_4_clicked()
{

    clearOptionENG();
       printQue("ENG","ENG",20);
        getUserChoiceENG();
}

void MainCbtWindow::on_ENGNEXT_clicked()
{    saveAnswerENG("ENG");
     numberENG(currNum1 + 1);
      clearOptionENG();
}

void MainCbtWindow::on_pushButton1_13_clicked()
{ currNum2 = 1;
    clearOptionMATH();
       printQue("MATH","MATH",1);
        getUserChoiceMATH();
}

void MainCbtWindow::on_pushButton2_13_clicked()
{currNum2 = 2;
    clearOptionMATH();
       printQue("MATH","MATH",2);
        getUserChoiceMATH();
}

void MainCbtWindow::on_pushButton3_13_clicked()
{ currNum2 =3;
    clearOptionMATH();
       printQue("MATH","MATH",3);
        getUserChoiceMATH();
}

void MainCbtWindow::on_pushButton4_13_clicked()
{
    clearOptionMATH();
       printQue("MATH","MATH",4);
        getUserChoiceMATH();
}

void MainCbtWindow::on_pushButton5_13_clicked()
{
    clearOptionMATH();
       printQue("MATH","MATH",5);
        getUserChoiceMATH();
}

void MainCbtWindow::on_pushButton6_13_clicked()
{
    clearOptionMATH();
       printQue("MATH","MATH",6);
        getUserChoiceMATH();
}

void MainCbtWindow::on_pushButton7_13_clicked()
{
    clearOptionMATH();
       printQue("MATH","MATH",7);
        getUserChoiceMATH();
}

void MainCbtWindow::on_pushButton8_13_clicked()
{
    clearOptionMATH();
       printQue("MATH","MATH",8);
        getUserChoiceMATH();
}

void MainCbtWindow::on_pushButton9_13_clicked()
{
    clearOptionMATH();
       printQue("MATH","MATH",9);
        getUserChoiceMATH();
}

void MainCbtWindow::on_pushButton10_13_clicked()
{
    clearOptionMATH();
       printQue("MATH","MATH",10);
        getUserChoiceMATH();
}

void MainCbtWindow::on_pushButton11_13_clicked()
{
    clearOptionMATH();
       printQue("MATH","MATH",11);
        getUserChoiceMATH();
}

void MainCbtWindow::on_pushButton12_13_clicked()
{
    clearOptionMATH();
       printQue("MATH","MATH",12);
        getUserChoiceMATH();
}

void MainCbtWindow::on_pushButton13_13_clicked()
{
    clearOptionMATH();
       printQue("MATH","MATH",13);
        getUserChoiceMATH();
}

void MainCbtWindow::on_pushButton14_13_clicked()
{
    clearOptionMATH();
       printQue("MATH","MATH",14);
        getUserChoiceMATH();
}

void MainCbtWindow::on_pushButton15_13_clicked()
{
    clearOptionMATH();
       printQue("MATH","MATH",15);
        getUserChoiceMATH();
}

void MainCbtWindow::on_pushButton16_13_clicked()
{
    clearOptionMATH();
       printQue("MATH","MATH",16);
        getUserChoiceMATH();
}

void MainCbtWindow::on_pushButton17_13_clicked()
{clearOptionMATH();
    printQue("MATH","MATH",17);
     getUserChoiceMATH();

}

void MainCbtWindow::on_pushButton18_13_clicked()
{clearOptionMATH();
    printQue("MATH","MATH",18);
     getUserChoiceMATH();

}

void MainCbtWindow::on_pushButton19_13_clicked()
{
    clearOptionMATH();
       printQue("MATH","MATH",19);
        getUserChoiceMATH();
}

void MainCbtWindow::on_pushButton20_13_clicked()
{
    clearOptionMATH();
       printQue("MATH","MATH",20);
        getUserChoiceMATH();
}

void MainCbtWindow::on_MATHNEXT_clicked()
{saveAnswerMATH("MATH");
    numberMATH(currNum2 + 1);

}

void MainCbtWindow::on_pushButton1_12_clicked()
{
    clearOptionPHY();
       printQue("PHY","PHY",1);
        getUserChoicePHY();
}

void MainCbtWindow::on_pushButton2_12_clicked()
{
    clearOptionPHY();
       printQue("PHY","PHY",2);
        getUserChoicePHY();
}

void MainCbtWindow::on_pushButton3_12_clicked()
{
    clearOptionPHY();
       printQue("PHY","PHY",3);
        getUserChoicePHY();
}

void MainCbtWindow::on_pushButton4_12_clicked()
{
    clearOptionPHY();
       printQue("PHY","PHY",4);
        getUserChoicePHY();
}

void MainCbtWindow::on_pushButton5_12_clicked()
{
    clearOptionPHY();
       printQue("PHY","PHY",5);
        getUserChoicePHY();
}

void MainCbtWindow::on_pushButton6_12_clicked()
{
    clearOptionPHY();
       printQue("PHY","PHY",6);
        getUserChoicePHY();
}

void MainCbtWindow::on_pushButton7_12_clicked()
{
    clearOptionPHY();
       printQue("PHY","PHY",7);
        getUserChoicePHY();
}

void MainCbtWindow::on_pushButton8_12_clicked()
{
    clearOptionPHY();
       printQue("PHY","PHY",8);
        getUserChoicePHY();
}

void MainCbtWindow::on_pushButton9_12_clicked()
{
    clearOptionPHY();
       printQue("PHY","PHY",9);
        getUserChoicePHY();
}

void MainCbtWindow::on_pushButton10_12_clicked()
{
    clearOptionPHY();
       printQue("PHY","PHY",10);
        getUserChoicePHY();
}

void MainCbtWindow::on_pushButton11_12_clicked()
{
    clearOptionPHY();
       printQue("PHY","PHY",11);
        getUserChoicePHY();
}

void MainCbtWindow::on_pushButton12_12_clicked()
{
    clearOptionPHY();
       printQue("PHY","PHY",12);
        getUserChoicePHY();
}

void MainCbtWindow::on_pushButton13_12_clicked()
{
    clearOptionPHY();
       printQue("PHY","PHY",13);
        getUserChoicePHY();
}

void MainCbtWindow::on_pushButton14_12_clicked()
{
    clearOptionPHY();
       printQue("PHY","PHY",14);
        getUserChoicePHY();
}

void MainCbtWindow::on_pushButton15_12_clicked()
{
    clearOptionPHY();
       printQue("PHY","PHY",15);
        getUserChoicePHY();
}

void MainCbtWindow::on_pushButton16_12_clicked()
{
    clearOptionPHY();
       printQue("PHY","PHY",16);
        getUserChoicePHY();
}

void MainCbtWindow::on_pushButton17_12_clicked()
{
    clearOptionPHY();
       printQue("PHY","PHY",17);
        getUserChoicePHY();
}

void MainCbtWindow::on_pushButton18_12_clicked()
{
    clearOptionPHY();
       printQue("PHY","PHY",18);
        getUserChoicePHY();
}

void MainCbtWindow::on_pushButton19_12_clicked()
{
    clearOptionPHY();
       printQue("PHY","PHY",19);
        getUserChoicePHY();
}

void MainCbtWindow::on_pushButton20_12_clicked()
{
    clearOptionPHY();
       printQue("PHY","PHY",20);
        getUserChoicePHY();
}

void MainCbtWindow::on_PHYNEXT_clicked()
{saveAnswerPHY("PHY");
    numberPHY(currNum3 + 1);


}



void MainCbtWindow::on_CHENEXT_clicked()
{
    saveAnswerCHE("CHE");
        numberCHE(currNum4 +1);
}

void MainCbtWindow::on_pushButton1_10_clicked()
{
     ui->queNum_8->setText("1");
    clearOptionCHE();
       printQue("CHE","CHE",1);
        getUserChoiceCHE();
}

void MainCbtWindow::on_pushButton2_10_clicked()
{ui->queNum_8->setText("2");
    clearOptionCHE();
       printQue("CHE","CHE",2);
        getUserChoiceCHE();
}

void MainCbtWindow::on_pushButton3_10_clicked()
{ui->queNum_8->setText("3");
    clearOptionCHE();
       printQue("CHE","CHE",3);
        getUserChoiceCHE();
}

void MainCbtWindow::on_pushButton4_10_clicked()
{
    clearOptionCHE();
       printQue("CHE","CHE",4);
        getUserChoiceCHE();
}

void MainCbtWindow::on_pushButton5_10_clicked()
{
    clearOptionCHE();
       printQue("CHE","CHE",5);
        getUserChoiceCHE();
}

void MainCbtWindow::on_pushButton6_10_clicked()
{
    clearOptionCHE();
       printQue("CHE","CHE",6);
        getUserChoiceCHE();
}

void MainCbtWindow::on_pushButton7_10_clicked()
{
    clearOptionCHE();
       printQue("CHE","CHE",7);
        getUserChoiceCHE();
}

void MainCbtWindow::on_pushButton8_10_clicked()
{
    clearOptionCHE();
       printQue("CHE","CHE",8);
        getUserChoiceCHE();
}

void MainCbtWindow::on_pushButton9_10_clicked()
{
    clearOptionCHE();
       printQue("CHE","CHE",9);
        getUserChoiceCHE();
}

void MainCbtWindow::on_pushButton10_10_clicked()
{
    clearOptionCHE();
       printQue("CHE","CHE",10);
        getUserChoiceCHE();
}

void MainCbtWindow::on_pushButton11_10_clicked()
{
    clearOptionCHE();
       printQue("CHE","CHE",11);
        getUserChoiceCHE();
}

void MainCbtWindow::on_pushButton12_10_clicked()
{
    clearOptionCHE();
       printQue("CHE","CHE",12);
        getUserChoiceCHE();
}

void MainCbtWindow::on_pushButton13_10_clicked()
{
    clearOptionCHE();
       printQue("CHE","CHE",13);
        getUserChoiceCHE();
}

void MainCbtWindow::on_pushButton14_10_clicked()
{
    clearOptionCHE();
       printQue("CHE","CHE",14);
        getUserChoiceCHE();
}

void MainCbtWindow::on_pushButton15_10_clicked()
{ clearOptionCHE();
    printQue("CHE","CHE",15);
     getUserChoiceCHE();

}

void MainCbtWindow::on_pushButton16_10_clicked()
{ clearOptionCHE();
    printQue("CHE","CHE",16);
     getUserChoiceCHE();

}

void MainCbtWindow::on_pushButton17_10_clicked()
{
    clearOptionCHE();
       printQue("CHE","CHE",17);
        getUserChoiceCHE();
}

void MainCbtWindow::on_pushButton18_10_clicked()
{
    clearOptionCHE();
       printQue("CHE","CHE",18);
        getUserChoiceCHE();
}

void MainCbtWindow::on_pushButton19_10_clicked()
{ clearOptionCHE();
    printQue("CHE","CHE",19);
     getUserChoiceCHE();

}

void MainCbtWindow::on_pushButton20_10_clicked()
{ clearOptionCHE();
    printQue("CHE","CHE",20);
     getUserChoiceCHE();

}

void MainCbtWindow::on_pushButton1_11_clicked()
{
    clearOptionBIO();
       printQue("BIO","BIO",1);
        getUserChoiceBIO();
}

void MainCbtWindow::on_pushButton2_11_clicked()
{
    clearOptionBIO();
       printQue("BIO","BIO",2);
        getUserChoiceBIO();
}

void MainCbtWindow::on_pushButton3_11_clicked()
{
    clearOptionBIO();
       printQue("BIO","BIO",3);
        getUserChoiceBIO();
}

void MainCbtWindow::on_pushButton4_11_clicked()
{
    clearOptionBIO();
       printQue("BIO","BIO",4);
        getUserChoiceBIO();
}

void MainCbtWindow::on_pushButton5_11_clicked()
{
    clearOptionBIO();
       printQue("BIO","BIO",5);
        getUserChoiceBIO();
}

void MainCbtWindow::on_pushButton6_11_clicked()
{
    clearOptionBIO();
       printQue("BIO","BIO",6);
        getUserChoiceBIO();
}

void MainCbtWindow::on_pushButton7_11_clicked()
{
    clearOptionBIO();
       printQue("BIO","BIO",7);
        getUserChoiceBIO();
}

void MainCbtWindow::on_pushButton8_11_clicked()
{clearOptionBIO();
    printQue("BIO","BIO",8);
     getUserChoiceBIO();

}

void MainCbtWindow::on_pushButton9_11_clicked()
{clearOptionBIO();
    printQue("BIO","BIO",9);
     getUserChoiceBIO();

}

void MainCbtWindow::on_pushButton10_11_clicked()
{clearOptionBIO();
    printQue("BIO","BIO",10);
     getUserChoiceBIO();

}

void MainCbtWindow::on_pushButton11_11_clicked()
{
    clearOptionBIO();
       printQue("BIO","BIO",11);
        getUserChoiceBIO();
}

void MainCbtWindow::on_pushButton12_11_clicked()
{
    clearOptionBIO();
       printQue("BIO","BIO",12);
        getUserChoiceBIO();
}

void MainCbtWindow::on_pushButton13_11_clicked()
{
    clearOptionBIO();
       printQue("BIO","BIO",13);
        getUserChoiceBIO();
}

void MainCbtWindow::on_pushButton14_11_clicked()
{clearOptionBIO();
    printQue("BIO","BIO",14);
     getUserChoiceBIO();

}

void MainCbtWindow::on_pushButton15_11_clicked()
{clearOptionBIO();
    printQue("BIO","BIO",15);
     getUserChoiceBIO();

}

void MainCbtWindow::on_pushButton16_11_clicked()
{
    clearOptionBIO();
       printQue("BIO","BIO",16);
        getUserChoiceBIO();
}

void MainCbtWindow::on_pushButton17_11_clicked()
{clearOptionBIO();
    printQue("BIO","BIO",17);
     getUserChoiceBIO();

}

void MainCbtWindow::on_pushButton18_11_clicked()
{
    clearOptionBIO();
       printQue("BIO","BIO",18);
        getUserChoiceBIO();
}

void MainCbtWindow::on_pushButton19_11_clicked()
{
    clearOptionBIO();
       printQue("BIO","BIO",19);
        getUserChoiceBIO();
}

void MainCbtWindow::on_pushButton20_11_clicked()
{
    clearOptionBIO();
       printQue("BIO","BIO",20);
        getUserChoiceBIO();
}
void MainCbtWindow::on_BIONEXT_clicked()
{saveAnswerBIO("BIO");
    numberBIO(currNum5 + 1);


}



void MainCbtWindow::collateResult(){

    int sumENG = 0, sumMATH=0, sumPHY =0,sumCHE =0, sumBIO = 0;

     for(int p = 1;p<=20;p++){
         sumENG = getResultENG(2,p).toInt() + sumENG;
         sumMATH = getResultMATH(2,p).toInt() + sumMATH;
         sumPHY = getResultPHY(2,p).toInt() + sumPHY;

         sumCHE = getResultCHE(2,p).toInt() + sumCHE;
         sumBIO = getResultBIO(2,p).toInt() + sumBIO;

     }
     sum = (sumENG) + (sumMATH) + (sumPHY)  + (sumCHE) + (sumBIO);


     QFile fileh("C:/SUB/files/system/sling/file/datafile/result/"+getInformationTxtInfo(1)+".dpt");
     fileh.open(QFile::WriteOnly | QFile::Append);
    QTextStream outh(&fileh);
        outh<<(sumENG)<<"\r\n";
        outh<<(sumMATH)<<"\r\n";
        outh<<(sumPHY)<<"\r\n";

        outh<<(sumCHE)<<"\r\n";
         outh<<(sumBIO)<<"\r\n";

        outh<<sum<<"\r\n";
    fileh.flush();
     fileh.close();

     QFile file("C:/SUB/files/system/sling/file/datafile/result.dpt");
     file.open(QFile::WriteOnly | QFile::Append);
    QTextStream out(&file);
        out<<sum<<"\r\n";
    file.flush();
     file.close();

     QFile file2("C:/SUB/files/system/sling/file/datafile/time.dpt");
     file2.open(QFile::WriteOnly | QFile::Append);
    QTextStream in(&file2);
        in<<QDate::currentDate().toString() +"  "+QTime::currentTime().toString()<<"\r\n";
    file2.flush();
     file2.close();


     QString num;
     QFile file26("C:/SUB/files/system/sling/file/datafile/NumResult.dpt");
                      file26.open(QFile::ReadOnly | QFile::Text);
                      QTextStream outU6(&file26);
                                   num = outU6.readAll();   //the index here only stores the value of the extracted text
                                      file26.close();

     QFile file22("C:/SUB/files/system/sling/file/datafile/NumResult.dpt");
                      file22.open(QFile::WriteOnly | QFile::Text);
                      QTextStream outU1(&file22);
                      outU1<<num.toInt()+1;
                                       file22.flush();
                                      file22.close();
                                      QFile filesd("C:/SUB/files/system/sling/file/GENERALRESULT.csv");
                                          if(!filesd.open(QFile::WriteOnly|QFile::Append)){
                                              QMessageBox::warning(this, "WARNING", "Error 200.\nFailed to write data. Contact Technical personnel for help");
                                          }
                                          QTextStream outsd(&filesd);
                                          outsd<<getInformationTxtInfo(1)<<","<<"\t\t"<<getInformationTxtInfo(2)<<","<<"\t\t"<<getInformationTxtInfo(3)<<","<<"\t\t"<<getInformationTxtInfo(4)<<","<<"\t\t"<<"ENG("<<sumENG<<")"<<","<<"\t\t"
                                             <<"MATH("<<sumMATH<<")"<<","<<"\t\t"<<"PHY("<<sumPHY<<")"<<","<<"\t\t"<<"CHE("<<sumCHE<<")"<<","<<"\t\t"<<"BIO("<<sumBIO<<")"<<","<<"\t\t"<<sum;
                                          outsd<<"\n";

                                          filesd.flush();
                                          filesd.close();


                                          QFile ENG("C:/SUB/files/system/sling/file/ENG.csv");
                                              if(!ENG.open(QFile::WriteOnly|QFile::Append)){
                                                  QMessageBox::warning(this, "WARNING", "Error 200.\nFailed to write data. Contact Technical personnel for help");
                                              }
                                              QTextStream ENGa(&ENG);
                                              ENGa<<getInformationTxtInfo(1)<<","<<"\t\t"<<getInformationTxtInfo(2)<<","<<"\t\t"<<getInformationTxtInfo(3)<<","<<"\t\t"<<getInformationTxtInfo(4)<<","<<"\t\t"<<getInformationTxtInfo(5)<<","<<"\t\t"<<sumENG;
                                              ENGa<<"\n";

                                              ENG.flush();
                                              ENG.close();

                                              QFile MATH("C:/SUB/files/system/sling/file/MATH.csv");
                                                  if(!MATH.open(QFile::WriteOnly|QFile::Append)){
                                                      QMessageBox::warning(this, "WARNING", "Error 200.\nFailed to write data. Contact Technical personnel for help");
                                                  }
                                                  QTextStream MATHa(&MATH);
                                                  MATHa<<getInformationTxtInfo(1)<<","<<"\t\t"<<getInformationTxtInfo(2)<<","<<"\t\t"<<getInformationTxtInfo(3)<<","<<"\t\t"<<getInformationTxtInfo(4)<<","<<"\t\t"<<getInformationTxtInfo(5)<<","<<"\t\t"<<sumMATH;
                                                  MATHa<<"\n";

                                                  MATH.flush();
                                                  MATH.close();

                                                  QFile PHY("C:/SUB/files/system/sling/file/PHY.csv");
                                                      if(!PHY.open(QFile::WriteOnly|QFile::Append)){
                                                          QMessageBox::warning(this, "WARNING", "Error 200.\nFailed to write data. Contact Technical personnel for help");
                                                      }
                                                      QTextStream PHYa(&PHY);
                                                      PHYa<<getInformationTxtInfo(1)<<","<<"\t\t"<<getInformationTxtInfo(2)<<","<<"\t\t"<<getInformationTxtInfo(3)<<","<<"\t\t"<<getInformationTxtInfo(4)<<","<<"\t\t"<<getInformationTxtInfo(5)<<","<<"\t\t"<<sumPHY;
                                                      PHYa<<"\n";

                                                      PHY.flush();
                                                      PHY.close();

                                                      QFile CHE("C:/SUB/files/system/sling/file/CHE.csv");
                                                          if(!CHE.open(QFile::WriteOnly|QFile::Append)){
                                                              QMessageBox::warning(this, "WARNING", "Error 200.\nFailed to write data. Contact Technical personnel for help");
                                                          }
                                                          QTextStream CHEa(&CHE);
                                                          CHEa<<getInformationTxtInfo(1)<<","<<"\t\t"<<getInformationTxtInfo(2)<<","<<"\t\t"<<getInformationTxtInfo(3)<<","<<"\t\t"<<getInformationTxtInfo(4)<<","<<"\t\t"<<getInformationTxtInfo(5)<<","<<"\t\t"<<sumCHE;
                                                          CHEa<<"\n";

                                                          CHE.flush();
                                                          CHE.close();

                                                          QFile BIO("C:/SUB/files/system/sling/file/BIO.csv");
                                                              if(!BIO.open(QFile::WriteOnly|QFile::Append)){
                                                                  QMessageBox::warning(this, "WARNING", "Error 200.\nFailed to write data. Contact Technical personnel for help");
                                                              }
                                                              QTextStream BIOa(&BIO);
                                                              BIOa<<getInformationTxtInfo(1)<<","<<"\t\t"<<getInformationTxtInfo(2)<<","<<"\t\t"<<getInformationTxtInfo(3)<<","<<"\t\t"<<getInformationTxtInfo(4)<<","<<"\t\t"<<getInformationTxtInfo(5)<<","<<"\t\t"<<sumBIO;
                                                              BIOa<<"\n";

                                                              BIO.flush();
                                                              BIO.close();


                                          QFile file1("C:/SUB/files/system/sling/file/current/current.dpt");
                                          file1.open(QFile::WriteOnly | QFile::Text);
                                         QTextStream in1(&file1);
                                             in1<<"";
                                         file1.flush();
                                          file1.close();
}
QString MainCbtWindow::correctAnswer(QString subMain, int num){
    QString information;
    QFile file("C:/DLCF CBTest/files/"+subMain+"/"+QString::number(num)+".dpt");
    int x ;
    x = 7;
    file.open(QFile::ReadOnly | QFile::Text);
    QTextStream in(&file);
    QString line[x];   //the index of this array is the line of the text you want to extract
    for(int i = 1;i<=x;i++){
             line[0] = in.readLine();   //the index here only stores the value of the extracted text
            information = line[0]; //prints out the extracted text

    }
    file.close();
    return information;
}
void MainCbtWindow::detailedRecord(){


    QFile file3("C:/SUB/files/system/sling/file/DetailedResult/"+getInformationTxtInfo(2)+"_"+getInformationTxtInfo(3)+".csv");
        if(!file3.open(QFile::WriteOnly|QFile::Append)){
            QMessageBox::warning(this, "WARNING", "Error 202.\nFailed to write data. Contact Technical personnel for help");
        }

        QTextStream out3(&file3);
        out3<<"DLCF FUTA SUB 2019 RESULT";
        out3<<"\n";
        out3<<"SERIAL NO"<<","<<"\t"<<getInformationTxtInfo(1);
        out3<<"\n";
        out3<<"SURNAME"<<","<<"\t"<<getInformationTxtInfo(2);
        out3<<"\n";
        out3<<"OTHER NAMES"<<","<<"\t"<<getInformationTxtInfo(3);
        out3<<"\n";
        out3<<"DATE CONDUCTED"<<QDate::currentDate().toString() +"  "+QTime::currentTime().toString();
        out3<<"\n";
        out3<<"\n";
        out3<<"\n";
        out3<<"SCORE:"<<sum;
        out3<<"\n";
        out3<<"\n";
        out3<<"SCORE BREAKDOWN";
        out3<<"\n";
        out3<<"SUB1O1";
        out3<<"\n";
        out3<<"QUESTION"<<","<<"\t"<<"USER INPUT"<<","<<"\t"<<"CORRECT ANSWER"<<","<<"\t"<<"POINT";
        out3<<"\n";
        file3.flush();
        file3.close();
    QString mathInput, mathscore, mathCorrect;
    for(int i =1;i<=20;i++){
      mathInput = getResultENG(1,i);
      mathscore = getResultENG(2,i);
      mathCorrect = correctAnswer("ENG",i);


        QFile file3("C:/SUB/files/system/sling/file/DetailedResult/"+getInformationTxtInfo(2)+"_"+getInformationTxtInfo(3)+".csv");
            if(!file3.open(QFile::WriteOnly|QFile::Append)){
                QMessageBox::warning(this, "WARNING", "Error 202.\nFailed to write data. Contact Technical personnel for help");
            }
            QTextStream out3(&file3);
            out3<<i<<","<<"\t"<<mathInput<<","<<"\t"<<mathCorrect<<","<<"\t"<<mathscore;
            out3<<"\n\n";
            file3.flush();
            file3.close();
        }

    QString engInput,engscore,engCorrect;
    QFile file3A("C:/SUB/files/system/sling/file/DetailedResult/"+getInformationTxtInfo(2)+"_"+getInformationTxtInfo(3)+".csv");
        if(!file3A.open(QFile::WriteOnly|QFile::Append)){
            QMessageBox::warning(this, "WARNING", "Error 202.\nFailed to write data. Contact Technical personnel for help");
        }
        QTextStream out3A(&file3A);
        out3A<<"MATH";
        out3A<<"\n";
        out3A<<"QUESTION"<<","<<"\t"<<"USER INPUT"<<","<<"\t"<<"CORRECT ANSWER"<<","<<"\t"<<"POINT";
        out3A<<"\n";
        file3A.flush();
        file3A.close();

    for(int i =1;i<=20;i++){
      engInput = getResultMATH(1,i);
      engscore = getResultMATH(2,i);
      engCorrect = correctAnswer("MATH",i);


        QFile file3A("C:/SUB/files/system/sling/file/DetailedResult/"+getInformationTxtInfo(2)+"_"+getInformationTxtInfo(3)+".csv");
            if(!file3A.open(QFile::WriteOnly|QFile::Append)){
                QMessageBox::warning(this, "WARNING", "Error 202.\nFailed to write data. Contact Technical personnel for help");
            }
            QTextStream out3A(&file3A);
            out3A<<i<<","<<"\t"<<engInput<<","<<"\t"<<engCorrect<<","<<"\t"<<engscore;
            out3A<<"\n\n";
            file3A.flush();
            file3A.close();
        }


    QString cheInput,chescore,cheCorrect;
    QFile file3E("C:/SUB/files/system/sling/file/DetailedResult/"+getInformationTxtInfo(2)+"_"+getInformationTxtInfo(3)+".csv");
        if(!file3E.open(QFile::WriteOnly|QFile::Append)){
            QMessageBox::warning(this, "WARNING", "Error 202.\nFailed to write data. Contact Technical personnel for help");
        }
        QTextStream out3E(&file3E);
        out3E<<"PHY";
        out3E<<"\n";
        out3E<<"QUESTION"<<","<<"\t"<<"USER INPUT"<<","<<"\t"<<"CORRECT ANSWER"<<","<<"\t"<<"POINT";
        out3E<<"\n";
        file3E.flush();
        file3E.close();

    for(int i =1;i<=20;i++){
      cheInput = getResultPHY(1,i);
      chescore = getResultPHY(2,i);
      cheCorrect = correctAnswer("PHY",i);


        QFile file3E("C:/SUB/files/system/sling/file/DetailedResult/"+getInformationTxtInfo(2)+"_"+getInformationTxtInfo(3)+".csv");
            if(!file3E.open(QFile::WriteOnly|QFile::Append)){
                QMessageBox::warning(this, "WARNING", "Error 202.\nFailed to write data. Contact Technical personnel for help");
            }
            QTextStream out3E(&file3E);
            out3E<<i<<","<<"\t"<<cheInput<<","<<"\t"<<cheCorrect<<","<<"\t"<<chescore;
            out3E<<"\n\n";
            file3E.flush();
            file3E.close();
        }

    QString bioInput,bioscore,bioCorrect;
    QFile file3D("C:/SUB/files/system/sling/file/DetailedResult/"+getInformationTxtInfo(2)+"_"+getInformationTxtInfo(3)+".csv");
        if(!file3D.open(QFile::WriteOnly|QFile::Append)){
            QMessageBox::warning(this, "WARNING", "Error 202.\nFailed to write data. Contact Technical personnel for help");
        }
        QTextStream out3D(&file3D);
        out3D<<"CHE";
        out3D<<"\n";
        out3D<<"QUESTION"<<","<<"\t"<<"USER INPUT"<<","<<"\t"<<"CORRECT ANSWER"<<","<<"\t"<<"POINT";
        out3D<<"\n";
        file3D.flush();
        file3D.close();

    for(int i =1;i<=20;i++){
      bioInput = getResultCHE(1,i);
      bioscore = getResultCHE(2,i);
      bioCorrect = correctAnswer("CHE",i);


        QFile file3D("C:/SUB/files/system/sling/file/DetailedResult/"+getInformationTxtInfo(2)+"_"+getInformationTxtInfo(3)+".csv");
            if(!file3D.open(QFile::WriteOnly|QFile::Append)){
                QMessageBox::warning(this, "WARNING", "Error 202.\nFailed to write data. Contact Technical personnel for help");
            }
            QTextStream out3D(&file3D);
            out3D<<i<<","<<"\t"<<bioInput<<","<<"\t"<<bioCorrect<<","<<"\t"<<bioscore;
            out3D<<"\n\n";
            file3D.flush();
            file3D.close();
        }

    QString logInput,logscore,logCorrect;
    QFile file5d("C:/SUB/files/system/sling/file/DetailedResult/"+getInformationTxtInfo(2)+"_"+getInformationTxtInfo(3)+".csv");
        if(!file5d.open(QFile::WriteOnly|QFile::Append)){
            QMessageBox::warning(this, "WARNING", "Error 202.\nFailed to write data. Contact Technical personnel for help");
        }
        QTextStream out5d(&file5d);
        out5d<<"BIO";
        out5d<<"\n";
        out5d<<"QUESTION"<<","<<"\t"<<"USER INPUT"<<","<<"\t"<<"CORRECT ANSWER"<<","<<"\t"<<"POINT";
        out5d<<"\n";
        file5d.flush();
        file5d.close();

    for(int i =1;i<=20;i++){
      logInput = getResultBIO(1,i);
      logscore = getResultBIO(2,i);
      logCorrect = correctAnswer("BIO",i);


        QFile file5d("C:/SUB/files/system/sling/file/DetailedResult/"+getInformationTxtInfo(2)+"_"+getInformationTxtInfo(3)+".csv");
            if(!file5d.open(QFile::WriteOnly|QFile::Append)){
                QMessageBox::warning(this, "WARNING", "Error 202.\nFailed to write data. Contact Technical personnel for help");
            }
            QTextStream out5d(&file5d);
            out5d<<i<<","<<"\t"<<logInput<<","<<"\t"<<logCorrect<<","<<"\t"<<logscore;
            out5d<<"\n\n";
            file5d.flush();
            file5d.close();
        }



}


void MainCbtWindow::on_submit_clicked()
{
    QMessageBox::StandardButton reply = QMessageBox::warning(this,"Alert","ARE YOU SURE YOU WANT TO SUBMIT?",
                                                             QMessageBox::Yes |QMessageBox::No);
    if(reply == QMessageBox::Yes){
        timer->stop();
        timer->destroyed();
 QFile file8g("C:/SUB/files/system/sling/file/submit/" + getInformationTxtInfo(4) + ".dpt");
 if(!file8g.open(QFile::WriteOnly | QFile::Text)){
     QMessageBox::warning(this, "WARNING", "Error 200.\nFailed to write data. Contact Technical personnel for help");
 }
 QTextStream out8g(&file8g);

 out8g<<"1";
 file8g.flush();
 file8g.close();

collateResult();
detailedRecord();

        hide();


         peresult1 = new peresult(this);
          peresult1->show();

            }
}
QString MainCbtWindow::getResultCHE(int x, int k){
    QString information;

    QFile file("C:/SUB/files/system/sling/file/testcurrent/Answer/CHE/" + QString::number(k) +".dpt");
    file.open(QFile::ReadOnly | QFile::Text);
   QTextStream in(&file);
    QString line[x];   //the index of this array is the line of the text you want to extract
    for(int i = 1;i<=x;i++){
             line[0] = in.readLine();   //the index here only stores the value of the extracted text
            information = line[0]; //prints out the extracted text

    }

    file.close();

    return information;
}
QString MainCbtWindow::getResultBIO(int x, int k){
    QString information;

    QFile file("C:/SUB/files/system/sling/file/testcurrent/Answer/BIO/" + QString::number(k) +".dpt");
    file.open(QFile::ReadOnly | QFile::Text);
   QTextStream in(&file);
    QString line[x];   //the index of this array is the line of the text you want to extract
    for(int i = 1;i<=x;i++){
             line[0] = in.readLine();   //the index here only stores the value of the extracted text
            information = line[0]; //prints out the extracted text

    }

    file.close();

    return information;
}
QString MainCbtWindow::getResultMATH(int x, int k){
    QString information;

    QFile file("C:/SUB/files/system/sling/file/testcurrent/Answer/MATH/" + QString::number(k) +".dpt");
    file.open(QFile::ReadOnly | QFile::Text);
   QTextStream in(&file);
    QString line[x];   //the index of this array is the line of the text you want to extract
    for(int i = 1;i<=x;i++){
             line[0] = in.readLine();   //the index here only stores the value of the extracted text
            information = line[0]; //prints out the extracted text

    }

    file.close();

    return information;
}
QString MainCbtWindow::getResultPHY(int x, int k){
    QString information;

    QFile file("C:/SUB/files/system/sling/file/testcurrent/Answer/PHY/" + QString::number(k) +".dpt");
    file.open(QFile::ReadOnly | QFile::Text);
   QTextStream in(&file);
    QString line[x];   //the index of this array is the line of the text you want to extract
    for(int i = 1;i<=x;i++){
             line[0] = in.readLine();   //the index here only stores the value of the extracted text
            information = line[0]; //prints out the extracted text

    }

    file.close();

    return information;
}

QString MainCbtWindow::getResultENG(int x, int k){
    QString information;

    QFile file("C:/SUB/files/system/sling/file/testcurrent/Answer/ENG/" + QString::number(k) +".dpt");
    file.open(QFile::ReadOnly | QFile::Text);
   QTextStream in(&file);
    QString line[x];   //the index of this array is the line of the text you want to extract
    for(int i = 1;i<=x;i++){
             line[0] = in.readLine();   //the index here only stores the value of the extracted text
            information = line[0]; //prints out the extracted text

    }

    file.close();

    return information;
}



