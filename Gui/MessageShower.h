#ifndef MESSAGESHOWER_H
#define MESSAGESHOWER_H

#include <QWidget>

class QLabel;

/*
void showMessageWidget() {
    MessageShower *messageShower = new MessageShower(); // 消息显示窗口

    QTimer *timer = new QTimer();
    QShortcut *stopShortcut    = new QShortcut(QKeySequence(Qt::Key_S), messageShower); // 停止产生消息快捷键
    QShortcut *restartShortcut = new QShortcut(QKeySequence(Qt::Key_R), messageShower); // 恢复产生消息快捷键

    // 模拟生产消息，使用 MessageShower 显示
    QObject::connect(timer, &QTimer::timeout, [=] {
        messageShower->showMessage(QDateTime::currentDateTime().toString("yyyy-MM-dd HH:mm:ss"));
    });

    QObject::connect(stopShortcut, &QShortcut::activated, [=] { timer->stop(); });     // 停止产生消息
    QObject::connect(restartShortcut, &QShortcut::activated, [=] { timer->start(); }); // 恢复产生消息
    timer->start(100);

    messageShower->resize(500, 200);
    messageShower->show();
}
*/
namespace Ui {
class MessageShower;
}

class MessageShower : public QWidget {
    Q_OBJECT
public:
    explicit MessageShower(QWidget *parent = nullptr);

public slots:
    void showMessage(const QString &text);

private:
    Ui::MessageShower *ui;
    QLabel *lastMessage = NULL;
};

#endif // MESSAGESHOWER_H
