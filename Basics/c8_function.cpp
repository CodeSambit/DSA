#include<iostream>
using namespace std;

void sum(int a , int b){
    a++;
    b++;
    cout<<(a+b);
}

int main(){
    int a = 25,b= 20;
    sum(a,b);
    cout<<a << b;
    return 0;
}