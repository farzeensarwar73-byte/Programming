#include<iostream>
using namespace std;
main()
{
  int age;
  cout<< "Enter your age: ";
  cin>>age;
  int moves;
  cout<< "Enter number of times which you moved: ";
  cin>>moves;
  int average;
  average = age/moves+1;
  cout<< "Average years in one house = " <<average;
}