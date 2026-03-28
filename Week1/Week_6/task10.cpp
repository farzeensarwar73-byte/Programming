#include<iostream>
using namespace std;

main()

{
    int quarters, dimes, nickels, pennies;

    cout << "Enter quarters: ";
    cin >> quarters;

    cout << "Enter dimes: ";
    cin >> dimes;

    cout << "Enter nickels: ";
    cin >> nickels;

    cout << "Enter pennies: ";
    cin >> pennies;

    double dues;
    cout << "Enter the dues amount $";
    cin >> dues;

    double total;
    total = quarters*0.25 + dimes*0.10 + nickels*0.05 + pennies*0.01;

    if(total >= dues)
    {
        cout << "Can you pay the amount? YES";
    }
    else
    {
        cout << "Can you pay the amount? NO";
    }
}