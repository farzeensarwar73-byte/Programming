
#include<iostream>
using namespace std;

main()

{
    cout << "Enter country your traveling: " ;
    string country;
    cin>>country;

    cout << "Ticket price: ";
    int ticket;
    cin>>ticket;

    if (country == "Ireland"){
        float discount;
        discount=ticket-(ticket*0.1);
        
        cout<< "you got a discount of 10%: "<<discount ;
    }

    if (country!="Ireland"){
        float discount;
        discount=ticket-(ticket*0.05);

        cout << "you got a dicout of 5%:" <<discount;
    }
}
