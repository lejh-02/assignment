/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *nameEdit;
    QLineEdit *quantityEdit;
    QPushButton *addButton;
    QPushButton *removeButton;
    QTableWidget *tableWidget;
    QLineEdit *rowEdit;
    QLabel *label_4;
    QPushButton *editButton;
    QStackedWidget *stackedWidget;
    QWidget *stackedWidgetPage1;
    QLabel *welcomeLabel;
    QPushButton *logoutButton;
    QLineEdit *priceEdit;
    QComboBox *categoryEdit;
    QLabel *label_5;
    QLabel *label_6;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1523, 956);
        MainWindow->setCursor(QCursor(Qt::CursorShape::UpArrowCursor));
        MainWindow->setAutoFillBackground(false);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0.393365, y1:0.545, x2:1, y2:1, stop:0 rgba(0, 0, 0, 255));"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(240, 110, 111, 51));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(260, 150, 111, 51));
        label_3->setScaledContents(false);
        nameEdit = new QLineEdit(centralwidget);
        nameEdit->setObjectName("nameEdit");
        nameEdit->setGeometry(QRect(340, 120, 211, 28));
        nameEdit->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    border: 2px solid #a0a0a0;\n"
"    border-radius: 14px;      /* Controls the corner roundness */\n"
"    padding: 4px 8px;        /* Keeps the text away from the borders */\n"
"     /* Keeps the background white */\n"
"}\n"
"\n"
"/* Optional: Change border color when clicked/focused */\n"
"QLineEdit:focus {\n"
"    border: 2px solid #0078d4; \n"
"}"));
        quantityEdit = new QLineEdit(centralwidget);
        quantityEdit->setObjectName("quantityEdit");
        quantityEdit->setGeometry(QRect(340, 160, 211, 28));
        quantityEdit->setFocusPolicy(Qt::FocusPolicy::StrongFocus);
        quantityEdit->setToolTipDuration(0);
        quantityEdit->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    border: 2px solid #a0a0a0;\n"
"    border-radius: 14px;      /* Controls the corner roundness */\n"
"    padding: 4px 8px;        /* Keeps the text away from the borders */\n"
"     /* Keeps the background white */\n"
"}\n"
"\n"
"/* Optional: Change border color when clicked/focused */\n"
"QLineEdit:focus {\n"
"    border: 2px solid #0078d4; \n"
"}"));
        addButton = new QPushButton(centralwidget);
        addButton->setObjectName("addButton");
        addButton->setGeometry(QRect(400, 450, 131, 29));
        addButton->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        addButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border: 2px solid #0e6fed;   /* Blue border */\n"
"    border-radius: 8px;          /* Matching corner roundness */\n"
"    padding: 4px 16px;           \n"
"    background-color: transparent; /* No background color */\n"
"    color: #0e6fed;             /* Blue text */\n"
"    font-weight: bold;\n"
"}\n"
"\n"
"/* Changes when the mouse hovers over it */\n"
"QPushButton:hover {\n"
"    background-color: #0e6fed;   /* Very faint blue background hint */\n"
"    border-color: #005a9e;       /* Darker blue border *          /* Darker blue text */\n"
"	color: rgb(5, 255, 47);\n"
"}\n"
"\n"
"/* Changes when clicked */\n"
"QPushButton:pressed {\n"
"    background-color: #deecf9;   /* Light blue fill only on click */\n"
"}"));
        QIcon icon(QIcon::fromTheme(QIcon::ThemeIcon::ListAdd));
        addButton->setIcon(icon);
        addButton->setAutoRepeatDelay(297);
        removeButton = new QPushButton(centralwidget);
        removeButton->setObjectName("removeButton");
        removeButton->setGeometry(QRect(240, 450, 131, 29));
        removeButton->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        removeButton->setToolTipDuration(-4);
        removeButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border: 2px solid #ed0e0e;   /* Blue border */\n"
"    border-radius: 8px;          /* Matching corner roundness */\n"
"    padding: 4px 16px;           \n"
"    background-color: transparent; /* No background color */\n"
"    color: #ed0e0e;             /* Blue text */\n"
"    font-weight: bold;\n"
"}\n"
"\n"
"/* Changes when the mouse hovers over it */\n"
"QPushButton:hover {\n"
"    background-color: #ed0e0e;   /* Very faint blue background hint */\n"
"    border-color: #005a9e;       /* Darker blue border */\n"
"    color: #005a9e;              /* Darker blue text */\n"
"}\n"
"\n"
"/* Changes when clicked */\n"
"QPushButton:pressed {\n"
"    background-color: #deecf9;   /* Light blue fill only on click */\n"
"}"));
        QIcon icon1(QIcon::fromTheme(QIcon::ThemeIcon::EditDelete));
        removeButton->setIcon(icon1);
        tableWidget = new QTableWidget(centralwidget);
        if (tableWidget->columnCount() < 3)
            tableWidget->setColumnCount(3);
        QIcon icon2(QIcon::fromTheme(QIcon::ThemeIcon::FolderOpen));
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        __qtablewidgetitem->setIcon(icon2);
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QIcon icon3(QIcon::fromTheme(QIcon::ThemeIcon::EditSelectAll));
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        __qtablewidgetitem1->setBackground(QColor(0, 0, 0));
        __qtablewidgetitem1->setIcon(icon3);
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        if (tableWidget->rowCount() < 1)
            tableWidget->setRowCount(1);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setItem(0, 0, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setItem(0, 1, __qtablewidgetitem4);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setGeometry(QRect(600, 50, 871, 791));
        tableWidget->setStyleSheet(QString::fromUtf8(""));
        tableWidget->setGridStyle(Qt::PenStyle::SolidLine);
        tableWidget->setSortingEnabled(true);
        rowEdit = new QLineEdit(centralwidget);
        rowEdit->setObjectName("rowEdit");
        rowEdit->setGeometry(QRect(340, 210, 211, 31));
        rowEdit->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    border: 2px solid #a0a0a0;\n"
"    border-radius: 14px;      /* Controls the corner roundness */\n"
"    padding: 4px 8px;        /* Keeps the text away from the borders */\n"
"     /* Keeps the background white */\n"
"}\n"
"\n"
"/* Optional: Change border color when clicked/focused */\n"
"QLineEdit:focus {\n"
"    border: 2px solid #0078d4; \n"
"}"));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(260, 210, 63, 21));
        editButton = new QPushButton(centralwidget);
        editButton->setObjectName("editButton");
        editButton->setGeometry(QRect(320, 500, 131, 31));
        editButton->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        editButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border: 2px solid rgb(0, 255, 127);   /* Blue border */\n"
"    border-radius: 8px;          /* Matching corner roundness */\n"
"    padding: 4px 16px;           \n"
"    background-color: transparent; /* No background color */\n"
"    color: #2dd66e;             /* Blue text */\n"
"    font-weight: bold;\n"
"}\n"
"\n"
"/* Changes when the mouse hovers over it */\n"
"QPushButton:hover {\n"
"    background-color: #f0f7ff;   /* Very faint blue background hint */\n"
"    border-color: #005a9e;       /* Darker blue border *          /* Darker blue text */\n"
"	color: rgb(5, 255, 47);\n"
"}\n"
"\n"
"/* Changes when clicked */\n"
"QPushButton:pressed {\n"
"    background-color: #deecf9;   /* Light blue fill only on click */\n"
"}"));
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setEnabled(true);
        stackedWidget->setGeometry(QRect(0, 0, 171, 931));
        stackedWidget->setCursor(QCursor(Qt::CursorShape::ArrowCursor));
        stackedWidget->setFocusPolicy(Qt::FocusPolicy::NoFocus);
        stackedWidget->setContextMenuPolicy(Qt::ContextMenuPolicy::DefaultContextMenu);
        stackedWidget->setAutoFillBackground(false);
        stackedWidget->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0.436019, y1:0.852, x2:1, y2:1, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(255, 255, 255, 255));"));
        stackedWidgetPage1 = new QWidget();
        stackedWidgetPage1->setObjectName("stackedWidgetPage1");
        welcomeLabel = new QLabel(stackedWidgetPage1);
        welcomeLabel->setObjectName("welcomeLabel");
        welcomeLabel->setGeometry(QRect(10, 10, 161, 20));
        welcomeLabel->setContextMenuPolicy(Qt::ContextMenuPolicy::NoContextMenu);
        logoutButton = new QPushButton(stackedWidgetPage1);
        logoutButton->setObjectName("logoutButton");
        logoutButton->setGeometry(QRect(10, 850, 151, 29));
        stackedWidget->addWidget(stackedWidgetPage1);
        priceEdit = new QLineEdit(centralwidget);
        priceEdit->setObjectName("priceEdit");
        priceEdit->setGeometry(QRect(340, 270, 211, 31));
        priceEdit->setCursor(QCursor(Qt::CursorShape::IBeamCursor));
        priceEdit->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    border: 2px solid #a0a0a0;\n"
"    border-radius: 14px;      /* Controls the corner roundness */\n"
"    padding: 4px 8px;        /* Keeps the text away from the borders */\n"
"     /* Keeps the background white */\n"
"}\n"
"\n"
"/* Optional: Change border color when clicked/focused */\n"
"QLineEdit:focus {\n"
"    border: 2px solid #0078d4; \n"
"}"));
        categoryEdit = new QComboBox(centralwidget);
        QIcon icon4(QIcon::fromTheme(QIcon::ThemeIcon::DocumentProperties));
        categoryEdit->addItem(icon4, QString());
        categoryEdit->setObjectName("categoryEdit");
        categoryEdit->setGeometry(QRect(340, 340, 191, 28));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(260, 270, 63, 21));
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(250, 340, 63, 21));
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "ITEM_NAME:", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Quantity:", nullptr));
        nameEdit->setText(QString());
        nameEdit->setPlaceholderText(QCoreApplication::translate("MainWindow", "ENTER ITEM NAME", nullptr));
        quantityEdit->setPlaceholderText(QCoreApplication::translate("MainWindow", "ENTER QUANTITY", nullptr));
        addButton->setText(QCoreApplication::translate("MainWindow", "add", nullptr));
        removeButton->setText(QCoreApplication::translate("MainWindow", "Remove ", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("MainWindow", "NAME", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("MainWindow", "QUANTITY", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("MainWindow", "PRICE", nullptr));

        const bool __sortingEnabled = tableWidget->isSortingEnabled();
        tableWidget->setSortingEnabled(false);
        tableWidget->setSortingEnabled(__sortingEnabled);

        rowEdit->setPlaceholderText(QCoreApplication::translate("MainWindow", "ENTER ROW", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", " Row :", nullptr));
        editButton->setText(QCoreApplication::translate("MainWindow", "Edit", nullptr));
        welcomeLabel->setText(QCoreApplication::translate("MainWindow", "Welcome", nullptr));
        logoutButton->setText(QCoreApplication::translate("MainWindow", "Log out \360\237\224\222", nullptr));
        priceEdit->setPlaceholderText(QCoreApplication::translate("MainWindow", "ENTER PRICE PER ITEM", nullptr));
        categoryEdit->setItemText(0, QCoreApplication::translate("MainWindow", "default", nullptr));

        label_5->setText(QCoreApplication::translate("MainWindow", "Price :", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Category:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
