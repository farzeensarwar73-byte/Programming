#include<iostream>
using namespace std;

main()
{
    
    int elements;
    string a;

    cout<<"Enter the number of elements: ";
    cin >> elements;

    if(elements>0)
    {
        cout<<"Enter "<<elements<<" numbers, one per line: "<<endl;
    
        for(int i=0; i<elements; i++)
        {
            cin >> a[i];
        }
        cout<<"Numbers in reverse order: ";

        for(int j=elements-1; j>=0; j--)
        {
            cout<<a[j];
        }
    }

    else 
    {
        cout<<"Invalid input. numbers of element should be greater than 0 ";
    }
}