#include "logindialog.h"
#include "ui_logindialog.h"
#include<QFile>
#include<QTextStream>
#include <QMessageBox>
#include<QFileDialog>
#include<QTime>
#include <QDateTime>
QString otherNames, surname;int NumRegister;
LoginDialog::LoginDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::LoginDialog)
{
    ui->setupUi(this);
    ui->label_5->setVisible(false);
    ui->label_6->setVisible(false);
    ui->pushButton->setVisible(false);
   // QString center[6];
     //  center[0] = "Apatapiti";center[1] = "Ibule";center[2]="Footprints";center[3]= "Ilara";center[4]="NorthGate";center[5]="Alejolowo";
       //for(int i = 0;i<6;i++){
     //  ui->comboBox->addItem(center[i]);}
      // QString unit[10];
        //  unit[0] = "Prayer";unit[1] = "Choir";unit[2]="Evangelism & FollowUp";unit[3]= "GPT";unit[4]="Ushering";unit[5]="Colporteur";unit[6]="Library";unit[7]="Maintenance";unit[8]="Secretariat";unit[9]="Youth";
          //for(int i = 0;i<10;i++){
          //ui->comboBox_2->addItem(unit[i]);}
    QDir pcurrent("C:/SUB/files/system/sling/file/current");
    QDir pdateregister("C:/SUB/files/system/sling/file/dateregister");

     QDir pother("C:/SUB/files/system/sling/file/other");

    QDir pcenter("C:/SUB/files/system/sling/file/center");
     QDir punit("C:/SUB/files/system/sling/file/unit");
      QDir psurname("C:/SUB/files/system/sling/file/surname");

    QDir pphone("C:/SUB/files/system/sling/file/phone");

    QDir ptestcurrentm("C:/SUB/files/system/sling/file/testcurrent/userAnswerMcq");
    QDir ptestcurrentg("C:/SUB/files/system/sling/file/testcurrent/userAnswerGct");
    QDir putme("C:/SUB/files/system/sling/file/utme");
     QDir submit("C:/SUB/files/system/sling/file/submit");
      QDir left("C:/SUB/files/system/sling/file/left");
    QDir psub1("C:/SUB/files/system/sling/file/testcurrent/Answer/ENG");
    QDir psub2("C:/SUB/files/system/sling/file/testcurrent/Answer/MATH");
    QDir psub3("C:/SUB/files/system/sling/file/testcurrent/Answer/PHY");
    QDir psub4("C:/SUB/files/system/sling/file/testcurrent/Answer/CHE");
    QDir psub5("C:/SUB/files/system/sling/file/testcurrent/Answer/BIO");
    QDir pDetailedResult("C:/SUB/files/system/sling/file/DetailedResult");
    QDir pdatafile("C:/SUB/files/system/sling/file/datafile/result");

   QDir path2("C:/SUB/files/data/biodata");
   QDir path3("C:/SUB/files/en/sling/file");
   if((!left.exists())){
       left.mkpath("C:/SUB/files/system/sling/file/left");
   }
   if((!submit.exists())){
       submit.mkpath("C:/SUB/files/system/sling/file/submit");
   }
   if((!ptestcurrentg.exists())){
       ptestcurrentg.mkpath("C:/SUB/files/system/sling/file/testcurrent/userAnswerGct");
   }
   if((!pDetailedResult.exists())){
       pDetailedResult.mkpath("C:/SUB/files/system/sling/file/DetailedResult");
   }
   if((!ptestcurrentm.exists())){
       ptestcurrentm.mkpath("C:/SUB/files/system/sling/file/testcurrent/userAnswerMcq");
   }
   if((!psub1.exists())){
       psub1.mkpath("C:/SUB/files/system/sling/file/testcurrent/Answer/ENG");

   }
   if((!psub2.exists())){
       psub2.mkpath("C:/SUB/files/system/sling/file/testcurrent/Answer/MATH");
   }
   if((!psub3.exists())){
       psub3.mkpath("C:/SUB/files/system/sling/file/testcurrent/Answer/PHY");
   }
   if((!psub4.exists())){
       psub4.mkpath("C:/SUB/files/system/sling/file/testcurrent/Answer/CHE");
   }
   if((!psub5.exists())){
       psub5.mkpath("C:/SUB/files/system/sling/file/testcurrent/Answer/BIO");
   }


   if((!pcurrent.exists())){
       pcurrent.mkpath("C:/SUB/files/system/sling/file/current");
   }
   if((!pdateregister.exists())){
       pdateregister.mkpath("C:/SUB/files/system/sling/file/dateregister");
   }


   if((!psurname.exists())){
       psurname.mkpath("C:/SUB/files/system/sling/file/surname");
   }
   if((!punit.exists())){
       punit.mkpath("C:/SUB/files/system/sling/file/unit");
   }
   if((!pcenter.exists())){
       pcenter.mkpath("C:/SUB/files/system/sling/file/center");
   }

   if((!pphone.exists())){
       pphone.mkpath("C:/SUB/files/system/sling/file/phone");
   }

   if((!pdatafile.exists())){
       pdatafile.mkpath("C:/SUB/files/system/sling/file/datafile/result");
   }
       QFile file2("C:/SUB/files/system/sling/file/datafile/NumResult.dpt");

       if(!file2.open(QFile::ReadOnly | QFile::Text)){

           file2.open(QFile::WriteOnly | QFile::Text);
            QTextStream in2(&file2);
            in2<<"0";
          file2.flush();
           file2.close();
       }

       QFile file("C:/SUB/files/system/sling/file/datafile/Registered.dpt");
       if(!file.open(QFile::ReadOnly | QFile::Text)){
           file.open(QFile::WriteOnly | QFile::Text);
            QTextStream in(&file);
            in<<"0";
          file.flush();
           file.close();
       }


    if((!putme.exists())){
       putme.mkpath("C:/SUB/files/system/sling/file/utme");
   }
   if((!path2.exists())){
           path2.mkpath("C:/SUB/files/data/biodata");
       }
   if((!path3.exists())){
           path3.mkpath("C:/SUB/files/en/sling/file");
       }

}

LoginDialog::~LoginDialog()
{
    delete ui;
}

void LoginDialog::on_pushButton_2_clicked()
{
ui->label_6->setVisible(false);
ui->label_5->setVisible(false);
QString phone;
    otherNames = ui->lineEdit->text().toUpper();
    surname = ui->lineEdit_2->text().toUpper();
    phone = ui->lineEdit_3->text().toUpper();
    QString read_phone,submit;
    QFile fileh("C:/SUB/files/system/sling/file/phone/" +phone + ".dpt");
    fileh.open(QFile::ReadOnly | QFile::Text);
    QTextStream in(&fileh);
    QString line[1];   //the index of this array is the line of the text you want to extract
    for(int i = 1;i<=1;i++){
             line[0] = in.readLine();   //the index here only stores the value of the extracted text
            read_phone = line[0]; //prints out the extracted text

}
    fileh.close();
    QString information;
    if(surname.isEmpty()|| otherNames.isEmpty() || phone.isEmpty()){
        ui->label_5->setVisible(true);
    }
    else{

if(read_phone == phone){

    QFile fileeh("C:/SUB/files/system/sling/file/submit/" +phone + ".dpt");
    fileeh.open(QFile::ReadOnly | QFile::Text);
    QTextStream ine(&fileeh);
    QString linee[1];   //the index of this array is the line of the text you want to extract
    for(int i = 1;i<=1;i++){
             linee[0] = ine.readLine();   //the index here only stores the value of the extracted text
            submit = linee[0]; //prints out the extracted text
}
    fileeh.close();
    if(submit == "1"){
        //You can't login
        ui->label_6->setVisible(true);

    }else{
    hide();
    profileDialog = new ProfileDialog(this);
    profileDialog->show();}
}else{

    QFile fileer("C:/DLCF CBTest/SUB/files/system/sling/file/datafile/Registered.dpt");
    fileer.open(QFile::ReadOnly | QFile::Text);

    QTextStream iner(&fileer);
                     information = iner.readAll();   //the index here only stores the value of the extracted text
    fileer.close();

NumRegister = information.toInt();
 NumRegister = NumRegister + 1;
 QFile file8g("C:/DLCF CBTest/SUB/files/system/sling/file/datafile/Registered.dpt");
     if(!file8g.open(QFile::WriteOnly | QFile::Text)){
         QMessageBox::warning(this, "WARNING", "Error 200.\nFailed to write data. Contact Technical personnel for help");
     }
     QTextStream out8g(&file8g);

     out8g<<NumRegister;
     file8g.flush();
     file8g.close();

    QFile file9("C:/DLCF CBTest/SUB/files/system/sling/file/other/" + QString::number(NumRegister) + ".dpt");
    file9.open(QFile::WriteOnly | QFile::Text);
    QTextStream outP(&file9);
                 outP<<otherNames;   //the index here only stores the value of the extracted text
    file9.close();

    QFile file10("C:/DLCF CBTest/SUB/files/system/sling/file/surname/" + QString::number(NumRegister) + ".dpt");
    file10.open(QFile::WriteOnly | QFile::Text);

    QTextStream outU(&file10);
                 outU<<surname;   //the index here only stores the value of the extracted text
    file10.close();
    QFile file14("C:/DLCF CBTest/SUB/files/system/sling/file/center/" + QString::number(NumRegister) + ".dpt");
    file14.open(QFile::WriteOnly | QFile::Text);

    QTextStream outW(&file14);
                 outW<<phone;   //the index here only stores the value of the extracted text
    file14.close();

    QFile filee14("C:/SUB/files/system/sling/file/left/" +phone + ".dpt");
    filee14.open(QFile::WriteOnly | QFile::Text);

    QTextStream outWe(&filee14);
                 outWe<<"90";   //the index here only stores the value of the extracted text
    filee14.close();

    QFile fiee14("C:/SUB/files/system/sling/file/submit/" +phone + ".dpt");
    fiee14.open(QFile::WriteOnly | QFile::Text);

    QTextStream ouWe(&fiee14);
                 ouWe<<"0";   //the index here only stores the value of the extracted text
    fiee14.close();

    QFile file17("C:/SUB/files/system/sling/file/phone/" +phone + ".dpt");
    file17.open(QFile::WriteOnly | QFile::Text);

    QTextStream outi(&file17);
                 outi<<phone;   //the index here only stores the value of the extracted text
    file17.close();

    QFile file8("C:/DLCF CBTest/SUB/files/system/sling/file/current/current.dpt");
        if(!file8.open(QFile::WriteOnly | QFile::Text)){
            QMessageBox::warning(this, "WARNING", "Error 200.\nFailed to write data. Contact Technical personnel for help");
        }
        QTextStream out8(&file8);

        out8<<NumRegister<<"\n";
        out8<<surname<<"\n";
        out8<<otherNames<<"\n";
        out8<<phone<<"\n";
        out8<<"0"<<"\n";
        out8<<"90\n";
        file8.flush();
        file8.close();

        for(int t =1;t<=20;t++){
            QFile file("C:/SUB/files/system/sling/file/testcurrent/Answer/ENG/"+ QString::number(t) +".dpt");
            file.open(QFile::WriteOnly | QFile::Text);
           QTextStream in(&file);
               in<<"";
           file.flush();
            file.close();

            QFile file1("C:/SUB/files/system/sling/file/testcurrent/Answer/MATH/"+ QString::number(t) +".dpt");
            file1.open(QFile::WriteOnly | QFile::Text);
           QTextStream in1(&file1);
               in1<<"";
           file1.flush();
            file1.close();

            QFile file3("C:/SUB/files/system/sling/file/testcurrent/Answer/PHY/"+ QString::number(t) +".dpt");
            file3.open(QFile::WriteOnly | QFile::Text);
           QTextStream in3(&file3);
               in3<<"";
           file3.flush();
            file3.close();

            QFile file4("C:/SUB/files/system/sling/file/testcurrent/Answer/CHE/"+ QString::number(t) +".dpt");
            file4.open(QFile::WriteOnly | QFile::Text);
           QTextStream in4(&file4);
               in4<<"";
           file4.flush();
            file4.close();


        QFile file5("C:/SUB/files/system/sling/file/testcurrent/Answer/BIO/"+ QString::number(t) +".dpt");
        file5.open(QFile::WriteOnly | QFile::Text);
       QTextStream in5(&file5);
           in5<<"";
       file5.flush();
        file5.close();

     }
        QFile filer("C:/DLCF CBTest/SUB/files/system/sling/file/dateregister/" + QString::number(NumRegister) + ".dpt");
        filer.open(QFile::WriteOnly | QFile::Text);

        QTextStream outr(&filer);
                     outr<<QDate::currentDate().toString()+"  "+QTime::currentTime().toString();   //the index here only stores the value of the extracted text
        filer.close();



   /*    QFile file("C:/DLCF CBTest/files/last_time.dpt");
        file.open(QFile::ReadOnly | QFile::Text);
        QTextStream in(&file);
       QString line[1];   //the index of this array is the line of the text you want to extract
        for(int i = 1;i<=1;i++){
                 line[0] = in.readLine();   //the index here only stores the value of the extracted text
                information = line[0]; //prints out the extracted text
}
        if(information != "")
        QFile fileg("C:/DLCF CBTest/files/last_time.dpt");
            if(!fileg.open(QFile::ReadOnly | QFile::Text)){
                QTextStream outg(&fileg);
                outg<<"90";
                fileg.flush();
                fileg.close();}
                //QMessageBox::warning(this, "WARNING", "Error 200.\nFailed to save data. Contact Technical personnel for help");
*/
    hide();
    profileDialog = new ProfileDialog(this);
    profileDialog->show();
}}
}


void LoginDialog::on_pushButton_clicked()
{
    result = new Result(this);
    result->showMaximized();
}

