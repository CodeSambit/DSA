#include <iostream>
using namespace std;

// First base class
class Animal {
public:
    void sound() {
        cout << "Animal makes a sound" << endl;
    }
};

// Second base class
class Bird {
public:
    void fly() {
        cout << "Bird can fly" << endl;
    }
};

// Derived class
class Bat : public Animal, public Bird {
public:
    void speak() {
        cout << "Bat can screech" << endl;
    }
};

int main() {
    Bat b;
    b.sound();  // From Animal
    b.fly();    // From Bird
    b.speak();  // From Bat
    return 0;
}
