#include<iostream>
using namespace std;

int main(){
    float unit , bill ,finalBill;
    
    cout<<"Enter electricity units"<<endl;
    cin>>unit;
    


    // int unit = ((phy+che+bio+math+com)/5);

    if(unit <= 50){
        bill = unit*0.50;   
    }else if(unit <= 100){
        bill = unit*0.75;
    }else if(unit > 100 && unit <= 250){
        bill = unit*1.20;
    }else if(unit > 250){
        bill = unit*1.50;
    }

    cout<<"Your electricity bill is : "<<(bill + (bill * 0.20))<<endl;

    return 0;
}