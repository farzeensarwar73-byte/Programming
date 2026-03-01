#include <iostream>
using namespace std;

main()
{
    int age, moves;
    
    cout << "Enter age: ";
    cin >> age;
    cout << "Enter number of moves: ";
    cin >> moves;

    double avg_years = static_cast<double>(age) / (moves + 1);
    cout << "Average years in a single house = " << avg_years;
}