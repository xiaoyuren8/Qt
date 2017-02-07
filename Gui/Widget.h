#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QDebug>

namespace Ui {
class RoundButtonWidget;
}

class RoundButtonWidget : public QWidget {
    Q_OBJECT

public:
    explicit RoundButtonWidget(QWidget *parent = 0);
    ~RoundButtonWidget();

protected:
    void paintEvent(QPaintEvent *event) Q_DECL_OVERRIDE;

private:
    Ui::RoundButtonWidget *ui;
};

#endif // WIDGET_H
