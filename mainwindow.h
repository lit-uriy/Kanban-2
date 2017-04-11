#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#define MAX_TABS 2 // Number of tabs in mainwindow.ui

#include <QApplication>
#include <QStyleFactory>
#include <QMainWindow>
#include <QShortcut>
#include <QTextStream>
#include <QMessageBox>
#include <QFile>
#include <QDir>
#include <QTimer>
#include <QScrollBar>
#include <QSharedMemory>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    void runNormalOperation(bool normal_operation);
    ~MainWindow();

private slots:
    void SwitchScreenSize();
    void SaveLog();
    void SwitchView();

private:
    Ui::MainWindow *ui;
    bool full_screen;
    QTimer *auto_save_timer;
    void LoadLog();
    void SetUpAutoSave();
    void closeEvent(QCloseEvent *bar);
    int current_tab_index;
    bool program_running_normal_operation;

};

#endif // MAINWINDOW_H
