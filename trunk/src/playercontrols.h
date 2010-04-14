#ifndef PLAYERCONTROLS_H
#define PLAYERCONTROLS_H

#include <QWidget>

namespace Ui {
    class PlayerControls;
}

class PlayerControls : public QWidget {
    Q_OBJECT
public:
    PlayerControls(QWidget *parent = 0);
    ~PlayerControls();

protected:
    void changeEvent(QEvent *e);

private:
    Ui::PlayerControls *ui;
};

#endif // PLAYERCONTROLS_H
