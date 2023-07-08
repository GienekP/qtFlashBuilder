/*--------------------------------------------------------------------*/
#ifndef MAINWINDOW_H
#define MAINWINDOW_H
/*--------------------------------------------------------------------*/
#include <QMainWindow>
#include <QFileDialog>
/*--------------------------------------------------------------------*/
namespace Ui {
class MainWindow;
}
/*--------------------------------------------------------------------*/
class MainWindow : public QMainWindow
{
    Q_OBJECT
    QString fileBINCAR;
    QString fileXEX;

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_pB_Exit_clicked();
    void on_pB_Load_clicked();
    void on_pB_Save_clicked();

private:
    Ui::MainWindow *ui;
};
/*--------------------------------------------------------------------*/
#endif // MAINWINDOW_H
/*--------------------------------------------------------------------*/
