#include <iostream>

using namespace std;

int main() {
    int n = 4;

    for(int i = 0 ; i< n ; i++){
        for(int j = 0 ; j<(n-i) ; j++){
            cout<<"* ";
        }
        cout<<endl;
    }

    // * * * * 
    // * * *
    // * *
    // *


    for(int i = 0 ; i< n ; i++){
        for(int j = 0 ; j<(n-i) ; j++){
            cout<<(i+1);
        }
        cout<<endl;
    }

    // 1111
    // 222
    // 33
    // 4

    for(int i = 0 ; i< n ; i++){
        for(int j = 0 ; j<i ; j++){
            cout<<" ";
        }

        for(int j = 0 ; j<(n-i) ; j++){
            cout<<(i+1);
        }
        cout<<endl;
    }

    // 1111
    //  222
    //   33
    //    4

    for(int i = 0 ; i< n ; i++){
        for(int j = 0 ; j<i ; j++){
            cout<<" ";
        }

        for(int j = 0 ; j<(n-i) ; j++){
            cout<<(i+1)<<" ";
        }
        cout<<endl;
    }

    // 1 1 1 1
    //  2 2 2
    //   3 3
    //    4



    return 0;
}