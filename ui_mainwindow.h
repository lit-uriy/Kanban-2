/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QToolBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout_4;
    QStackedWidget *stackedWidget;
    QWidget *page_today;
    QVBoxLayout *verticalLayout_11;
    QHBoxLayout *horizontalLayout;
    QGroupBox *groupBox_4;
    QVBoxLayout *verticalLayout_6;
    QToolBox *toolBox_2;
    QWidget *page_3;
    QVBoxLayout *verticalLayout_9;
    QPlainTextEdit *txt_todo_today;
    QWidget *page_4;
    QVBoxLayout *verticalLayout_10;
    QPlainTextEdit *txt_todo;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox_2;
    QHBoxLayout *horizontalLayout_2;
    QPlainTextEdit *txt_doing;
    QGroupBox *groupBox_3;
    QHBoxLayout *horizontalLayout_3;
    QPlainTextEdit *txt_waiting;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_5;
    QToolBox *toolBox;
    QWidget *page;
    QHBoxLayout *horizontalLayout_8;
    QPlainTextEdit *txt_done_today;
    QWidget *page_2;
    QVBoxLayout *verticalLayout_4;
    QPlainTextEdit *txt_done;
    QGroupBox *groupBox_6;
    QVBoxLayout *verticalLayout_7;
    QPlainTextEdit *txt_reminder;
    QWidget *page_notes;
    QVBoxLayout *verticalLayout_12;
    QGroupBox *groupBox_5;
    QVBoxLayout *verticalLayout_3;
    QPlainTextEdit *txt_notes;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->setWindowModality(Qt::NonModal);
        MainWindow->resize(1120, 688);
        MainWindow->setSizeIncrement(QSize(0, 0));
        QFont font;
        font.setPointSize(24);
        font.setKerning(true);
        font.setStyleStrategy(QFont::PreferDefault);
        MainWindow->setFont(font);
        MainWindow->setWindowOpacity(100);
        MainWindow->setAutoFillBackground(false);
        MainWindow->setStyleSheet(QStringLiteral("background-color: black;"));
        MainWindow->setToolButtonStyle(Qt::ToolButtonIconOnly);
        MainWindow->setAnimated(false);
        MainWindow->setDocumentMode(false);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        centralWidget->setMaximumSize(QSize(16777215, 16777215));
        centralWidget->setStyleSheet(QStringLiteral(""));
        horizontalLayout_4 = new QHBoxLayout(centralWidget);
        horizontalLayout_4->setSpacing(0);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setSizeConstraint(QLayout::SetDefaultConstraint);
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        stackedWidget = new QStackedWidget(centralWidget);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setLineWidth(0);
        page_today = new QWidget();
        page_today->setObjectName(QStringLiteral("page_today"));
        verticalLayout_11 = new QVBoxLayout(page_today);
        verticalLayout_11->setSpacing(10);
        verticalLayout_11->setContentsMargins(11, 11, 11, 11);
        verticalLayout_11->setObjectName(QStringLiteral("verticalLayout_11"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(10);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, -1, -1, -1);
        groupBox_4 = new QGroupBox(page_today);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        QFont font1;
        font1.setFamily(QStringLiteral("Calibri"));
        font1.setPointSize(14);
        font1.setBold(true);
        font1.setWeight(75);
        groupBox_4->setFont(font1);
        groupBox_4->setStyleSheet(QStringLiteral("color:white;"));
        groupBox_4->setTitle(QStringLiteral("   To Do   "));
        groupBox_4->setAlignment(Qt::AlignCenter);
        groupBox_4->setFlat(false);
        groupBox_4->setCheckable(false);
        groupBox_4->setChecked(false);
        verticalLayout_6 = new QVBoxLayout(groupBox_4);
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setContentsMargins(11, 11, 11, 11);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(5, 5, 5, 5);
        toolBox_2 = new QToolBox(groupBox_4);
        toolBox_2->setObjectName(QStringLiteral("toolBox_2"));
        QFont font2;
        font2.setFamily(QStringLiteral("Calibri"));
        font2.setPointSize(14);
        font2.setBold(false);
        font2.setUnderline(true);
        font2.setWeight(50);
        font2.setKerning(false);
        toolBox_2->setFont(font2);
        toolBox_2->setCursor(QCursor(Qt::ArrowCursor));
        toolBox_2->setToolTipDuration(-1);
        toolBox_2->setStyleSheet(QStringLiteral("QToolBox::tab { border:0;}"));
        toolBox_2->setLineWidth(0);
        page_3 = new QWidget();
        page_3->setObjectName(QStringLiteral("page_3"));
        page_3->setGeometry(QRect(0, 0, 346, 476));
        verticalLayout_9 = new QVBoxLayout(page_3);
        verticalLayout_9->setSpacing(6);
        verticalLayout_9->setContentsMargins(11, 11, 11, 11);
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        txt_todo_today = new QPlainTextEdit(page_3);
        txt_todo_today->setObjectName(QStringLiteral("txt_todo_today"));
        txt_todo_today->setMaximumSize(QSize(16777215, 16777215));
        QFont font3;
        font3.setFamily(QStringLiteral("Calibri"));
        font3.setPointSize(14);
        font3.setItalic(false);
        txt_todo_today->setFont(font3);
        txt_todo_today->viewport()->setProperty("cursor", QVariant(QCursor(Qt::IBeamCursor)));
        txt_todo_today->setAutoFillBackground(false);
        txt_todo_today->setStyleSheet(QStringLiteral("color:white;border-radius:0;"));

        verticalLayout_9->addWidget(txt_todo_today);

        toolBox_2->addItem(page_3, QStringLiteral("This Week:"));
        page_4 = new QWidget();
        page_4->setObjectName(QStringLiteral("page_4"));
        page_4->setGeometry(QRect(0, 0, 346, 476));
        verticalLayout_10 = new QVBoxLayout(page_4);
        verticalLayout_10->setSpacing(6);
        verticalLayout_10->setContentsMargins(11, 11, 11, 11);
        verticalLayout_10->setObjectName(QStringLiteral("verticalLayout_10"));
        txt_todo = new QPlainTextEdit(page_4);
        txt_todo->setObjectName(QStringLiteral("txt_todo"));
        txt_todo->setFont(font3);
        txt_todo->viewport()->setProperty("cursor", QVariant(QCursor(Qt::IBeamCursor)));
        txt_todo->setStyleSheet(QStringLiteral("border-radius:0;"));

        verticalLayout_10->addWidget(txt_todo);

        toolBox_2->addItem(page_4, QStringLiteral("Future:"));

        verticalLayout_6->addWidget(toolBox_2);


        horizontalLayout->addWidget(groupBox_4);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        groupBox_2 = new QGroupBox(page_today);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setMaximumSize(QSize(16777215, 300));
        groupBox_2->setFont(font1);
        groupBox_2->setLayoutDirection(Qt::LeftToRight);
        groupBox_2->setStyleSheet(QStringLiteral("color:white;"));
        groupBox_2->setTitle(QStringLiteral("   Doing   "));
        groupBox_2->setAlignment(Qt::AlignHCenter|Qt::AlignTop);
        groupBox_2->setFlat(false);
        horizontalLayout_2 = new QHBoxLayout(groupBox_2);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(12, 5, 12, 5);
        txt_doing = new QPlainTextEdit(groupBox_2);
        txt_doing->setObjectName(QStringLiteral("txt_doing"));
        txt_doing->setMaximumSize(QSize(16777215, 16777215));
        txt_doing->setFont(font3);
        txt_doing->viewport()->setProperty("cursor", QVariant(QCursor(Qt::IBeamCursor)));
        txt_doing->setStyleSheet(QStringLiteral("color:white;border-radius:0;"));

        horizontalLayout_2->addWidget(txt_doing);


        verticalLayout->addWidget(groupBox_2);

        groupBox_3 = new QGroupBox(page_today);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setFont(font1);
        groupBox_3->setStyleSheet(QStringLiteral("color:white;"));
        groupBox_3->setTitle(QStringLiteral("   Waiting   "));
        groupBox_3->setAlignment(Qt::AlignCenter);
        groupBox_3->setFlat(false);
        horizontalLayout_3 = new QHBoxLayout(groupBox_3);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(12, 5, 12, 5);
        txt_waiting = new QPlainTextEdit(groupBox_3);
        txt_waiting->setObjectName(QStringLiteral("txt_waiting"));
        txt_waiting->setMaximumSize(QSize(16777215, 16777215));
        txt_waiting->setFont(font3);
        txt_waiting->viewport()->setProperty("cursor", QVariant(QCursor(Qt::IBeamCursor)));
        txt_waiting->setStyleSheet(QStringLiteral("color:white;border-radius:0;"));

        horizontalLayout_3->addWidget(txt_waiting);


        verticalLayout->addWidget(groupBox_3);


        horizontalLayout->addLayout(verticalLayout);

        groupBox = new QGroupBox(page_today);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setFont(font1);
        groupBox->setStyleSheet(QStringLiteral("color:white;"));
        groupBox->setTitle(QStringLiteral("   Done   "));
        groupBox->setAlignment(Qt::AlignCenter);
        groupBox->setFlat(false);
        verticalLayout_5 = new QVBoxLayout(groupBox);
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(5, 5, 5, 5);
        toolBox = new QToolBox(groupBox);
        toolBox->setObjectName(QStringLiteral("toolBox"));
        QFont font4;
        font4.setFamily(QStringLiteral("Calibri"));
        font4.setPointSize(14);
        font4.setBold(false);
        font4.setUnderline(true);
        font4.setWeight(50);
        toolBox->setFont(font4);
        toolBox->setCursor(QCursor(Qt::ArrowCursor));
        toolBox->setMouseTracking(false);
        toolBox->setStyleSheet(QStringLiteral("QToolBox::tab { border:0;}"));
        toolBox->setFrameShape(QFrame::NoFrame);
        toolBox->setFrameShadow(QFrame::Plain);
        toolBox->setLineWidth(0);
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        page->setGeometry(QRect(0, 0, 346, 476));
        horizontalLayout_8 = new QHBoxLayout(page);
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        txt_done_today = new QPlainTextEdit(page);
        txt_done_today->setObjectName(QStringLiteral("txt_done_today"));
        txt_done_today->setMaximumSize(QSize(16777215, 16777215));
        txt_done_today->setFont(font3);
        txt_done_today->viewport()->setProperty("cursor", QVariant(QCursor(Qt::IBeamCursor)));
        txt_done_today->setStyleSheet(QStringLiteral("color:white;border-radius:0;"));

        horizontalLayout_8->addWidget(txt_done_today);

        toolBox->addItem(page, QStringLiteral("Today:"));
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        page_2->setGeometry(QRect(0, 0, 346, 476));
        verticalLayout_4 = new QVBoxLayout(page_2);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        txt_done = new QPlainTextEdit(page_2);
        txt_done->setObjectName(QStringLiteral("txt_done"));
        txt_done->setMaximumSize(QSize(16777215, 16777215));
        txt_done->setFont(font3);
        txt_done->viewport()->setProperty("cursor", QVariant(QCursor(Qt::IBeamCursor)));
        txt_done->setStyleSheet(QStringLiteral("color:white;border-radius:0;"));

        verticalLayout_4->addWidget(txt_done);

        toolBox->addItem(page_2, QStringLiteral("Past:"));

        verticalLayout_5->addWidget(toolBox);


        horizontalLayout->addWidget(groupBox);


        verticalLayout_11->addLayout(horizontalLayout);

        groupBox_6 = new QGroupBox(page_today);
        groupBox_6->setObjectName(QStringLiteral("groupBox_6"));
        groupBox_6->setMaximumSize(QSize(16777215, 100));
        groupBox_6->setFont(font1);
        groupBox_6->setStyleSheet(QStringLiteral("color:white;"));
        groupBox_6->setTitle(QStringLiteral(""));
        groupBox_6->setAlignment(Qt::AlignCenter);
        groupBox_6->setFlat(false);
        verticalLayout_7 = new QVBoxLayout(groupBox_6);
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setContentsMargins(11, 11, 11, 11);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(5, 5, 5, 5);
        txt_reminder = new QPlainTextEdit(groupBox_6);
        txt_reminder->setObjectName(QStringLiteral("txt_reminder"));
        txt_reminder->setMaximumSize(QSize(16777215, 16777215));
        txt_reminder->setFont(font3);
        txt_reminder->viewport()->setProperty("cursor", QVariant(QCursor(Qt::IBeamCursor)));
        txt_reminder->setStyleSheet(QStringLiteral("color:white;border-radius:0;"));

        verticalLayout_7->addWidget(txt_reminder);


        verticalLayout_11->addWidget(groupBox_6);

        stackedWidget->addWidget(page_today);
        page_notes = new QWidget();
        page_notes->setObjectName(QStringLiteral("page_notes"));
        verticalLayout_12 = new QVBoxLayout(page_notes);
        verticalLayout_12->setSpacing(6);
        verticalLayout_12->setContentsMargins(11, 11, 11, 11);
        verticalLayout_12->setObjectName(QStringLiteral("verticalLayout_12"));
        groupBox_5 = new QGroupBox(page_notes);
        groupBox_5->setObjectName(QStringLiteral("groupBox_5"));
        groupBox_5->setMaximumSize(QSize(16777215, 16777215));
        groupBox_5->setFont(font1);
        groupBox_5->setStyleSheet(QStringLiteral("color:white; border:0;"));
        groupBox_5->setTitle(QStringLiteral(""));
        groupBox_5->setAlignment(Qt::AlignCenter);
        groupBox_5->setFlat(false);
        verticalLayout_3 = new QVBoxLayout(groupBox_5);
        verticalLayout_3->setSpacing(5);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(5, 5, 5, 5);
        txt_notes = new QPlainTextEdit(groupBox_5);
        txt_notes->setObjectName(QStringLiteral("txt_notes"));
        txt_notes->setMaximumSize(QSize(16777215, 16777215));
        txt_notes->setFont(font3);
        txt_notes->viewport()->setProperty("cursor", QVariant(QCursor(Qt::IBeamCursor)));
        txt_notes->setLayoutDirection(Qt::LeftToRight);
        txt_notes->setStyleSheet(QStringLiteral("color:white;border-radius:0;"));

        verticalLayout_3->addWidget(txt_notes);


        verticalLayout_12->addWidget(groupBox_5);

        stackedWidget->addWidget(page_notes);

        horizontalLayout_4->addWidget(stackedWidget);

        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(0);
        toolBox_2->setCurrentIndex(0);
        toolBox_2->layout()->setSpacing(0);
        toolBox->setCurrentIndex(0);
        toolBox->layout()->setSpacing(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Minimalist Kanban Board [ESC: screen size] [CTRL+TAB: view] [CTRL+S: save] Auto-save every 30mins", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        MainWindow->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        MainWindow->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_ACCESSIBILITY
        MainWindow->setAccessibleDescription(QString());
#endif // QT_NO_ACCESSIBILITY
        txt_todo_today->setPlainText(QString());
        toolBox_2->setItemText(toolBox_2->indexOf(page_3), QApplication::translate("MainWindow", "This Week:", Q_NULLPTR));
        toolBox_2->setItemText(toolBox_2->indexOf(page_4), QApplication::translate("MainWindow", "Future:", Q_NULLPTR));
        txt_done_today->setPlainText(QString());
        toolBox->setItemText(toolBox->indexOf(page), QApplication::translate("MainWindow", "Today:", Q_NULLPTR));
        toolBox->setItemText(toolBox->indexOf(page_2), QApplication::translate("MainWindow", "Past:", Q_NULLPTR));
        txt_reminder->setPlainText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
