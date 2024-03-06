#ifndef mainwindow_h
#define mainwindow_h
#include <QtGui>
#include <QFrame>
#include <QLineedit>
#include <Qlabel>
#include <QPushButton>
class mainwindow:public QWidget
{
    Q_OBJECT
protected:
    QTextCodec *codec;
    QFrame *frame;
    QLabel *inputLabel;
    QLineEdit *inputEdit;
    QLabel *outputLabel;
    QLineEdit *outputEdit;
    QPushButton *nextButton;
    QPushButton *exitButton;
public:
    mainwindow(QWidget *parent = 0);
public slots:
    void begin();
    void calc();
};
class StrValidator:public QValidator
{
public:
    StrValidator(QObject *parent):QValidator(parent){}
    virtual State validate(QString &str,int &pos)const
    {
        return Acceptable;
    }
};
#endif
