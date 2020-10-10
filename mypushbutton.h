#ifndef MYPUSHBUTTON_H
#define MYPUSHBUTTON_H

#include <QWidget>
#include <QPushButton>
class MyPushButton : public QPushButton
{
    Q_OBJECT
public:
    //MyPushButton();
    ~MyPushButton();
    explicit MyPushButton(QWidget *parent = nullptr);

signals:

};

#endif // MYPUSHBUTTON_H
