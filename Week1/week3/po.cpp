#include <iostream>
using namespace std;

main() 
{
    int voltage, current, power;

    cout << "Enter Voltage (in volts): ";
    cin >> voltage;

    cout << "Enter Current (in Amperes): ";
    cin >> current;

    power = voltage * current;

    cout << "The power is " << power << " watts";

}