#include <QCoreApplication>
#include <QFile>
#include <QTextStream>
#include <QDebug>

int main(int argc, char *argv[]) {
    QCoreApplication app(argc, argv);

    // Open a file for reading
    QFile inputFile("input.txt");
    if (!inputFile.open(QIODevice::ReadOnly | QIODevice::Text)) {
        qDebug() << "Error opening input file";
        return 1;
    }

    QTextStream in(&inputFile);
    while (!in.atEnd()) {
        QString line = in.readLine();
        qDebug() << "Read line:" << line;
        // Process the line here if needed
    }

    inputFile.close();

    // Open a new file for writing
    QFile outputFile("output.txt");
    if (!outputFile.open(QIODevice::WriteOnly | QIODevice::Text)) {
        qDebug() << "Error opening output file";
        return 1;
    }

    QTextStream out(&outputFile);
    out << "Processed data goes here.\n";  // Write some data to the file
    outputFile.close();

    return app.exec();
}
