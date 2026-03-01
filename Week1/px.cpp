#include<iostream>
using namespace std;
main()
 {
   
   int area,width,height,walls;
   cout<< "Enter the painted area: ";
   cin>>area;
   cout<< "Enter the width: ";
   cin>>width;
   cout<< "Enter the height: ";
   cin>>height;
   walls = area/ (width*height);
   cout<< "Walls painted = "<<walls;
}