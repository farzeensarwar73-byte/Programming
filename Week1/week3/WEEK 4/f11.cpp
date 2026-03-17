
#include<iostream>
using namespace std;

main()

{
    string firstname;
    string secondname;
    string thirdname;
    int age_1;
    int age_2;
    int age_3;

    cout<<"Enter name of first brother: ";
    cin>>firstname;
    cout<<"Enter age of first brother: ";
    cin>>age_1;

    cout<<"Enter name of second brother: ";
    cin>>secondname;
    cout<<"Enter age of second brother: ";
    cin>>age_2;

    cout<<"Enter name of third brother: ";
    cin>>thirdname;
    cout<<"Enter age of third brother: ";
    cin>>age_3;

    if(age_1 < age_2 && age_1 < age_3)
    {
        cout<<"Youngest brother is "<<firstname;
    }

    if(age_2 < age_1 && age_2 < age_3)
    {
        cout<<"Youngest brother is "<<secondname;
    }

    if(age_3 < age_1 && age_3 < age_2)
    {
        cout<<"Youngest brother is "<<thirdname;
    }
}
