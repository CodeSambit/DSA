#include <iostream>
using namespace std;

// Base class
class Animal {
public:
    void sound() {
        cout << "Animal makes a sound" << endl;
    }
};

// Derived class
class Dog : public Animal {
public:
    void speak() {
        cout << "Dog barks" << endl;
    }
};

// Further derived class
class Puppy : public Dog {
public:
    void play() {
        cout << "Puppy plays" << endl;
    }
};

int main() {
    Puppy p;
    p.sound();  // From Animal
    p.speak();  // From Dog
    p.play();   // From Puppy
    return 0;
}
