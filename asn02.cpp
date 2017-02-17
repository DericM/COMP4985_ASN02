#include "asn02.h"
#include "ui_asn02.h"

Asn02::Asn02(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Asn02)
{
    ui->setupUi(this);
}

Asn02::~Asn02()
{
    delete ui;
}
