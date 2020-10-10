#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPushButton>
#include "mypushbutton.h"
#include <QDebug>
#include <QObject>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
//设置主界面参数
    ui->setupUi(this);
    //主界面窗口名称
    setWindowTitle("测试0");
    //主界面窗口固定尺寸
    setFixedSize(200,300);

    //主界面窗口初始化尺寸
//    resize(200,400);

    //连接信号和槽
    //QObject::connect(&serial, &QSerialPort::readyRead, this, &MainWindow::serialPort_readyRead);
//按键0
    QPushButton *btn = new QPushButton("关");
    //指定父类
    btn->setParent(this);
    btn->setText("关闭");
    btn->adjustSize();
    //设置固定值，只要设定值在限制之内，其他的设定不能改变
    btn->setFixedSize(100,30);
    //btn的参数不能比setMinimumSize的值设置的还要小
    btn->setMinimumSize(100,30);
    btn->minimumSize();
//    qDebug()<<btn->width() <<","<<btn->height();
//    btn->resize(btn->width()+10,btn->height()+10);
//    qDebug()<<btn->width() <<","<<btn->height();
    //connect(btn,&QPushButton::clicked,this,&QWidget::close);
    connect(btn,&MyPushButton::clicked,this,&MainWindow::close);
//    btn->show();    //弹出单独窗口


//按键1
    QPushButton *btn1 = new QPushButton("打开",this);
    btn1->move(100,0);
//    qDebug()<<btn1->width() <<","<<btn1->height();


//按键3
    MyPushButton *myBtn = new MyPushButton;
    myBtn->move(0,30);
    myBtn->setText("我的按键");
    myBtn->adjustSize();
    myBtn->setParent(this);
    connect(myBtn,&MyPushButton::clicked,this,&MainWindow::close);
}

MainWindow::~MainWindow()
{
//    qDebug()<<"Main析构";
    delete ui;
}

