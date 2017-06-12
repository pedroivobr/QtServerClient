#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <string>
#include <QDateTime>
#include <QString>
#include <QStringList>

MainWindow::MainWindow(QWidget *parent) :
  QMainWindow(parent),
  ui(new Ui::MainWindow)
{
  ui->setupUi(this);
  socket = new QTcpSocket(this);

  connect(ui->pushButtonGet,
          SIGNAL(clicked(bool)),
          this,
          SLOT(getData()));
}

void MainWindow::tcpConnect(QString str){
  ip = str;
  socket->connectToHost(ip,1234);
  if(socket->waitForConnected(3000)){
    qDebug() << "Connected";
  }
  else{
    qDebug() << "Disconnected";
  }
}

void MainWindow::getData(){
  QString str,write;
  QByteArray array;
  QStringList list;
  qint64 thetime;
  qDebug() << "to get data...";
  if(socket->state() == QAbstractSocket::ConnectedState){
    if(socket->isOpen()){
      qDebug() << "reading...";
      write = "get " + ui->listWidget->currentItem()->text() + " 1\r\n";
      qDebug() << "write value: " << write;
      socket->write(write.toStdString().c_str());
      socket->waitForBytesWritten();
      socket->waitForReadyRead();
      qDebug() << socket->bytesAvailable();
      while(socket->bytesAvailable()){
        str = socket->readLine().replace("\n","").replace("\r","");
        list = str.split(" ");
        if(list.size() == 2){
          bool ok;
          str = list.at(0);
          thetime = str.toLongLong(&ok);
          str = list.at(1);
          qDebug() << thetime << ": " << str;
        }
      }
    }
  }
}



void MainWindow::listarIP()
{
    QString str;
    QStringList list;
    qDebug() << "listando";
    if(socket->state() == QAbstractSocket::ConnectedState){
        if(socket->isOpen()){
          socket->write("list");
          socket->waitForBytesWritten();
          socket->waitForReadyRead();
          while(socket->bytesAvailable()){
              str = socket->readLine();
              list = str.split(" ");
          }
        }
    }
    ui->listWidget->clear();
    ui->listWidget->addItem(str);
}


MainWindow::~MainWindow()
{
  delete socket;
  delete ui;
}

void MainWindow::on_buttonConnect_clicked()
{
    tcpConnect(ui->lineEdit->text());
    listarIP();
    //QString str =socket->write("list").toString();
    //ui->listWidget->addItems(socket->write(str));
}

void MainWindow::on_buttonDisconnect_clicked()
{
    socket->disconnectFromHost();
}

void MainWindow::on_buttonUpdate_clicked(bool checked)
{
    listarIP();
}
