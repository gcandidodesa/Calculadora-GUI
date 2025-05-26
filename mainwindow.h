#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
private slots:
    void on_button0_clicked();
    void on_button1_clicked();
    void on_button2_clicked();
    void on_button3_clicked();
    void on_button4_clicked();
    void on_button5_clicked();
    void on_button6_clicked();
    void on_button7_clicked();
    void on_button8_clicked();
    void on_button9_clicked();
    void on_buttonSum_clicked();
    void on_buttonSub_clicked();
    void on_buttonMult_clicked();
    void on_buttonDiv_clicked();
    void on_buttonEqual_clicked();
    void on_buttonPercent_clicked();
    void on_buttonDeleteOne_clicked();
    void on_buttonDeleteAll_clicked();

private:
    Ui::MainWindow *ui;

    QString m_currentNumber;
    QString m_storedNumber;
    char m_currentOperation;
    bool m_waitingForOperand;
};
#endif // MAINWINDOW_H
