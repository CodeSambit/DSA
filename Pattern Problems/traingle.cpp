#include <iostream>

using namespace std;

int main() {
    
    int n = 4;
    for(int i = 0 ; i<n ; i++){
        for(int j = 0 ; j<i+1 ; j++){
            cout<<"* ";

        }
        cout<<endl;
    } 

    // * 
    // * * 
    // * * * 
    // * * * * 
    cout<<endl;

    for(int i = 0 ; i<n ; i++){
        for(int j = 0 ; j<i+1 ; j++){
            cout<<i+1<<" ";
        }
        cout<<endl;
    }

// 1
// 2 2
// 3 3 3
// 4 4 4 4

    cout<<endl;
    
    char ch = 'A';
    for(int i = 0; i<n ; i++){
        for(int j = 0 ; j < i+1 ; j++){
            cout<<ch<<" ";
        }
        cout<<endl;
        ch++;
    }


// A
// B B
// C C C
// D D D D   
    
    cout<<endl;

    for(int i = 0 ; i<n ; i++){
        for(int j = 0 ; j<i+1 ; j++){
            cout <<j+1<<" ";
        }
        cout<<endl;
    }

    return 0;
}