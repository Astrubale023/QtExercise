#include <QCoreApplication>
#include <QDebug>

// Define the Person class
class Person {
public:
    virtual ~Person() {}  // Virtual destructor for proper cleanup in derived classes
    virtual void printInfo() const {
        qDebug() << "Person info not available.";
    }
};

// Define the Student class inheriting from Person
class Student : public Person {
private:
    QString name;
    int age;
    QString university;

public:
    // Constructor to initialize name, age, and university
    Student(const QString &n, int a, const QString &u) : name(n), age(a), university(u) {}

    // Override printInfo method to include university details
    void printInfo() const override {
        qDebug() << "Name:" << name << ", Age:" << age << ", University:" << university;
    }
};

// Function to display info using the passed Person pointer
void displayInfo(Person *person) {
    person->printInfo();
}

int main(int argc, char *argv[]) {
    QCoreApplication app(argc, argv);

    // Create a Person object
    Person person;

    // Create a Student object
    Student student("Alice", 20, "University of Example");

    // Call displayInfo for each object
    displayInfo(&person);
    displayInfo(&student);

    return app.exec();
}
