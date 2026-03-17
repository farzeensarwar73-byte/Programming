#include<iostream>
using namespace std;

main()

{
        int i, j, n;

    cout << "Enter number of rows: ";
    cin >> n;

    for(i = 1; i <= n; i = i + 1)
    {
        for(j = 1; j <= n - i; j = j + 1)
        {
            cout << "*";
        }
        for(j = 1; j <= 2 * i - 1; j = j + 1)
        {
            cout << "*";
        }
        cout << endl;
    }

    for(i = n - 1; i >= 1; i = i - 1)
    {
        for(j = 1; j <= n - i; j = j + 1)
        {
            cout << "*";
        }
        for(j = 1; j <= 2 * i - 1; j = j + 1)
        {
            cout << "*";
        }
        cout << endl;
    }
}