#include<iostream>
using namespace std;

main()

{
    string username, password;

    string student_name = "";
    int student_age = 0;
    string course_name = "";
    int choice;

    for(int i = 1; i <= 3; i = i +1)
    {
        cout << "Enter Username: ";
        cin >> username;

        cout << "Enter Password: ";
        cin >> password;

        if(username == "admin" && password == "1234")
        {
            cout << "Login Successful" << endl;
            break;
        }

        else
        {
            cout << "Wrong Login" << endl;
        }

        if( i == 3 && !(username == "admin" && password == "1234"))
        {
            cout << "Too many attempts. Program End." << endl;
        }
    }

    for (int i = 1; i <= 5; i = i + 1)
    {
        cout << endl<< "---- University Management System ----" << endl;
        cout << "1. Add Student" << endl;
        cout << "2. View Student" << endl;
        cout << "3. Add Course" << endl;
        cout << "4. Exit" << endl;

        cout << "Enter Choice: ";
        cin >> choice;

        if (choice == 1)
        {
            cout << "Enter Student Name: ";
            cin >> student_name;

            cout << "Enter Student Age: ";
            cin >> student_age;

            cout << "Student Added Successfully" << endl;
        }
        else if (choice == 2)
        {
            if (student_name != "")
            {
                cout << "Student Name: " << student_name << endl;
                cout << "Student Age: " << student_age << endl;
            }

            else
            {
                cout << "No Student Record Found" << endl;
            }
        }
        else if (choice == 3)
        {
            cout << "Enter Course Name: ";
            cin >> course_name;

            cout << "Course Added: " << course_name << endl;
        }
        else if (choice == 4)
        {
            cout << "Program Exit" << endl;
        }

        else
        {
            cout << "Invalid Choice" << endl;
        }
    }

}