
#include<iostream>
using namespace std;

main()

{
    cout << "Enter speed: ";
    int speed;
    cin>>speed;

    if(speed<=10)
    {
        cout << "slow";
    
    }
    if(speed>10 && speed<51)
    {
        cout << "average";
    }

    if(speed>50 && speed<151)
    {
        cout << "fast";
    }
    if(speed>150 && speed<1001)
    {
        cout << "ultra fast";
    }

    if (speed>1000)
    {
        cout << "extremely fast";
    }
}
