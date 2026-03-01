#include<iostream>
using namespace std;
main()

 {
   int minutes,framespersecond,totalframes;
   cout<< "Enter number of minutes: ";
   cin>>minutes;
   cout<< "Enter frames per second: ";
   cin>>framespersecond;
   totalframes = minutes *60* framespersecond;

   cout<< "Total number or frames:"<<totalframes;
}