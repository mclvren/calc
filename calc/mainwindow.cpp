#include "mainwindow.h"
#include "ui_mainwindow.h"

//Значение до нажатия кнопки операции
double num_first;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //Соединение действий clicked() с методом digits_numbers()
    connect(ui->pushButton_0,SIGNAL(clicked()),this,SLOT(digits_numbers()));
    connect(ui->pushButton_1,SIGNAL(clicked()),this,SLOT(digits_numbers()));
    connect(ui->pushButton_2,SIGNAL(clicked()),this,SLOT(digits_numbers()));
    connect(ui->pushButton_3,SIGNAL(clicked()),this,SLOT(digits_numbers()));
    connect(ui->pushButton_4,SIGNAL(clicked()),this,SLOT(digits_numbers()));
    connect(ui->pushButton_5,SIGNAL(clicked()),this,SLOT(digits_numbers()));
    connect(ui->pushButton_6,SIGNAL(clicked()),this,SLOT(digits_numbers()));
    connect(ui->pushButton_7,SIGNAL(clicked()),this,SLOT(digits_numbers()));
    connect(ui->pushButton_8,SIGNAL(clicked()),this,SLOT(digits_numbers()));
    connect(ui->pushButton_9,SIGNAL(clicked()),this,SLOT(digits_numbers()));
    //+/-
    connect(ui->plus_minus,SIGNAL(clicked()),this,SLOT(operations()));
    //%
    connect(ui->percent,SIGNAL(clicked()),this,SLOT(operations()));
    //Математические операции
    connect(ui->divide,SIGNAL(clicked()),this,SLOT(math_operations()));
    connect(ui->multiply,SIGNAL(clicked()),this,SLOT(math_operations()));
    connect(ui->plus,SIGNAL(clicked()),this,SLOT(math_operations()));
    connect(ui->minus,SIGNAL(clicked()),this,SLOT(math_operations()));
    //Добавить свойство проверки нажатия
    ui->divide->setCheckable(true);
    ui->multiply->setCheckable(true);
    ui->plus->setCheckable(true);
    ui->minus->setCheckable(true);

}

MainWindow::~MainWindow()
{
    delete ui;
}
//Метод кнопки очистки
void MainWindow::on_clear_btn_clicked()
{
    //Выключаем кнопки
    ui->divide->setChecked(false);
    ui->multiply->setChecked(false);
    ui->plus->setChecked(false);
    ui->minus->setChecked(false);
    //Очищаем поле
    ui->result->setText("0");
}
//Метод обработки нажатий цифр
void MainWindow::digits_numbers()
{
    //Присваивание переменной указателя sender
    QPushButton *button = static_cast<QPushButton*>(sender());
    //Создаем переменные для записи цифр из окна ввода
    double all_numbers;
    QString new_label;
    //Обработка 0 целых
    if (ui->result->text().contains(".") && button->text() == "0") {
        new_label = ui->result->text()+button->text();
    } else {
        //Преобразуем строку в число
        all_numbers = (ui->result->text()+button->text()).toDouble();
        //Преобразуем числа в строку, для вывода в поле ввода
        new_label = QString::number(all_numbers, 'g', 9); // Кол-во цифр до e
    }
    ui->result->setText(new_label);
}
//Метод обработки точки
void MainWindow::on_dot_clicked()
{
    //Проверка на содержание точки
    if(!(ui->result->text().contains(".")))
    ui->result->setText(ui->result->text()+".");
}
//Метод операций
void MainWindow::operations()
{
    //Присваивание переменной указателя sender
    QPushButton *button = static_cast<QPushButton*>(sender());
    //Создаем переменные для записи цифр из окна ввода
    double all_numbers;
    QString new_label;
    if(button->text()=="+/-") {
        //Преобразуем строку в число
        all_numbers = (ui->result->text()).toDouble();
        all_numbers = all_numbers * (-1);
        //Преобразуем числа в строку, для вывода в поле ввода
        new_label = QString::number(all_numbers, 'g', 9); // Кол-во цифр до e
        ui->result->setText(new_label);
    } else if(button->text()=="%") {
        //Преобразуем строку в число
        all_numbers = (ui->result->text()).toDouble();
        all_numbers = all_numbers * (0.01);
        //Преобразуем числа в строку, для вывода в поле ввода
        new_label = QString::number(all_numbers, 'g', 9); // Кол-во цифр до e
        ui->result->setText(new_label);
    }
}

void MainWindow::on_equal_clicked()
{
    double labelNumber, num_second;
    QString new_label;
    //Сохраняем число после выбора мат. операций
    num_second = ui->result->text().toDouble();
    //Проверка нажатия кнопки математических операций
    if(ui->plus->isChecked())
    {
        //Выполняем операцию
        labelNumber = num_first + num_second;
        //Конвертируем в строку
        new_label = QString::number(labelNumber, 'g', 9);
        //Выводим
        ui->result->setText(new_label);
        //Выключаем параметр кнопки
        ui->plus->setChecked(false);

    } else if(ui->minus->isChecked()) {
        //Выполняем операцию
        labelNumber = num_first - num_second;
        //Конвертируем в строку
        new_label = QString::number(labelNumber, 'g', 9);
        //Выводим
        ui->result->setText(new_label);
        //Выключаем параметр кнопки
        ui->minus->setChecked(false);

    } else if(ui->divide->isChecked()) {
        if (num_second == 0) {
            ui->result->setText("0");
        } else {
            //Выполняем операцию
            labelNumber = num_first / num_second;
            //Конвертируем в строку
            new_label = QString::number(labelNumber, 'g', 9);
            //Выводим
            ui->result->setText(new_label);
            }
        //Выключаем параметр кнопки
        ui->divide->setChecked(false);

    } else if(ui->multiply->isChecked()) {
        //Выполняем операцию
        labelNumber = num_first * num_second;
        //Конвертируем в строку
        new_label = QString::number(labelNumber, 'g', 9);
        //Выводим
        ui->result->setText(new_label);
        //Выключаем параметр кнопки
        ui->multiply->setChecked(false);
    }
}
//Математические операции
void MainWindow::math_operations()
{
    QPushButton *button = static_cast<QPushButton*>(sender());
    //Сохраняем значение поля
    num_first = ui->result->text().toDouble();
    //Очищаем поле
    ui->result->setText("");
    //Кнопка нажата
    button->setChecked(true);
}
