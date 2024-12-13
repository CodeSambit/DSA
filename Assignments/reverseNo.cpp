#include<iostream>
using namespace std;

int main(){
    int n , rev = 0;
    cout<<"Enter a no: ";
    cin>>n;

    while(n!=0){
        int last = n%10;
        rev = rev*10 + last;
        n=n/10;
    }
    
    cout<<"Reversed no is: "<<rev<<endl;

    return 0;
}