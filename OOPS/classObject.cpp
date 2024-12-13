#include<iostream>
using namespace std;

class Student{
    public:
    string name;
    int age;
    char grade;

    void displayInfo(){
        cout <<"name is " << name << " his age is " << age << " and he has grade of " << grade << endl;
    }
    
};

int main(){
  Student s1;
  s1.name = "sambit";
  s1.age = 21;
  s1.grade = 'B';

  s1.displayInfo();  
  return 0;
}