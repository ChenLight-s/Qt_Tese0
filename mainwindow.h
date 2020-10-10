#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT    //允许使用信号和槽

public:
    MainWindow(QWidget *parent = nullptr); //构造函数
    ~MainWindow();
private:

    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
