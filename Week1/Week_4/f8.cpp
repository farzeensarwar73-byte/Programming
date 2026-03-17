#include<iostream>
using namespace std;

main ()

{
    int salary = 10000;
    int laptopPrice = 50000;
    double advancePerMonth = salary * 0.5;
    double totalAdvance = advancePerMonth * 6;
    int monthsneeded;
    monthsneeded = laptopPrice / advancePerMonth;

    if (totalAdvance >= laptopPrice)
    {
        cout << "Ali can buy the laptop with the advanced salary." << endl;
    }

    else 
    {
        cout << "Month required to buy laptop is "<<monthsneeded;
    }
}
