#include<iostream>
using namespace std;
class Car{
    public:
    string brand;
    string model;
    int year;

    Car(string b , string m , int y){
        brand = b;
        model= m;
        year = y;
        cout<<"This is a "<<brand<< "car , model "<< model <<" released in the year "<< year <<endl;
    }

    ~Car(){
        cout<<"destructor called for "<< brand <<endl;
    } 

};
int main(){
    Car c1("bmw","s",2021);

    return 0;
}