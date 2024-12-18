#include <QCoreApplication>
#include <QDebug>
#include <QTextStream>

int main(int argc, char *argv[]) {
    QCoreApplication app(argc, argv);

    // Create a QTextStream object for input and output
    QTextStream cin(stdin);
    QTextStream cout(stdout);

    // Prompt the user to enter a line of text
    cout << "Please enter a line of text: " << Qt::endl;

    // Read the user's input using QTextStream
    QString userInput = cin.readLine();

    // Echo the input back to the user
    cout << "You entered: " << userInput << Qt::endl;

    return app.exec();
}
