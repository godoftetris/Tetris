#ifndef GETNAME_H
#define GETNAME_H

#include <QWidget>
#include <result.h>

namespace Ui {
class Form;
}

class Form : public QWidget
{
    Q_OBJECT

public:
    explicit Form(QWidget *parent = 0);
    ~Form();

signals:
    void firstWindow();  // Сигнал для первого окна на открытие
    void nextWindow();

private slots:
    // Слот-обработчик нажатия кнопки
    void on_backButton_clicked();

    void on_playButton_clicked();

private:
    Ui::Form *ui;
    resultat *restart;
//    resultat *restart;
};

#endif // GETNAME_H
