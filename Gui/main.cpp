#include "ReadingWidget.h"

#include <QApplication>
#include <QDebug>

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);
    ReadingWidget w;
    w.resize(450, 600);
    w.show();

    return app.exec();
}
