#include<iostream>
using namespace std;

main()

{
    int pin, choice;
    double balance = 1000, amount;
    bool login_success = false ;

    for(int i=1; i<=3; i=i+1)
    {
        cout << "Enter your pin: ";
        cin>>pin;

        if( pin == 1234)
        {
            cout << "Login successful" <<endl;
            login_success = true;

            if (login_success == true)
            {
                cout << endl;
                cout << "---- ATM Management System ----" << endl;
                cout << "1. Check Balance" << endl;
                cout << "2. Deposit Money" << endl;
                cout << "3. Withdraw Money" << endl;
                cout << "4. Exit" << endl;
                cout << "Enter Choice: ";
                cin>>choice;

                if(choice==1)
                {
                    cout << "Current balance: " << balance << endl;
                }

                if(choice==2)
                {
                    cout << "Deposit money: ";
                    cin>>amount;

                     if(amount > 0)
                    {
                        balance = balance + amount;
                        cout << "deposit successful "<<endl;
                        cout << "New balance: "<<balance<<endl;
                    }

                    else
                    {
                       cout << "Invalid Amount"<<endl;
                    }

                }

                if(choice==3)
                {
                    cout << "Withdraw money: ";
                    cin>>amount;

                    if(amount >0 && amount <= balance)
                    {
                        balance = balance - amount;
                        cout << "Withdrawal Successful" << endl;
                        cout << "Remaining Balance: " << balance << endl;
                    }

                    else
                    {
                        cout << "Insufficient Balance"<<endl;
                    }
                }

                if(choice==4)
                {
                    cout << "program exit" <<endl;
                    break;
                }
        
                if (choice <1 || choice >4)
                {
                    cout << "Invalid choice"<<endl;
                }
            }
        }

        while(pin != 1234)
        {
            cout << "Wrong pin try again"<<endl;
            break;

            while(login_success == false)
            {
                cout << "Too many attempts, Program Ends.";
            }
        }          
    }
}