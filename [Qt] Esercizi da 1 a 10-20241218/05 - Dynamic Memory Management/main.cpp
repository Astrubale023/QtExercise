#include <QCoreApplication>
#include <QDebug>

// Define the Person class from the previous exercise
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

    // Dynamically create a Person object using the constructor
    Person *person = new Person("John Doe", 30);

    // Call the printInfo method to display the person's details
    person->printInfo();

    // Deallocate the memory used by the Person object
    delete person;

    return app.exec();
}
