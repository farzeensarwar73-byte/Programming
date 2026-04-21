#include <iostream>
using namespace std;

int main()
{
    // ================= VARIABLES (ARRAYS) =================
    string roomType[50];
    int roomNumber[50];
    float roomPrice[50];
    bool roomAvailable[50];

    string customerName[50];
    int customerId[50];

    string bookingCustomer[50];
    int bookingRoom[50];
    int bookingCount = 0;

    int roomCount = 0;
    int customerCount = 0;

    int choice, userType;

    // ================= MAIN LOOP =================
    while(true)
    {
        cout << "\n===== HOTEL MANAGEMENT SYSTEM =====\n";
        cout << "1. Admin Login\n";
        cout << "2. Customer Login\n";
        cout << "3. Exit\n";
        cout << "Enter choice: ";
        cin >> userType;

        // ================= ADMIN MENU =================
        if(userType == 1)
        {
            while(true)
            {
                cout << "\n===== ADMIN MENU =====\n";
                cout << "1. Add Room\n";
                cout << "2. View Rooms\n";
                cout << "3. Update Room\n";
                cout << "4. Delete Room\n";
                cout << "5. Add Customer\n";
                cout << "6. View Customers\n";
                cout << "7. View Booking History\n";
                cout << "8. Logout\n";
                cout << "Enter choice: ";
                cin >> choice;

                // ADD ROOM
                if(choice == 1)
                {
                    cout << "Enter room number: ";
                    cin >> roomNumber[roomCount];

                    cout << "Enter room type: ";
                    cin >> roomType[roomCount];

                    cout << "Enter room price: ";
                    cin >> roomPrice[roomCount];

                    roomAvailable[roomCount] = true;

                    roomCount++;
                    cout << "Room added successfully!\n";
                }

                // VIEW ROOMS
                else if(choice == 2)
                {
                    cout << "\n--- ROOM LIST ---\n";
                    for(int i = 0; i < roomCount; i++)
                    {
                        cout << "Room No: " << roomNumber[i]
                             << " Type: " << roomType[i]
                             << " Price: " << roomPrice[i]
                             << " Available: " << roomAvailable[i] << endl;
                    }
                }

                // UPDATE ROOM
                else if(choice == 3)
                {
                    int rn;
                    cout << "Enter room number to update: ";
                    cin >> rn;

                    for(int i = 0; i < roomCount; i++)
                    {
                        if(roomNumber[i] == rn)
                        {
                            cout << "Enter new type: ";
                            cin >> roomType[i];

                            cout << "Enter new price: ";
                            cin >> roomPrice[i];

                            cout << "Updated successfully!\n";
                        }
                    }
                }

                // DELETE ROOM
                else if(choice == 4)
                {
                    int rn;
                    cout << "Enter room number to delete: ";
                    cin >> rn;

                    for(int i = 0; i < roomCount; i++)
                    {
                        if(roomNumber[i] == rn)
                        {
                            roomNumber[i] = 0;
                            roomPrice[i] = 0;
                            roomType[i] = "Deleted";
                            roomAvailable[i] = false;

                            cout << "Room deleted!\n";
                        }
                    }
                }

                // ADD CUSTOMER
                else if(choice == 5)
                {
                    cout << "Enter customer ID: ";
                    cin >> customerId[customerCount];

                    cout << "Enter customer name: ";
                    cin >> customerName[customerCount];

                    customerCount++;
                    cout << "Customer added!\n";
                }

                // VIEW CUSTOMERS
                else if(choice == 6)
                {
                    cout << "\n--- CUSTOMER LIST ---\n";
                    for(int i = 0; i < customerCount; i++)
                    {
                        cout << "ID: " << customerId[i]
                             << " Name: " << customerName[i] << endl;
                    }
                }

                // BOOKING HISTORY
                else if(choice == 7)
                {
                    cout << "\n--- BOOKING HISTORY ---\n";
                    for(int i = 0; i < bookingCount; i++)
                    {
                        cout << "Customer: " << bookingCustomer[i]
                             << " Room: " << bookingRoom[i] << endl;
                    }
                }

                else if(choice == 8)
                {
                    break;
                }
            }
        }

        // ================= CUSTOMER MENU =================
        else if(userType == 2)
        {
            while(true)
            {
                cout << "\n===== CUSTOMER MENU =====\n";
                cout << "1. View Rooms\n";
                cout << "2. Book Room\n";
                cout << "3. Cancel Booking\n";
                cout << "4. Logout\n";
                cout << "Enter choice: ";
                cin >> choice;

                // VIEW ROOMS
                if(choice == 1)
                {
                    cout << "\n--- AVAILABLE ROOMS ---\n";
                    for(int i = 0; i < roomCount; i++)
                    {
                        if(roomAvailable[i])
                        {
                            cout << "Room No: " << roomNumber[i]
                                 << " Type: " << roomType[i]
                                 << " Price: " << roomPrice[i] << endl;
                        }
                    }
                }

                // BOOK ROOM
                else if(choice == 2)
                {
                    string cname;
                    int rno;

                    cout << "Enter your name: ";
                    cin >> cname;

                    cout << "Enter room number: ";
                    cin >> rno;

                    for(int i = 0; i < roomCount; i++)
                    {
                        if(roomNumber[i] == rno && roomAvailable[i])
                        {
                            bookingCustomer[bookingCount] = cname;
                            bookingRoom[bookingCount] = rno;

                            bookingCount++;
                            roomAvailable[i] = false;

                            cout << "Room booked successfully!\n";
                        }
                    }
                }

                // CANCEL BOOKING
                else if(choice == 3)
                {
                    int rno;
                    cout << "Enter room number to cancel: ";
                    cin >> rno;

                    for(int i = 0; i < roomCount; i++)
                    {
                        if(roomNumber[i] == rno)
                        {
                            roomAvailable[i] = true;
                            cout << "Booking cancelled!\n";
                        }
                    }
                }

                else if(choice == 4)
                {
                    break;
                }
            }
        }

        else if(userType == 3)
        {
            cout << "Program ended.\n";
            break;
        }
    }

    return 0;
}