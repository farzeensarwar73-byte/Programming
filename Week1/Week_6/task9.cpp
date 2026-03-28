#include<iostream>
using namespace std;

main()

{
    int a[100];
    int element1;

    cout<<"Enter the number of elements for first array (must be 2): ";
    cin >> element1;

    cout<<"Enter " <<element1<< " elements for the first array, one per line " <<endl;
    for(int i=0;i<element1;i++)
    {
        cin >>a[i];
    }

    int b[100];
    int element2;

    cout<<"Enter the number of elements for second  array: ";
    cin >> element2;

    cout<<"Enter " <<element2<< " elements for the second array, one per line "<<endl;
    for(int i=0;i<element2;i++)
    {
        cin >>b[i];
    }

    cout<<"Resulting array: ["<<a[0]<<" , ";
    
    for(int j=0; j<element2;j++)
    {
        cout<<b[j]<<" , ";
    }

    cout<<a[1]<<" ] ";
}