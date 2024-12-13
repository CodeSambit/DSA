#include <iostream>
using namespace std;

// Base class
class Animal {
public:
    void sound() {
        cout << "Animal makes a sound" << endl;
    }
};

// First derived class
class Dog : public Animal {
public:
    void speak() {
        cout << "Dog barks" << endl;
    }
};

// Second derived class
class Cat : public Animal {
public:
    void speak() {
        cout << "Cat meows" << endl;
    }
};

int main() {
    Dog d;
    d.sound();  // From Animal
    d.speak();  // From Dog
    
    Cat c;
    c.sound();  // From Animal
    c.speak();  // From Cat
    
    return 0;
}
