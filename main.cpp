/*--------------------------------------------------------------------*/
/* qtFlashBuilder                                                     */
/* by GienekP                                                         */
/* (c) 2023                                                           */
/*--------------------------------------------------------------------*/
#include "mainwindow.h"
#include <QApplication>
/*--------------------------------------------------------------------*/
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    a.setWindowIcon(QIcon(":qtFlashBuilder.png"));
    MainWindow w;
    w.show();
    return a.exec();
}
/*--------------------------------------------------------------------*/
