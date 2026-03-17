#include <iostream>
using namespace std;
main()
{
    float vegitableprice,fruitprice;
    int vegitablekg,fruitkg;
    float totalearnings;
    cout<< "Enter vegetable price per kilogram (in coins): ";
    cin>>vegitableprice;
    cout<< "Enter fruit price per kilogram (in coins): ";
    cin>>fruitprice;
    cout<< "Enter total kilograms of vegetables: ";
    cin>>vegitablekg;
    cout<< "Enter total kilograms of fruits: ";
    cin>>fruitkg;
    totalearnings = (vegitableprice * vegitablekg + fruitprice * fruitkg) / 1.94;
    cout<< "Total earnings in Rupees (Rps): "<< totalearnings;
}