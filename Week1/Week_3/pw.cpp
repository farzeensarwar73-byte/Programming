#include<iostream>
using namespace std;

 main()

{
   cout << "Enter imposter count :";
   int i;
   cin>>i;
   cout << "Enter Player Count :";
   int p;
   cin>>p;
   int chance;
   chance = 100 * (i/p);
   cout << "chance of being an imposter :" << chance ;
}
