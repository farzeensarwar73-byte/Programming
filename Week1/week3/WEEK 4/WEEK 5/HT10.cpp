#include<iostream>
using namespace std;

main()
{
    int a, b, gcd = 1, lcm, i;

    cout<<"Enter first numbers: ";
    cin>>a;
    cout<<"Enter second number: ";
    cin>>b;

    for(i = 1; i <= a && i <= b; i = i + 1)
    {
        if(a % i == 0 && b % i == 0)
        {
            gcd = i;
        }
    }

    lcm = (a * b) / gcd;

    cout << "GCD = " << gcd << endl;

    cout << "LCM = " << lcm << endl;
}