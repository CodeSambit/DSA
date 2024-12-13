#include<iostream>
using namespace std;

int main(){
    int bSalary , gSalary;
    
    cout<<"Enter the Salary"<<endl;
    cin>>bSalary;
    
    // int marks = ((phy+che+bio+math+com)/5);

    if(bSalary <= 10000){
        gSalary = bSalary + (bSalary*.20) + (bSalary*.80);
    }else if( bSalary <=20000){
        gSalary = bSalary + (bSalary*.25) + (bSalary*.90);
    }else if(bSalary >20000){
        gSalary = bSalary + (bSalary*.30) + (bSalary*.95);
    }

    cout<<"Gross Salary is : "<<gSalary;
    return 0;
}