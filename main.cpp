#include "cuestionario.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    a.setStyle("fusion");
    Cuestionario w;
    w.show();
    return a.exec();
}
