#include <iostream>
using namespace std;

// Base class with pure virtual function
class Shape {
public:
    // Pure virtual function
    virtual void draw() = 0;
};

// Derived class 1
class Circle : public Shape {
public:
    void draw() override {
        cout << "Drawing a Circle" << endl;
    }
};

// Derived class 2
class Square : public Shape {
public:
    void draw() override {
        cout << "Drawing a Square" << endl;
    }
};

int main() {
    // Shape is an abstract class, so we cannot create an object of Shape
    Shape* shape1;
    Circle c;
    Square s;

    shape1 = &c;
    shape1->draw();  // Calls Circle's draw()

    shape1 = &s;
    shape1->draw();  // Calls Square's draw()

    return 0;
}
