#include<iostream>
using namespace std;

int main(){
    int phy, che, bio ,math, com;
    
    cout<<"Enter the mark of phy"<<endl;
    cin>>phy;
    cout<<"Enter the mark of che"<<endl;
    cin>>che;
    cout<<"Enter the mark of bio"<<endl;
    cin>>bio;
    cout<<"Enter the mark of math"<<endl;
    cin>>math;
    cout<<"Enter the mark of comp"<<endl;
    cin>>com;

    int marks = ((phy+che+bio+math+com)/5);

    if(marks >= 90){
        cout<<"U got "<< marks << " percentage which is equivalent to Grade A" <<endl;
    }else if(marks >= 80){
        cout<<"U got "<< marks << " percentage which is equivalent to Grade B" <<endl;
    }else if(marks >= 70){
        cout<<"U got "<< marks << " percentage which is equivalent to Grade C" <<endl;
    }else if(marks >= 60){
        cout<<"U got "<< marks << " percentage which is equivalent to Grade D" <<endl;
    }else if(marks >= 40){
        cout<<"U got "<< marks << " percentage which is equivalent to Grade E" <<endl;
    }else{
        cout<<"U got "<< marks << " percentage which is equivalent to Grade F" <<endl;
    }

    return 0;
}