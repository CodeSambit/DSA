#include <iostream>
using namespace std;

class Print {
public:
    // Overloaded function to print an integer
    void display(int i) {
        cout << "Integer: " << i << endl;
    }

    // Overloaded function to print a float
    void display(float f) {
        cout << "Float: " << f << endl;
    }

    // Overloaded function to print a string
    void display(string s) {
        cout << "String: " << s << endl;
    }
};

int main() {
    Print obj;
    obj.display(10);        // Calls the integer version
    obj.display(3.14f);     // Calls the float version
    obj.display("Hello");   // Calls the string version
    return 0;
}
