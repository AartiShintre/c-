#include <iostream>
using namespace std;

class Car {
private:
    string model;
    int year;

public:
    // Parameterized constructor
    Car(string m, int y) {
        model = m;
        year = y;
        cout << "Constructor: Car " << model << " (" << year << ") created." << endl;
    }

    // Copy constructor
    Car(const Car& c) {
        model = c.model;
        year = c.year;
        cout << "Copy Constructor: Car " << model << " (" << year << ") copied." << endl;
    }

    // Destructor
    ~Car() {
        cout << "Destructor: Car " << model << " (" << year << ") destroyed." << endl;
    }

    void display() {
        cout << "Car Model: " << model << ", Year: " << year << endl;
    }
};

int main() {
    Car car1("Toyota", 2020);
    Car car2 = car1;  // Copy constructor is called
    car1.display();
    car2.display();
    return 0;
}

