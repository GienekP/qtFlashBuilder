/*--------------------------------------------------------------------*/
#include "mainwindow.h"
#include "ui_mainwindow.h"
/*--------------------------------------------------------------------*/
#include "flashbuilder.c"
/*--------------------------------------------------------------------*/
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}
/*--------------------------------------------------------------------*/
MainWindow::~MainWindow()
{
    delete ui;
}
/*--------------------------------------------------------------------*/
void MainWindow::on_pB_Exit_clicked()
{
    this->close();
}
/*--------------------------------------------------------------------*/
void MainWindow::on_pB_Load_clicked()
{
    fileBINCAR=QFileDialog::getOpenFileName(this, tr("Open BIN/CAR"), "", tr("Images (*.bin *.rom *.car)"));
    if (fileBINCAR.length()>0)
    {
        ui->lE_FileLoad->setText(fileBINCAR);
    };
}
/*--------------------------------------------------------------------*/
void MainWindow::on_pB_Save_clicked()
{
    unsigned char mode=0;
    if (ui->rB_128->isChecked()) {mode=1;} else
    if (ui->rB_256->isChecked()) {mode=2;} else
    if (ui->rB_512->isChecked()) {mode=3;};
    fileXEX=QFileDialog::getSaveFileName(this, tr("Save XEX"), "", tr("XEX Files (*.xex)"));
    if (fileXEX.length()>0)
    {
        ui->lE_FileSave->setText(fileXEX);
        flashBuilder(fileBINCAR.toLocal8Bit(),fileXEX.toLocal8Bit(),mode);
    };
}
/*--------------------------------------------------------------------*/
