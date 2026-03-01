#include<iostream>
using namespace std;
main()
{
  
 int bagSize;
 cout<< "Enter the size of fertilizer bag in pounds :";
 cin>>bagSize;
 float costBag;
 cout << "Enter the cost bag ($) :";
 cin>>costBag;
 float areaInsq ;
 cout << " Enter the area in sq feet that can be covered by bag:";
 cin>>areaInsq;
 float costPerPound;
 costPerPound = costBag/bagSize;
 cout<< " cost of fertilizer per pound :" << "$" <<costPerPound;
 float costPersqfoot;
 costPersqfoot = costBag/areaInsq;
 cout<< "cost or fertilizer per sq foot : " << costPersqfoot << "$";
}
