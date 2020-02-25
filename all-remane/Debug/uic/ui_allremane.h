/********************************************************************************
** Form generated from reading UI file 'allremane.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ALLREMANE_H
#define UI_ALLREMANE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_allremaneClass
{
public:
    QWidget *centralWidget;
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayout_3;
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout_4;
    QPushButton *openPath_btn;
    QLineEdit *Path_text;
    QVBoxLayout *verticalLayout_2;
    QGridLayout *gridLayout;
    QTextBrowser *fileInfo_text;
    QGridLayout *gridLayout_2;
    QPushButton *search_btn;
    QPushButton *addLastName_btn;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *allremaneClass)
    {
        if (allremaneClass->objectName().isEmpty())
            allremaneClass->setObjectName(QStringLiteral("allremaneClass"));
        allremaneClass->resize(400, 500);
        allremaneClass->setMaximumSize(QSize(400, 500));
        centralWidget = new QWidget(allremaneClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayoutWidget_2 = new QWidget(centralWidget);
        gridLayoutWidget_2->setObjectName(QStringLiteral("gridLayoutWidget_2"));
        gridLayoutWidget_2->setGeometry(QRect(10, 0, 391, 461));
        gridLayout_3 = new QGridLayout(gridLayoutWidget_2);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        gridLayout_4 = new QGridLayout();
        gridLayout_4->setSpacing(6);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        openPath_btn = new QPushButton(gridLayoutWidget_2);
        openPath_btn->setObjectName(QStringLiteral("openPath_btn"));

        gridLayout_4->addWidget(openPath_btn, 0, 0, 1, 1);

        Path_text = new QLineEdit(gridLayoutWidget_2);
        Path_text->setObjectName(QStringLiteral("Path_text"));
        Path_text->setMinimumSize(QSize(300, 20));
        Path_text->setMaximumSize(QSize(300, 20));

        gridLayout_4->addWidget(Path_text, 0, 1, 1, 1);


        verticalLayout->addLayout(gridLayout_4);


        gridLayout_3->addLayout(verticalLayout, 0, 0, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        fileInfo_text = new QTextBrowser(gridLayoutWidget_2);
        fileInfo_text->setObjectName(QStringLiteral("fileInfo_text"));
        fileInfo_text->setMaximumSize(QSize(300, 400));

        gridLayout->addWidget(fileInfo_text, 1, 0, 1, 1);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(6);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        search_btn = new QPushButton(gridLayoutWidget_2);
        search_btn->setObjectName(QStringLiteral("search_btn"));
        search_btn->setMaximumSize(QSize(80, 20));

        gridLayout_2->addWidget(search_btn, 0, 0, 1, 1);

        addLastName_btn = new QPushButton(gridLayoutWidget_2);
        addLastName_btn->setObjectName(QStringLiteral("addLastName_btn"));
        addLastName_btn->setMaximumSize(QSize(80, 20));

        gridLayout_2->addWidget(addLastName_btn, 0, 1, 1, 1);


        gridLayout->addLayout(gridLayout_2, 0, 0, 1, 1);


        verticalLayout_2->addLayout(gridLayout);


        gridLayout_3->addLayout(verticalLayout_2, 1, 0, 1, 1);

        allremaneClass->setCentralWidget(centralWidget);
        mainToolBar = new QToolBar(allremaneClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        allremaneClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(allremaneClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        allremaneClass->setStatusBar(statusBar);

        retranslateUi(allremaneClass);

        QMetaObject::connectSlotsByName(allremaneClass);
    } // setupUi

    void retranslateUi(QMainWindow *allremaneClass)
    {
        allremaneClass->setWindowTitle(QApplication::translate("allremaneClass", "allremane", Q_NULLPTR));
        openPath_btn->setText(QApplication::translate("allremaneClass", "\346\211\223\345\274\200\350\267\257\345\276\204", Q_NULLPTR));
        fileInfo_text->setHtml(QApplication::translate("allremaneClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\350\257\267\347\202\271\345\207\273\342\200\234\346\243\200\347\264\242\346\226\207\344\273\266\342\200\235</p></body></html>", Q_NULLPTR));
        search_btn->setText(QApplication::translate("allremaneClass", "\346\243\200\347\264\242\346\226\207\344\273\266", Q_NULLPTR));
        addLastName_btn->setText(QApplication::translate("allremaneClass", "\346\267\273\345\212\240\345\220\216\347\274\200", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class allremaneClass: public Ui_allremaneClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ALLREMANE_H
