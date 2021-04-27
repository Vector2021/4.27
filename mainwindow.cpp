#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
//包含对应的头文件
#include <QTcpSocket>
#include <QDebug>
#include <QString>
#include <QByteArray>

namespace Ui {
    class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget* parent = 0);
    ~MainWindow();


private slots:
    /*网络处理相关*/
    void ReadData();
    void ReadError(QAbstractSocket::SocketError);

    /*对应的四个按钮的按下和释放的槽函数，由系统自动生成*/
    void on_go_released();
    void on_back_released();
    void on_go_pressed();
    void on_back_pressed();
    void on_turn_left_pressed();
    void on_turn_right_pressed();
    void on_turn_left_released();
    void on_turn_right_released();

private:
    Ui::MainWindow* ui;
    QTcpSocket* client;
};

#endif // MAINWINDOW_H