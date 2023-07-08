/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
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
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout_5;
    QGroupBox *gB_BINCAR;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *lE_FileLoad;
    QPushButton *pB_Load;
    QGroupBox *gB_MemSize;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QRadioButton *rB_auto;
    QRadioButton *rB_128;
    QRadioButton *rB_256;
    QRadioButton *rB_512;
    QGroupBox *gB_Flasher;
    QVBoxLayout *verticalLayout_3;
    QLineEdit *lE_FileSave;
    QPushButton *pB_Save;
    QGroupBox *gB_About;
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_Icon;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_name;
    QPushButton *pB_Exit;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(320, 480);
        MainWindow->setMinimumSize(QSize(0, 0));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        centralWidget->setEnabled(true);
        horizontalLayout_4 = new QHBoxLayout(centralWidget);
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        gB_BINCAR = new QGroupBox(centralWidget);
        gB_BINCAR->setObjectName(QStringLiteral("gB_BINCAR"));
        horizontalLayout_2 = new QHBoxLayout(gB_BINCAR);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        lE_FileLoad = new QLineEdit(gB_BINCAR);
        lE_FileLoad->setObjectName(QStringLiteral("lE_FileLoad"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lE_FileLoad->sizePolicy().hasHeightForWidth());
        lE_FileLoad->setSizePolicy(sizePolicy);
        lE_FileLoad->setReadOnly(true);

        verticalLayout_2->addWidget(lE_FileLoad);

        pB_Load = new QPushButton(gB_BINCAR);
        pB_Load->setObjectName(QStringLiteral("pB_Load"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pB_Load->sizePolicy().hasHeightForWidth());
        pB_Load->setSizePolicy(sizePolicy1);

        verticalLayout_2->addWidget(pB_Load);


        horizontalLayout_2->addLayout(verticalLayout_2);


        verticalLayout_5->addWidget(gB_BINCAR);

        gB_MemSize = new QGroupBox(centralWidget);
        gB_MemSize->setObjectName(QStringLiteral("gB_MemSize"));
        horizontalLayout = new QHBoxLayout(gB_MemSize);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        rB_auto = new QRadioButton(gB_MemSize);
        rB_auto->setObjectName(QStringLiteral("rB_auto"));
        rB_auto->setLayoutDirection(Qt::LeftToRight);
        rB_auto->setChecked(true);

        verticalLayout->addWidget(rB_auto);

        rB_128 = new QRadioButton(gB_MemSize);
        rB_128->setObjectName(QStringLiteral("rB_128"));

        verticalLayout->addWidget(rB_128);

        rB_256 = new QRadioButton(gB_MemSize);
        rB_256->setObjectName(QStringLiteral("rB_256"));

        verticalLayout->addWidget(rB_256);

        rB_512 = new QRadioButton(gB_MemSize);
        rB_512->setObjectName(QStringLiteral("rB_512"));

        verticalLayout->addWidget(rB_512);


        horizontalLayout->addLayout(verticalLayout);


        verticalLayout_5->addWidget(gB_MemSize);

        gB_Flasher = new QGroupBox(centralWidget);
        gB_Flasher->setObjectName(QStringLiteral("gB_Flasher"));
        verticalLayout_3 = new QVBoxLayout(gB_Flasher);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        lE_FileSave = new QLineEdit(gB_Flasher);
        lE_FileSave->setObjectName(QStringLiteral("lE_FileSave"));
        sizePolicy.setHeightForWidth(lE_FileSave->sizePolicy().hasHeightForWidth());
        lE_FileSave->setSizePolicy(sizePolicy);
        lE_FileSave->setReadOnly(true);

        verticalLayout_3->addWidget(lE_FileSave);

        pB_Save = new QPushButton(gB_Flasher);
        pB_Save->setObjectName(QStringLiteral("pB_Save"));
        sizePolicy1.setHeightForWidth(pB_Save->sizePolicy().hasHeightForWidth());
        pB_Save->setSizePolicy(sizePolicy1);

        verticalLayout_3->addWidget(pB_Save);


        verticalLayout_5->addWidget(gB_Flasher);

        gB_About = new QGroupBox(centralWidget);
        gB_About->setObjectName(QStringLiteral("gB_About"));
        verticalLayout_6 = new QVBoxLayout(gB_About);
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setContentsMargins(11, 11, 11, 11);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_Icon = new QLabel(gB_About);
        label_Icon->setObjectName(QStringLiteral("label_Icon"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Minimum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label_Icon->sizePolicy().hasHeightForWidth());
        label_Icon->setSizePolicy(sizePolicy2);
        label_Icon->setMinimumSize(QSize(64, 64));
        label_Icon->setMaximumSize(QSize(64, 64));
        label_Icon->setPixmap(QPixmap(QString::fromUtf8(":/qtFlashBuilder.png")));
        label_Icon->setScaledContents(true);
        label_Icon->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(label_Icon);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        label_name = new QLabel(gB_About);
        label_name->setObjectName(QStringLiteral("label_name"));
        label_name->setTextFormat(Qt::AutoText);
        label_name->setAlignment(Qt::AlignCenter);
        label_name->setTextInteractionFlags(Qt::NoTextInteraction);

        verticalLayout_4->addWidget(label_name);

        pB_Exit = new QPushButton(gB_About);
        pB_Exit->setObjectName(QStringLiteral("pB_Exit"));
        QSizePolicy sizePolicy3(QSizePolicy::MinimumExpanding, QSizePolicy::Minimum);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(pB_Exit->sizePolicy().hasHeightForWidth());
        pB_Exit->setSizePolicy(sizePolicy3);

        verticalLayout_4->addWidget(pB_Exit);


        horizontalLayout_3->addLayout(verticalLayout_4);


        verticalLayout_6->addLayout(horizontalLayout_3);


        verticalLayout_5->addWidget(gB_About);


        horizontalLayout_4->addLayout(verticalLayout_5);

        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "FlashBuilder", 0));
        gB_BINCAR->setTitle(QApplication::translate("MainWindow", "BIN / CAR File", 0));
        pB_Load->setText(QApplication::translate("MainWindow", "Load", 0));
        gB_MemSize->setTitle(QApplication::translate("MainWindow", "Memory Size", 0));
        rB_auto->setText(QApplication::translate("MainWindow", "Auto", 0));
        rB_128->setText(QApplication::translate("MainWindow", "128kB", 0));
        rB_256->setText(QApplication::translate("MainWindow", "256kB", 0));
        rB_512->setText(QApplication::translate("MainWindow", "512kB", 0));
        gB_Flasher->setTitle(QApplication::translate("MainWindow", "Flasher File", 0));
        pB_Save->setText(QApplication::translate("MainWindow", "Save XEX", 0));
        gB_About->setTitle(QApplication::translate("MainWindow", "About", 0));
        label_Icon->setText(QString());
        label_name->setText(QApplication::translate("MainWindow", "v0.1 (c)GienekP", 0));
        pB_Exit->setText(QApplication::translate("MainWindow", "Exit", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
