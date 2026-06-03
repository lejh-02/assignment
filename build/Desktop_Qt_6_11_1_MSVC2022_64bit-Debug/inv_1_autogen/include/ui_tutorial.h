/********************************************************************************
** Form generated from reading UI file 'tutorial.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TUTORIAL_H
#define UI_TUTORIAL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_tutorial
{
public:
    QLabel *tutorialLabel;
    QPushButton *backButton;
    QTextBrowser *textBrowser;

    void setupUi(QDialog *tutorial)
    {
        if (tutorial->objectName().isEmpty())
            tutorial->setObjectName("tutorial");
        tutorial->resize(623, 518);
        tutorialLabel = new QLabel(tutorial);
        tutorialLabel->setObjectName("tutorialLabel");
        tutorialLabel->setGeometry(QRect(40, 30, 251, 461));
        tutorialLabel->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        tutorialLabel->setAutoFillBackground(false);
        tutorialLabel->setFrameShape(QFrame::Shape::StyledPanel);
        backButton = new QPushButton(tutorial);
        backButton->setObjectName("backButton");
        backButton->setGeometry(QRect(350, 70, 221, 131));
        textBrowser = new QTextBrowser(tutorial);
        textBrowser->setObjectName("textBrowser");
        textBrowser->setGeometry(QRect(340, 271, 256, 221));

        retranslateUi(tutorial);

        QMetaObject::connectSlotsByName(tutorial);
    } // setupUi

    void retranslateUi(QDialog *tutorial)
    {
        tutorial->setWindowTitle(QCoreApplication::translate("tutorial", "Dialog", nullptr));
        tutorialLabel->setText(QCoreApplication::translate("tutorial", "<html><head/><body><p><span style=\" font-weight:700;\">ADD BUTTON</span></p><p>- Enter item name</p><p>- Enter quantity</p><p>- Click Add</p><p><span style=\" font-weight:700;\">REMOVE BUTTON</span></p><p>- Enter row number</p><p>- Click Remove</p><p><span style=\" font-weight:700;\">EDIT BUTTON- Enter row number</span></p><p>- Enter new values</p><p>- Click Edit</p><p><span style=\" font-weight:700;\">LOGOUT BUTTON</span></p><p>- Return to login page<br/><br/><span style=\" font-weight:700;\">X button </span></p><p>-Exit <br/></p></body></html>", nullptr));
        backButton->setText(QCoreApplication::translate("tutorial", "Return to login page", nullptr));
        textBrowser->setHtml(QCoreApplication::translate("tutorial", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:700;\">MADE BY</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Law Jin Tao</p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Su Dao Yi</p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0p"
                        "x; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Lee Joon Hang</p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Chai Chuan Wei</p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class tutorial: public Ui_tutorial {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TUTORIAL_H
