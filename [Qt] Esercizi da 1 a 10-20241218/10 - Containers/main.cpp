#include <QCoreApplication>
#include <QList>
#include <QDebug>

// Define the Person class from previous exercises
class Person {
private:
    QString name;
    int age;

public:
    // Constructor to initialize name and age
    Person(const QString &n, int a) : name(n), age(a) {}

    // Print the person's details
    void printInfo() const {
        qDebug() << "Name:" << name << ", Age:" << age;
    }

    // Getter for the name (for comparison purposes)
    QString getName() const {
        return name;
    }
};

int main(int argc, char *argv[]) {
    QCoreApplication app(argc, argv);

    // Create a QList to store Person objects
    QList<Person> personList;

    // Add a few Person objects to the list
    personList.append(Person("Alice", 25));
    personList.append(Person("Bob", 30));
    personList.append(Person("Charlie", 22));

    // Display all Person objects in the list
    qDebug() << "List of persons:";
    for (const Person &person : personList) {
        person.printInfo();
    }

    // Remove a Person object from the list (e.g., removing "Bob")
    int indexToRemove = -1;
    for (int i = 0; i < personList.size(); ++i) {
        if (personList[i].getName() == "Bob") { // Use the name getter for comparison
            indexToRemove = i;
            break;
        }
    }
    if (indexToRemove != -1) {
        personList.removeAt(indexToRemove);
    }

    // Display the updated list
    qDebug() << "\nUpdated list of persons:";
    for (const Person &person : personList) {
        person.printInfo();
    }

    return app.exec();
}
