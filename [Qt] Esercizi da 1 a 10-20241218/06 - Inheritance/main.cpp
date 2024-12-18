#include <QCoreApplication>
#include <QDebug>

// Define the Person class from previous exercises
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
    virtual void printInfo() const {
        qDebug() << "Name:" << name << ", Age:" << age;
    }
};

// Define the Student class inheriting from Person
class Student : public Person {
private:
    QString university;

public:
    // Constructor to initialize name, age, and university
    Student(const QString &n, int a, const QString &u) : Person(n, a), university(u) {}

    // Override printInfo method to display all details
    void printInfo() const override {
        Person::printInfo();
        qDebug() << "University:" << university;
    }
};

int main(int argc, char *argv[]) {
    QCoreApplication app(argc, argv);

    // Create a Student object
    Student student("Alice", 20, "University of Example");

    // Call the printInfo method to display the student's details
    student.printInfo();

    return app.exec();
}
