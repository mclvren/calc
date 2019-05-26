#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_clear_btn_clicked();
    //Объявляем слот для ввода цифр
    void digits_numbers();
    void on_dot_clicked();
    //Объявляем метод для +/-
    void operations();
    //Математические операции
    void math_operations();
    void on_equal_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
