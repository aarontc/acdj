/********************************************************************************
** Form generated from reading ui file 'dialog_preferences.ui'
**
** Created: Sun Nov 15 20:46:36 2009
**      by: Qt User Interface Compiler version 4.5.3
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_DIALOG_PREFERENCES_H
#define UI_DIALOG_PREFERENCES_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_dialog_preferences
{
public:
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *dialog_preferences)
    {
        if (dialog_preferences->objectName().isEmpty())
            dialog_preferences->setObjectName(QString::fromUtf8("dialog_preferences"));
        dialog_preferences->resize(400, 300);
        buttonBox = new QDialogButtonBox(dialog_preferences);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(30, 240, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        retranslateUi(dialog_preferences);
        QObject::connect(buttonBox, SIGNAL(accepted()), dialog_preferences, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), dialog_preferences, SLOT(reject()));

        QMetaObject::connectSlotsByName(dialog_preferences);
    } // setupUi

    void retranslateUi(QDialog *dialog_preferences)
    {
        dialog_preferences->setWindowTitle(QApplication::translate("dialog_preferences", "Dialog", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(dialog_preferences);
    } // retranslateUi

};

namespace Ui {
    class dialog_preferences: public Ui_dialog_preferences {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_PREFERENCES_H
