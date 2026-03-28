#include<iostream>
using namespace std;

main()

{
    string word;

    cout<<"Enter the string: ";
    cin>>word;

    cout<<"Reversed string: ";
    for(int idx=word.length() ; idx>=0 ;idx--)
    {
        cout<<word[idx];
    }
}