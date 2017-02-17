#include "asn02.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Asn02 w;
    w.show();

    return a.exec();
}
