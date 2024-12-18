#include <QApplication>
#include <QTabWidget>
#include "CounterButtonInheritance.h"
#include "CounterWidgetComposition.h"

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);

    QTabWidget tabWidget;

    // TODO: Create an instance of CounterButtonInheritance and add it to the first tab
    CounterButtonInheritance *buttonI = new CounterButtonInheritance();
    tabWidget.addTab(buttonI, "Inheritance");
    // TODO: Create an instance of CounterWidgetComposition and add it to the second tab
    CounterWidgetComposition *buttonC = new CounterWidgetComposition();
    tabWidget.addTab(buttonC, "Composition");

    tabWidget.show();

    return app.exec();
}
