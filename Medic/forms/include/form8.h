#ifndef FORM8_H
#define FORM8_H

#include <QGraphicsView>
#include <QWidget>

namespace Ui
{
class Form8;
}

class Form8 : public QWidget
{
    Q_OBJECT

public:
    explicit Form8(QWidget* parent = nullptr);
    ~Form8();

    double D;

signals:
    void signal(double p);

private slots:
    void on_pushButton_5_clicked();

    void on_doubleSpinBox_valueChanged(double arg1);

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

private:
    Ui::Form8* ui;
};

#endif // FORM8_H
