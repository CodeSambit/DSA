#include <iostream>

using namespace std;

int main() {
    int n = 5;

    for(int i = 0 ; i<n ; i++){
        for(int j = 0 ; j < (n-i) ; j++){
            cout<<"  ";
        }

        for(int j = 0 ; j<(i+1); j++){
            cout<<j+1<<" ";
        }

        if(i>0){
            for(int j = (i+1) ; j > 1 ; j--){
                cout<<j-1<<" ";
            }
        }
        cout<<endl;
    }

    return 0;
}