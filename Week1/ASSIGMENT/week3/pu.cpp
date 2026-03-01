#include <iostream>
using namespace std;
 main()
{
    int two_pointers, three_pointers;   
    cout << "Enter 2 pointers: ";
    cin >> two_pointers;
    cout << "Enter 3 pointers: ";
    cin >> three_pointers;  
    int total_points = (2 * two_pointers) + (3 * three_pointers);
    cout << "Total points = " << total_points;

}