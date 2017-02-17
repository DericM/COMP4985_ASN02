#ifndef ASN02_H
#define ASN02_H

#include <QMainWindow>

namespace Ui {
class Asn02;
}

class Asn02 : public QMainWindow
{
    Q_OBJECT

public:
    explicit Asn02(QWidget *parent = 0);
    ~Asn02();

private:
    Ui::Asn02 *ui;
};

#endif // ASN02_H
