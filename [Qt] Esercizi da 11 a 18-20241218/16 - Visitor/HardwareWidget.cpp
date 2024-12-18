#include "HardwareWidget.h"
#include "Storage.h"
#include "Cpu.h"
#include <QLabel>
#include <QVBoxLayout>

QWidget* HardwareWidget::getWidget() {
    return widget;
}

void HardwareWidget::visit(Storage *storage) {
    // TODO: Build a widget suitable to display a storage
    widget = new QWidget();
    QLabel *nameLabel = new QLabel("Name: " + storage->getName(), widget);
    QLabel *capacityLabel = new QLabel("Capacity: " + QString::number(storage->getCapacity()), widget);
    QLabel *costLabel = new QLabel("Cost per Byte: " + QString::number(storage->getCostPerByte()), widget);
    QLabel *priceLabel = new QLabel("Price: " + QString::number(storage->getPrice()), widget);

    QVBoxLayout *layout = new QVBoxLayout(widget);
    layout->addWidget(nameLabel);
    layout->addWidget(capacityLabel);
    layout->addWidget(costLabel);
    layout->addWidget(priceLabel);

    widget->setLayout(layout);
}

void HardwareWidget::visit(Cpu *cpu) {
    // TODO: Build a widget suitable to display a CPU
    widget = new QWidget();
    QLabel *nameLabel = new QLabel("Name: " + cpu->getName(), widget);
    QLabel *frequencyLabel = new QLabel("Frequency: " + QString::number(cpu->getFrequency()), widget);
    QLabel *priceLabel = new QLabel("Price: " + QString::number(cpu->getPrice()), widget);


    QVBoxLayout *layout = new QVBoxLayout(widget);
    layout->addWidget(nameLabel);
    layout->addWidget(frequencyLabel);
    layout->addWidget(priceLabel);

    widget->setLayout(layout);
}
