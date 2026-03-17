#include<iostream>
using namespace std;
main()
{
    int billamount,discountbill;
    cout<< "Enter your bill: ";
    cin>>billamount;
    cout<< "Enter your bill: ";
    cin>>discountbill;
    if(billamount <=5000){
        discountbill = billamount -(billamount*0.05);
    }else{
        discountbill = billamount - (billamount*0.10);
    }
    cout<< "Your discount bill is:"<<discountbill;
}

  