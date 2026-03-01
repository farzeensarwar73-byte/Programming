#include <iostream>
using namespace std;

 main() 
{
    int population, birth_rate, n;
    cout << "Enter the current world population: ";
    cin >> population;
    cout << "Enter the monthly birth rate (number of births per month): ";
    cin >> n;
    
    int months = 3 * 30 * 12;  // 3 decades = 360 months
    int future_population = population + (n * months);
    cout << "Population in three decades will be: " << future_population;
}