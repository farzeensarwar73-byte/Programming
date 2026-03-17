#include<iostream>
using namespace std;
main()
{
  
   int initialvelocity,finalvelocity,acceleration,time;
   cout<< "Enter initial velocity: ";
   cin>>initialvelocity;
   cout<< "Enter acceleration: ";
   cin>>acceleration;
   cout<< "Enter time: ";
   cin>>time;
   finalvelocity = initialvelocity + acceleration*time;
   cout<< "finalvelocity:"<<finalvelocity;
}