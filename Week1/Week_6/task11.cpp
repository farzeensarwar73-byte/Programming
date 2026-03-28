#include<iostream>
using namespace std;

main()

{
    string word;
    char letter;
    
    cout<<"Enter the word: ";
    cin >> word;

    cout<<"Enter the letter: ";
    cin >> letter;

    bool found=false;
    for(int idx = 0; word[idx] != '\0'; idx++)
    {
        if(word[idx]==letter)
        {
            found=true;
            break;
        }
    }
    if(found)
    {
        cout<<letter<<" is found in "<<word<<endl;
    }
    else
    {
        cout<<letter<<" is not found in "<<word<<endl;
    }
}