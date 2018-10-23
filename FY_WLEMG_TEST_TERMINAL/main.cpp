#include "fy_wlemg_test_terminal.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    FY_WLEMG_TEST_TERMINAL w;
    w.show();

    return a.exec();
}
