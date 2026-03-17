#include<iostream>
using namespace std;

main() 
{
    int choice;
    string book;
    bool borrowed = false;

    while (true) 
    
    {
        cout << "\n----- Library Menu -----\n";
        cout << "1. Add Books\n";
        cout << "2. View Books\n";
        cout << "3. Borrow Books\n";
        cout << "4. Return Books\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1) 
        {
            cout << "Enter book name: ";
            cin>>book;

            borrowed = false;
            cout << "Book added successfully.\n";
        }

        else if (choice == 2) 
        {
            if (book == "") 
            {
                cout << "No book in the library.\n";
            } 
            else 
            {
                cout << "Book: " << book;
                if (borrowed)
                    cout << " (Borrowed)\n";
                else
                    cout << " (Available)\n";
            }
        }

        else if (choice == 3)
        {
            if (book == "") 
            {
                cout << "No book available.\n";
            } 
            else if (borrowed)
            {
                cout << "Book already borrowed.\n";
            }
            else 
            {
                borrowed = true;
                cout << "Book borrowed successfully.\n";
            }
        }

        else if (choice == 4) 
        {
            if (borrowed) 
            {
                borrowed = false;
                cout << "Book returned successfully.\n";
            } 
            else 
            {
                cout << "No borrowed book to return.\n";
            }
        }

        else if (choice == 5) 
        {
            cout << "Exiting library system. GOODBYE!\n";
            break;
        }

        else 
        {
            cout << "Invalid choice.\n";
        }
    }
}