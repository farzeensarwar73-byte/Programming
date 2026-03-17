#include<iostream>
using namespace std;

main()

{
    char choice = 'y';
    
    while( choice != 'n' && choice != 'N')
    {
        cout << "I am Happy!" <<endl;
        cout << "Enter your choice: ";
        cin>>choice;
    }
}