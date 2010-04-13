#ifndef DIALOG_PREFERENCES_H
#define DIALOG_PREFERENCES_H

#include <QtGui/QDialog>

namespace Ui {
    class dialog_preferences;
}

class dialog_preferences : public QDialog {
    Q_OBJECT
public:
    dialog_preferences(QWidget *parent = 0);
    ~dialog_preferences();

protected:
    void changeEvent(QEvent *e);

private:
    Ui::dialog_preferences *m_ui;
};

#endif // DIALOG_PREFERENCES_H
