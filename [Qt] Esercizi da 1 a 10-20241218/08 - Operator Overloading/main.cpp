#include <QCoreApplication>
#include <QDebug>

// Define the Person class
class Person {
private:
    QString name;
    int age;

public:
    // Constructor to initialize name and age
    Person(const QString &n, int a) : name(n), age(a) {}

    // Overload the == operator to compare two Person objects
    bool operator==(const Person &other) const {
        return (name == other.name && age == other.age);
    }

    // Overload the + operator to return the sum of ages of two Person objects
    int operator+(const Person &other) const {
        return age + other.age;
    }

    // Print the person's details
    void printInfo() const {
        qDebug() << "Name:" << name << ", Age:" << age;
    }
};

int main(int argc, char *argv[]) {
    QCoreApplication app(argc, argv);

    // Create two Person objects
    Person person1("Alice", 25);
    Person person2("Bob", 30);

    // Use the == operator to compare the two objects
    bool areEqual = (person1 == person2);
    qDebug() << "Are the two persons equal?" << (areEqual ? "Yes" : "No");

    // Use the + operator to calculate the combined age of the two objects
    int combinedAge = person1 + person2;
    qDebug() << "Combined age of the two persons:" << combinedAge;

    return app.exec();
}
