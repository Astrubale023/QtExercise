#include "MessageWidget.h"
#include <QVBoxLayout>
#include <QDebug>

MessageWidget::MessageWidget(QWidget *parent) : QWidget(parent) {
    // TODO: Create label, line edit (text input), and button
    QLabel *label = new QLabel("Placeholder");
    QLineEdit *lineEdit = new QLineEdit();
    QPushButton *button = new QPushButton("Update");

    // TODO: Create a vertical layout
    QVBoxLayout *layout = new QVBoxLayout(this);

    // TODO: Add widgets to the layout
    layout->addWidget(label);
    layout->addWidget(lineEdit);
    layout->addWidget(button);

    // OPTIONAL: Set the layout for the widget
    setLayout(layout);

    // TODO: Connect the button's clicked signal to the updateLabel slot
    connect(button, &QPushButton::pressed, this, &MessageWidget::updateLabel);
}

void MessageWidget::updateLabel() {
    // TODO: Get the text from lineEdit and set it as the label text
    qDebug() << "Label text before update:" << label->text();
    label->setText(lineEdit->text());
    qDebug() << "Label text after update:" << label->text();
}
