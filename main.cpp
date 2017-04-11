#include "mainwindow.h"


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    //bool t=true;


    a.processEvents();

    //---- Check for another instance code snippet ----

    //GUID : Generated once for your application: http://www.guidgenerator.com/online-guid-generator.aspx
    QSharedMemory shared("5f829de4-78ce-4e6a-8d7a-021622c694ce");

    if( !shared.create( 512, QSharedMemory::ReadWrite) ){
        // For a GUI application, replace this by :
        QMessageBox msgBox;
        msgBox.setText( QObject::tr("More than 1 instance of this application. Will run in read-only mode. Ctrl+S and all saving operations will be disabled.") );
        msgBox.setIcon( QMessageBox::Critical );
        msgBox.exec();

        //qWarning() << "Can't start more than one instance of the application.";

        //exit(0);
        w.runNormalOperation(false); //run read only
    }else{
        w.runNormalOperation(true);
    }

    //Run program

    a.setWindowIcon(QIcon(":/icon/Kanban_Board.ico"));
    w.setWindowFlags(Qt::WindowStaysOnBottomHint);
    w.show();
    return a.exec();
}
