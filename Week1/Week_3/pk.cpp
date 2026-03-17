#include<iostream>
using namespace std;
main()
{
  string name;
  int matric,inter,ecat;
  float matricpercentage,interpercentage,ecatpercentage,aggregate;
  cout<<"Enter the student name: ";
  cin>>name;
  cout<<"Enter the matric marks: ";
  cin>>matric;
  cout<<"Enter the inter marks: ";
  cin>>inter;
  cout<<"Enter the Ecat marks: ";
  cin>>ecat;
  matricpercentage = matric*10/1100;
  interpercentage = inter*40/550;
  ecatpercentage = ecat*50/400;
  aggregate = matricpercentage + interpercentage + ecatpercentage;
  cout<<"aggregate score : <<name<<" "<<aggregate";
}