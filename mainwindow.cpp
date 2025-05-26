#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    m_currentNumber = "0";
    m_storedNumber = "";
    m_currentOperation = ' ';
    m_waitingForOperand = false;
    ui->displayLineEdit->setText(m_currentNumber);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_button1_clicked()
{
    QString digitValue = "1";
    if(m_waitingForOperand){
        m_currentNumber = digitValue;
        m_waitingForOperand = false;
    } else{
        if(m_currentNumber == "0"){
            m_currentNumber = digitValue;
        } else{
            m_currentNumber += digitValue;
        }
    }
    ui->displayLineEdit->setText(m_currentNumber);
}

void MainWindow::on_button0_clicked()
{
    QString digitValue = "0";
    if(m_waitingForOperand){
        m_currentNumber = digitValue;
        m_waitingForOperand = false;
    } else{
        if(m_currentNumber != "0"){
            m_currentNumber += digitValue;
        }
    }
    ui->displayLineEdit->setText(m_currentNumber);
}

void MainWindow::on_button2_clicked()
{
    QString digitValue = "2";
    if(m_waitingForOperand){
        m_currentNumber = digitValue;
        m_waitingForOperand = false;
    } else{
        if(m_currentNumber == "0"){
            m_currentNumber = digitValue;
        } else{
            m_currentNumber += digitValue;
        }
    }
    ui->displayLineEdit->setText(m_currentNumber);
}

void MainWindow::on_button3_clicked()
{
    QString digitValue = "3";
    if(m_waitingForOperand){
        m_currentNumber = digitValue;
        m_waitingForOperand = false;
    } else{
        if(m_currentNumber == "0"){
            m_currentNumber = digitValue;
        } else{
            m_currentNumber += digitValue;
        }
    }
    ui->displayLineEdit->setText(m_currentNumber);
}

void MainWindow::on_button4_clicked()
{
    QString digitValue = "4";
    if(m_waitingForOperand){
        m_currentNumber = digitValue;
        m_waitingForOperand = false;
    } else{
        if(m_currentNumber == "0"){
            m_currentNumber = digitValue;
        } else{
            m_currentNumber += digitValue;
        }
    }
    ui->displayLineEdit->setText(m_currentNumber);
}

void MainWindow::on_button5_clicked()
{
    QString digitValue = "5";
    if(m_waitingForOperand){
        m_currentNumber = digitValue;
        m_waitingForOperand = false;
    } else{
        if(m_currentNumber == "0"){
            m_currentNumber = digitValue;
        } else{
            m_currentNumber += digitValue;
        }
    }
    ui->displayLineEdit->setText(m_currentNumber);
}

void MainWindow::on_button6_clicked()
{
    QString digitValue = "6";
    if(m_waitingForOperand){
        m_currentNumber = digitValue;
        m_waitingForOperand = false;
    } else{
        if(m_currentNumber == "0"){
            m_currentNumber = digitValue;
        } else{
            m_currentNumber += digitValue;
        }
    }
    ui->displayLineEdit->setText(m_currentNumber);
}

void MainWindow::on_button7_clicked()
{
    QString digitValue = "7";
    if(m_waitingForOperand){
        m_currentNumber = digitValue;
        m_waitingForOperand = false;
    } else{
        if(m_currentNumber == "0"){
            m_currentNumber = digitValue;
        } else{
            m_currentNumber += digitValue;
        }
    }
    ui->displayLineEdit->setText(m_currentNumber);
}

void MainWindow::on_button8_clicked()
{
    QString digitValue = "8";
    if(m_waitingForOperand){
        m_currentNumber = digitValue;
        m_waitingForOperand = false;
    } else{
        if(m_currentNumber == "0"){
            m_currentNumber = digitValue;
        } else{
            m_currentNumber += digitValue;
        }
    }
    ui->displayLineEdit->setText(m_currentNumber);
}

void MainWindow::on_button9_clicked()
{
    QString digitValue = "9";
    if(m_waitingForOperand){
        m_currentNumber = digitValue;
        m_waitingForOperand = false;
    } else{
        if(m_currentNumber == "0"){
            m_currentNumber = digitValue;
        } else{
            m_currentNumber += digitValue;
        }
    }
    ui->displayLineEdit->setText(m_currentNumber);
}

void MainWindow::on_buttonSum_clicked()
{
    if(!m_currentNumber.isEmpty()){
        if(!m_storedNumber.isEmpty() && m_currentOperation != ' '){
            on_buttonEqual_clicked();
        }
        m_storedNumber = m_currentNumber;
        m_currentOperation = '+';
        m_waitingForOperand = true;
        ui->displayLineEdit->setText(m_storedNumber);
    }
}

void MainWindow::on_buttonSub_clicked()
{
    if(!m_currentNumber.isEmpty()){
        if(!m_storedNumber.isEmpty() && m_currentOperation != ' '){
            on_buttonEqual_clicked();
        }
        m_storedNumber = m_currentNumber;
        m_currentOperation = '-';
        m_waitingForOperand = true;
        ui->displayLineEdit->setText(m_storedNumber);
    }
}

void MainWindow::on_buttonMult_clicked()
{
    if(!m_currentNumber.isEmpty()){
        if(!m_storedNumber.isEmpty() && m_currentOperation != ' '){
            on_buttonEqual_clicked();
        }
        m_storedNumber = m_currentNumber;
        m_currentOperation = 'X';
        m_waitingForOperand = true;
        ui->displayLineEdit->setText(m_storedNumber);
    }
}

void MainWindow::on_buttonDiv_clicked()
{
    if(!m_currentNumber.isEmpty()){
        if(!m_storedNumber.isEmpty() && m_currentOperation != ' '){
            on_buttonEqual_clicked();
        }
        m_storedNumber = m_currentNumber;
        m_currentOperation = '/';
        m_waitingForOperand = true;
        ui->displayLineEdit->setText(m_storedNumber);
    }
}

void MainWindow::on_buttonPercent_clicked()
{
    if(!m_currentNumber.isEmpty()){
        if(!m_storedNumber.isEmpty() && m_currentOperation != ' '){
            on_buttonEqual_clicked();
        }
        m_storedNumber = m_currentNumber;
        m_currentOperation = '%';
        m_waitingForOperand = true;
        on_buttonEqual_clicked();
        ui->displayLineEdit->setText(m_storedNumber);
    }
}

void MainWindow::on_buttonEqual_clicked()
{
    if(m_storedNumber.isEmpty() || m_currentOperation == ' ' || m_currentNumber.isEmpty()){
        return;
    }

    double num1 = m_storedNumber.toDouble();
    double num2 = m_currentNumber.toDouble();
    double result = 0.0;

    if(m_currentOperation == '+'){
        result = num1 + num2;
    } else if(m_currentOperation == '-'){
        result = num1 - num2;
    } else if(m_currentOperation == 'X'){
        result = num1 * num2;
    } else if(m_currentOperation == '%'){
        result = num1 / 100;
    } else if(m_currentOperation == '/'){
        if (num2 == 0.0){
            ui->displayLineEdit->setText("Erro: Divisão por 0");
            m_currentNumber = "0";
            m_storedNumber = "";
            m_currentOperation = ' ';
            m_waitingForOperand = false;
            return;
        }
        result = num1 / num2;
    }
    m_currentNumber = QString::number(result);
    ui->displayLineEdit->setText(m_currentNumber);
    m_storedNumber = m_currentNumber;
    m_currentOperation = ' ';
    m_waitingForOperand = true;
}

void MainWindow::on_buttonDeleteAll_clicked()
{
    m_currentNumber = "0";
    m_storedNumber = "";
    m_currentOperation = ' ';
    m_waitingForOperand = false;
    ui->displayLineEdit->setText(m_currentNumber);
}

void MainWindow:: on_buttonDeleteOne_clicked()
{
    if(m_currentNumber.length() > 0 && !m_waitingForOperand){
        m_currentNumber.chop(1);
        if(m_currentNumber.isEmpty()){
            m_currentNumber = "0";
        }
    } else if (m_currentNumber.length() > 0 && m_currentNumber != "0" && m_waitingForOperand){
        m_currentNumber.chop(1);
        if(m_currentNumber.isEmpty()){
            m_currentNumber = "0";
        }
    } else if(m_currentNumber == "0"){

    }
    ui->displayLineEdit->setText(m_currentNumber);
}
