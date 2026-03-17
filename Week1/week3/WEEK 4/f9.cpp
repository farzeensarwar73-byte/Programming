
#include<iostream>
using namespace std;

main()

{
    int number1, number2;
    char operator1;
    int result;

    cout << "Enter the first number: ";
    cin >> number1;

    cout << "Enter an operator (+,-,*,/): ";
    cin >> operator1;

    cout << "Enter the second number: ";
    cin >> number2;

    if (operator1 == '+')
    {
        result = number1 - number2;
        cout << "Inverse result: " << result;
    }

    else if (operator1 == '-')
    {
        result = number1 + number2;
        cout << "Inverse result: " << result;
    }

    else if (operator1 == '*')
    {
        result = number1 / number2;
        cout << "Inverse result: " << result;
    }

    else if (operator1 == '/')
    {
        result = number1 * number2;
        cout << "Inverse result: " << result;
    }

    else
    {
        cout << "Invalid operator";
    }
}

