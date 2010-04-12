#include "dialog_preferences.h"
#include "ui_dialog_preferences.h"

dialog_preferences::dialog_preferences(QWidget *parent) :
    QDialog(parent),
    m_ui(new Ui::dialog_preferences)
{
    m_ui->setupUi(this);
}

dialog_preferences::~dialog_preferences()
{
    delete m_ui;
}

void dialog_preferences::changeEvent(QEvent *e)
{
    QDialog::changeEvent(e);
    switch (e->type()) {
    case QEvent::LanguageChange:
        m_ui->retranslateUi(this);
        break;
    default:
        break;
    }
}
