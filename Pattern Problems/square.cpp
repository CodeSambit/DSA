#include<iostream>
using namespace std;

int main(){
    // cout<<"Hello";
    int n = 4;
    for(int i = 0; i<n ; i++ ){
        for(int j = 0 ; j<n ; j++){
            cout<<"* ";
        }
        cout<<""<<endl;
    }
    
    cout<<" "<<endl;

    for(int i = 0; i<n ; i++ ){
        for(int j = 1 ; j<=n ; j++){
            cout<<j<<" ";
        }
        cout<<""<<endl;
    }

    cout<<" "<<endl;
    

    for(int i = 0; i<n ; i++){
        char ch = 'A';
        for(int j = 0 ; j<n ; j++){
            cout<<ch<<" ";
            ch++;

        }
        cout<<""<<endl;

    }

    cout<<" "<<endl;
    

    n = 3;
    int k = 1;
    for(int i = 0; i<n ; i++ ){
        for(int j = 1 ; j<=n ; j++){
            cout<<k<<" ";
            k++;
        }
        cout<<""<<endl;
    }

    cout<<""<<endl;
    



}