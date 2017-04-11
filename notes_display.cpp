#include "notes_display.h"
#include "ui_notes_display.h"

Notes_display::Notes_display(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Notes_display)
{
    ui->setupUi(this);
}

Notes_display::~Notes_display()
{
    delete ui;
}
