#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <getname.h>
#include <leaderboard.h>
#include <result.h>

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();

private slots:
    void on_gameButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::Widget *ui;
    Form *getName;
    leaderboard *leaders;
    resultat *restart;

};

#endif // WIDGET_H
