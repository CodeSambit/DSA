#include<iostream>
using namespace std;

int main(){
    int n , rev = 0;
    cout<<"Enter a no: ";
    cin>>n;
    int org = n;

    while(n!=0){
        int last = n%10;
        rev = rev*10 + last;
        n=n/10;
    }
    // cout
    cout<<"Original no is: "<<org<<endl;
    cout<<"Reversed no is: "<<rev<<endl;

    if(org == rev){
        cout<<"Palindrom"<<endl;
    }else{
        cout<<"not palindrom"<<endl;
    }

    return 0;
}