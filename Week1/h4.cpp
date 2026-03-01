#include<iostream>
using namespace std;
main()

{
  int impostercount,playercount,imposterchance;
  cout<< "Enter imposter count: ";
  cin>>impostercount;
  cout<< "Enter player count: ";
  cin>>playercount;
  imposterchance = (imposterchance/playercount)*100;
  cout<<"chance of being an imposter: "<<imposterchance;
}
  