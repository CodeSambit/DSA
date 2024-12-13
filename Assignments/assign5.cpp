#include<iostream>
using namespace std;

int main(){
    
    char c ;
    cout<<"Enter character : "<<endl;
    cin >> c ;

    if((c >= 'a' && c<= 'z') || (c >= 'a' && c<= 'z')){
        cout<< "it is a character";
    }else{
        cout<< "it is not a char";
    }

    return 0;
}