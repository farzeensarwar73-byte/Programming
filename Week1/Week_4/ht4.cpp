
#include<iostream>
using namespace std;

main()

{
    cout << "Red roses: ";
    int redrose;
    cin>>redrose;

    cout << "White roses: ";
    int whiterose;
    cin>>whiterose;

    cout << "Tulips: ";
    int tulips;
    cin>>tulips;

    float redroseprice;
    redroseprice=redrose*2.00;

    float whiteroseprice;
    whiteroseprice=whiterose*4.10;

    float tulipsprice;
    tulipsprice=tulips*2.50;

    float total_price;
    total_price=redroseprice+whiteroseprice+tulipsprice;
    cout<<"Original price: "<<total_price <<endl;

    if(total_price>200)
    {
        float discount;
        discount=total_price-(total_price*0.2);

        cout << "Price after discount: "<<discount;
    }
}
