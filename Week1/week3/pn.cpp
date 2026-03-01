#include <iostream>
using namespace std;

 main() 
{
    int hours, seconds;

    cout << "Enter the number of hours: ";
    cin >> hours;

    seconds = hours * 3600;

    cout << hours << " is equivalent to " << seconds << " seconds";

}