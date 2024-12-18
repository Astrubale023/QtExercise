#include "ImageViewer.h"
#include <QVBoxLayout>
#include <QPixmap>

ImageViewer::ImageViewer(QWidget *parent)
    : QWidget(parent), currentImage(":/images/image1.png") { // Initial image
    imageLabel = new QLabel(this);

    QVBoxLayout *layout = new QVBoxLayout;
    layout->addWidget(imageLabel);
    setLayout(layout);

    // TODO: Set the initial image on the label
    // Hint: Use QPixmap and QLabel::setPixmap()
    QPixmap image(currentImage);
    imageLabel->setPixmap(image);
}

void ImageViewer::keyPressEvent(QKeyEvent *event) {
    // TODO: Check if the Ctrl+T keyboard shortcut is pressed
    // If pressed, toggle between "image1.png" and "image2.png"
    // Hint: Use QKeyEvent::modifiers() and QKeyEvent::key()
    if (event->key() == Qt::Key_T && event->modifiers() & Qt::ControlModifier) {
        if (currentImage == QString(":/images/image1.png")) {
            currentImage = QString(":/images/image2.png");
        } else {
            currentImage = QString(":/images/image1.png");
        }

        QPixmap image(currentImage);
        imageLabel->setPixmap(currentImage);
    } else {
        QWidget::keyPressEvent(event);
    }
}
