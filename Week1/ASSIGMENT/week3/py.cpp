#include<iostream>
using namespace std;
main()
 {
   float age ;
   cout << "Enter age :";
   cin >> age;
   float moved ;
   cout << "Enter moved :";
   cin >> moved;
   float averageyears ;
   averageyears = age / (moved + 1);
   cout << "Average years =" <<averageyears ;
}