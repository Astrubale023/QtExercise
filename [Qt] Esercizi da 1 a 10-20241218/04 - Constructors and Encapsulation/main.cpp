#include <QCoreApplication>
#include <QDebug>

// TODO: Define the Person class
// The class should have:
// - A private attribute `name` (QString)
// - A private attribute `age` (int)
// - A public constructor that initializes `name` and `age`
// - A public method `getName` that returns the name
// - A public method `getAge` that returns the age
// - A public method `printInfo` to display the person's details using qDebug()
class Person {
private:
    QString name;
    int age;

public:
    // Public constructor to initialize name and age
    Person(const QString &n, int a) : name(n), age(a) {}

    // Public method to get the name
    QString getName() const {
        return name;
    }

    // Public method to get the age
    int getAge() const {
        return age;
    }

    // Public method to print the person's details
    void printInfo() const {
        qDebug() << "Name:" << name << ", Age:" << age;
    }
};

int main(int argc, char *argv[]) {
    QCoreApplication app(argc, argv);

    // TODO: Create a Person object using the constructor
    Person person("Jane Doe", 25);
    // TODO: Display the person's details by calling `printInfo`
    person.printInfo();

    return app.exec();
}
