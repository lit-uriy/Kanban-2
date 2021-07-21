#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    full_screen = false;
    program_running_normal_operation = true;
    //QMainWindow::showMaximized();

    //setWindowFlags(Qt::MSWindowsFixedSizeDialogHint); //Set window to fixed size
    //setWindowFlags(Qt::CustomizeWindowHint); //Set window with no title bar
    //setWindowFlags(Qt::FramelessWindowHint); //Set a frameless window


    // Remove text box border
    //ui->txt_doing->setFrameStyle(QFrame::NoFrame);
    //ui->txt_done->setFrameStyle(QFrame::NoFrame);
    //ui->txt_notes->setFrameStyle(QFrame::NoFrame);
    //ui->txt_todo->setFrameStyle(QFrame::NoFrame);
    //ui->txt_waiting->setFrameStyle(QFrame::NoFrame);
    //ui->txt_reminder->setFrameStyle(QFrame::NoFrame);
    //ui->txt_todo_today->setFrameStyle(QFrame::NoFrame);
    //ui->txt_done_today->setFrameStyle(QFrame::NoFrame);

    // Load information
    LoadLog();
    new QShortcut(QKeySequence(Qt::Key_Escape), this, SLOT(SwitchScreenSize())); // Switch between full screen
    new QShortcut(QKeySequence(Qt::CTRL + Qt::Key_S), this, SLOT(SaveLog())); // Save log
    current_tab_index=0;
    new QShortcut(QKeySequence(Qt::CTRL + Qt::Key_Tab), this, SLOT(SwitchView())); // Switch view

    // Scroll to the top
    ui->txt_doing->moveCursor(QTextCursor::Start);
    ui->txt_done->moveCursor(QTextCursor::Start);
    ui->txt_done_today->moveCursor(QTextCursor::Start);
    ui->txt_notes->moveCursor(QTextCursor::Start);
    ui->txt_todo->moveCursor(QTextCursor::Start);
    ui->txt_todo_today->moveCursor(QTextCursor::Start);
    ui->txt_waiting->moveCursor(QTextCursor::Start);
    ui->txt_reminder->moveCursor(QTextCursor::Start);
}

MainWindow::~MainWindow()
{
    delete ui;
}

/* runNormalOperation()
 * ------------------
 * Functions to set which mode the application will run in
 */
void MainWindow::runNormalOperation(bool normal_operation)
{
    if(normal_operation){
        SetUpAutoSave();
    }else{
        //Read only mode
        program_running_normal_operation = false;
        ui->txt_doing->setReadOnly(true);
        ui->txt_done->setReadOnly(true);
        ui->txt_notes->setReadOnly(true);
        ui->txt_todo->setReadOnly(true);
        ui->txt_waiting->setReadOnly(true);
        ui->txt_reminder->setReadOnly(true);
        ui->txt_todo_today->setReadOnly(true);
        ui->txt_done_today->setReadOnly(true);
    }
}

/* closeEvent()
 * ------------------
 * Functions to run during shut-down
 */
void MainWindow::closeEvent(QCloseEvent *bar)
{
    SaveLog();
    bar->accept();
}

/* SetUpAutoSave()
 * ------------------
 * Automatically save to-do list every 30 seconds
 */
void MainWindow::SetUpAutoSave(){
    auto_save_timer = new QTimer(this);
    connect(auto_save_timer, SIGNAL(timeout()), this, SLOT(SaveLog()));
    auto_save_timer->start(1800000); //time specified in ms
}

/* SwitchView()
 * ------------------
 * Change between planner and notes
 */
void MainWindow::SwitchView(){
    current_tab_index = (current_tab_index+1)%MAX_TABS;
    ui->stackedWidget->setCurrentIndex(current_tab_index);
    //ui->tab_schedule->setCurrentIndex(current_tab_index);
}


/* SwitchScreenSize()
 * ------------------
 * Change between full screen and not
 */
void MainWindow::SwitchScreenSize(){
    if(full_screen){
        QMainWindow::showNormal();
        full_screen = false;
    }else{
        QMainWindow::showFullScreen();
        full_screen = true;
    }
}

/* LoadLog()
 * ------------------
 * Load to-do list from last time
 */
void MainWindow::LoadLog(){
    QFile file;
    QString msg;
    msg = tr("Ошибка при открытии файла '%1'.\nПричина: %2");

    // --------------------------------
    file.setFileName("./data/todo_future.txt");
    if(file.open(QIODevice::ReadOnly)){
        QTextStream in(&file);
        ui->txt_todo->appendPlainText(in.readAll());
        file.close();
    }else{
        msg = msg.arg(QFileInfo(file).absoluteFilePath());
        msg = msg.arg(file.errorString());
        QMessageBox::information(0, "file error", msg);
    }

    // --------------------------------
    file.setFileName("./data/todo_thisWeek.txt");
    if(file.open(QIODevice::ReadOnly)){
        QTextStream in(&file);
        ui->txt_todo_today->appendPlainText(in.readAll());
        file.close();
    }else{
        msg = msg.arg(QFileInfo(file).absoluteFilePath());
        msg = msg.arg(file.errorString());
        QMessageBox::information(0, "file error", msg);
    }

    // --------------------------------
    file.setFileName("./data/doing.txt");
    if(file.open(QIODevice::ReadOnly)){
        QTextStream in(&file);
        ui->txt_doing->appendPlainText(in.readAll());
        file.close();
    }else{
        msg = msg.arg(QFileInfo(file).absoluteFilePath());
        msg = msg.arg(file.errorString());
        QMessageBox::information(0, "file error", msg);
    }

    // --------------------------------
    file.setFileName("./data/waiting.txt");
    if(file.open(QIODevice::ReadOnly)){
        QTextStream in(&file);
        ui->txt_waiting->appendPlainText(in.readAll());
        file.close();
    }else{
        msg = msg.arg(QFileInfo(file).absoluteFilePath());
        msg = msg.arg(file.errorString());
        QMessageBox::information(0, "file error", msg);
    }

    // --------------------------------
    file.setFileName("./data/done_history.txt");
    if(file.open(QIODevice::ReadOnly)){
        QTextStream in(&file);
        ui->txt_done->appendPlainText(in.readAll());
        file.close();
    }else{
        msg = msg.arg(QFileInfo(file).absoluteFilePath());
        msg = msg.arg(file.errorString());
        QMessageBox::information(0, "file error", msg);
    }


    // --------------------------------
    file.setFileName("./data/done_today.txt");
    if(file.open(QIODevice::ReadOnly)){
        QTextStream in(&file);
        ui->txt_done_today->appendPlainText(in.readAll());
        file.close();
    }else{
        msg = msg.arg(QFileInfo(file).absoluteFilePath());
        msg = msg.arg(file.errorString());
        QMessageBox::information(0, "file error", msg);
    }

    // --------------------------------
    file.setFileName("./data/notes.txt");
    if(file.open(QIODevice::ReadOnly)){
        QTextStream in(&file);
        ui->txt_notes->appendPlainText(in.readAll());
        file.close();
    }else{
        msg = msg.arg(QFileInfo(file).absoluteFilePath());
        msg = msg.arg(file.errorString());
        QMessageBox::information(0, "file error", msg);
    }

    // --------------------------------
    file.setFileName("./data/reminder.txt");
    if(file.open(QIODevice::ReadOnly)){
        QTextStream in(&file);
        ui->txt_reminder->appendPlainText(in.readAll());
        file.close();
    }else{
        msg = msg.arg(QFileInfo(file).absoluteFilePath());
        msg = msg.arg(file.errorString());
        QMessageBox::information(0, "file error", msg);
    }
}

/* SaveLog()
 * ------------------
 * Save to-do list
 */
void MainWindow::SaveLog(){

    if(!program_running_normal_operation)return; // don't save if not running in normal operation

    QFile file;

    // --------------------------------
    file.setFileName("./data/todo_future.txt");
    if(file.open(QIODevice::ReadWrite | QIODevice::Truncate | QIODevice::Text)){
        QTextStream stream( &file );
        stream << ui->txt_todo->toPlainText();
        file.close();
    }else{
        QMessageBox::information(0, "file error", file.errorString());
    }

    // --------------------------------
    file.setFileName("./data/todo_thisWeek.txt");
    if(file.open(QIODevice::ReadWrite | QIODevice::Truncate | QIODevice::Text)){
        QTextStream stream( &file );
        stream << ui->txt_todo_today->toPlainText();
        file.close();
    }else{
        QMessageBox::information(0, "file error", file.errorString());
    }

    // --------------------------------
    file.setFileName("./data/doing.txt");
    if(file.open(QIODevice::ReadWrite | QIODevice::Truncate | QIODevice::Text)){
        QTextStream stream( &file );
        stream << ui->txt_doing->toPlainText();
        file.close();
    }else{
        QMessageBox::information(0, "file error", file.errorString());
    }

    // --------------------------------
    file.setFileName("./data/waiting.txt");
    if(file.open(QIODevice::ReadWrite | QIODevice::Truncate | QIODevice::Text)){
        QTextStream stream( &file );
        stream << ui->txt_waiting->toPlainText();
        file.close();
    }else{
        QMessageBox::information(0, "file error", file.errorString());
    }

    // --------------------------------
    file.setFileName("./data/done_history.txt");
    if(file.open(QIODevice::ReadWrite | QIODevice::Truncate | QIODevice::Text)){
        QTextStream stream( &file );
        stream << ui->txt_done->toPlainText();
        file.close();
    }else{
        QMessageBox::information(0, "file error", file.errorString());
    }

    // --------------------------------
    file.setFileName("./data/done_today.txt");
    if(file.open(QIODevice::ReadWrite | QIODevice::Truncate | QIODevice::Text)){
        QTextStream stream( &file );
        stream << ui->txt_done_today->toPlainText();
        file.close();
    }else{
        QMessageBox::information(0, "file error", file.errorString());
    }

    // --------------------------------
    file.setFileName("./data/notes.txt");
    if(file.open(QIODevice::ReadWrite | QIODevice::Truncate | QIODevice::Text)){
        QTextStream stream( &file );
        stream << ui->txt_notes->toPlainText();
        file.close();
    }else{
        QMessageBox::information(0, "file error", file.errorString());
    }

    // --------------------------------
    file.setFileName("./data/reminder.txt");
    if(file.open(QIODevice::ReadWrite | QIODevice::Truncate | QIODevice::Text)){
        QTextStream stream( &file );
        stream << ui->txt_reminder->toPlainText();
        file.close();
    }else{
        QMessageBox::information(0, "file error", file.errorString());
    }

    qDebug("Saved");
}
