
#include<iostream>
using namespace std;

main()

{
    cout << "Enter Temperature City 1: ";
    int city1;
    cin>>city1;

    cout << "Enter Temperature City 2: ";
    int city2;
    cin>>city2;

    int difference;
    difference=city1-city2;

    if(difference>10)
    {
        cout << "Difference is too big"<<endl;
    }
    cout << "Program ends";
}
