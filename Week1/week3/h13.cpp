#include<iostream>
using namespace std;
main()
{
   cout<< "Enter 5 integer \n";
   int sum=0;
   int num;
   cin>>num;
   sum=sum+num;
   cin>>num;
   sum=sum+num;
   cin>>num;
   sum=num+sum;
   cin>>num;
   sum=sum+num;
   cout<< "sum = "<<sum ;
}
