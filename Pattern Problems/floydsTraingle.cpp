#include <iostream>

using namespace std;

int main() {
    int n = 4;

    int k = 1;
    for(int i = 0 ; i<n ; i++){
        for(int j = 0 ; j<i+1 ; j++){
           cout<<k<<" ";
           k++;
        }
        cout<<endl;
    }

    cout<<endl;

    char ch = 'A';
    for(int i = 0 ; i<n ; i++){
        for(int j = 0 ; j<i+1 ; j++){
           cout<<ch<<" ";
           ch++;
        }
        cout<<endl;
    }
    

    return 0;
}