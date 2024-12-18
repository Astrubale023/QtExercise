#include "CounterWidgetComposition.h"
#include <QVBoxLayout>

CounterWidgetComposition::CounterWidgetComposition(QWidget *parent)
    : QWidget(parent), counter(0) {
    // TODO: Initialize the button with a suitable label (e.g., "Increment")
    button = new QPushButton("+1");

    // TODO: Initialize the label with the initial counter value (e.g., "Count: 0")
    label = new QLabel("Counter: " + QString::number(counter));
    
    // TODO: Create a QVBoxLayout and add the label and button to it
    QVBoxLayout *layout = new QVBoxLayout();
    layout->addWidget(label);
    layout->addWidget(button);
    setLayout(layout);
    
    // TODO: Connect the button's clicked signal to the incrementCounter slot
    connect(button, &QPushButton::pressed, this, &CounterWidgetComposition::incrementCounter);
}

void CounterWidgetComposition::incrementCounter() {
    // TODO: Increment the counter and update the label's text
    label->setText("Counter: " + QString::number(++counter));
}
