#include <QCoreApplication>
#include <QApplication>
#include "MyClass.h"

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);   // cambiato QCoreApplication in QApplication, altrimenti da core dump perchè non c'è QApplication'

    // Create an instance of MyClass
    MyClass myObject;

    // Show the button
    myObject.showButton();

    return app.exec();
}
