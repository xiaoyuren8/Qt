#include "FramelessWidget.h"
#include "widget.h"
#include "Person.h"

#include <QApplication>
#include <QWidget>
#include <QLabel>
#include <QPushButton>
#include <QTextEdit>
#include <QVBoxLayout>
#include <QDebug>
#include <QRect>

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);

    // 创建包含主要控件的 Widget
//    Widget w;
//    w.show();

    Person p;
    p.name = "Biao";

    qDebug() << p;

    return app.exec();
}
