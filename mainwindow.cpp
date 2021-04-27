#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
//������Ӧ��ͷ�ļ�
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
    /*���紦�����*/
    void ReadData();
    void ReadError(QAbstractSocket::SocketError);

    /*��Ӧ���ĸ���ť�İ��º��ͷŵĲۺ�������ϵͳ�Զ�����*/
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