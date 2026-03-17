
#include<iostream>
using namespace std;

main()

{
    cout << "Enter car speed: ";
    int speed;
    cin>>speed;

    if(speed >100){
        cout << "Halt....YOU WILL BE CHALLANED!!!";
    }
    if(speed<=100){
        cout << "Perfect! your going good.";
    }
}
