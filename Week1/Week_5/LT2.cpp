#include <iostream>
using namespace std;

main()
{
    int n, d, count = 1;

    cout << "Enter a number: ";
    cin >> n;

    cout << "Enter digit: ";
    cin >> d;

    int number = n;

    while ( number < 10)
    {
        int digit = number % 10;
        if (digit == d)
        {
            count = count + 1 ;
        }
    }

    cout << "The frequency of " << d << " in " << n << " is: " << count;
}