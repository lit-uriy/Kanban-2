#ifndef NOTES_DISPLAY_H
#define NOTES_DISPLAY_H

#include <QDialog>

namespace Ui {
class Notes_display;
}

class Notes_display : public QDialog
{
    Q_OBJECT

public:
    explicit Notes_display(QWidget *parent = 0);
    ~Notes_display();

private:
    Ui::Notes_display *ui;
};

#endif // NOTES_DISPLAY_H
