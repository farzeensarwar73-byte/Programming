#include<iostream>
using namespace std;
main()
{
   int dollarprice = 282;
   int dollars;
   cout <<"Enter amount in dollar : ";
   cin>>dollars;
   int rupees;
   rupees = dollars * dollarprice;

   cout <<"dollars "<<dollars<<" into rupees are " <<rupees;
}