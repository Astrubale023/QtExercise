#include <QCoreApplication>
#include <QDebug>

// TODO: Define the Person class
// The class should have:
// - A private attribute `name` (QString)
// - A private attribute `age` (int)
// - A public method `setName` to set the name
// - A public method `setAge` to set the age
// - A public method `printInfo` to display the person's details using qDebug()
class Person {
private:
    QString name;
    int age;

public:
    // Method to set the name
    void setName(const QString &n) {
        name = n;
    }

    // Method to set the age
    void setAge(int a) {
        age = a;
    }

    // Method to print the person's details
    void printInfo() const {
        qDebug() << "Name:" << name << ", Age:" << age;
    }
};

int main(int argc, char *argv[]) {
    QCoreApplication app(argc, argv);

    // TODO: Create a Person object
    Person person;

    // TODO: Set the person's name and age using the class methods
    person.setName("Nicola");
    person.setAge(20);

    // TODO: Call the `printInfo` method to display the details
    person.printInfo();

    return app.exec();
}
