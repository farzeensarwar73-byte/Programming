#include <iostream>
using namespace std;

// ========= GLOBAL ARRAYS =========
string roomType[50];
int roomNumber[50];
float roomPrice[50];
bool roomAvailable[50];

string customerName[50];
int customerId[50];

string bookingCustomer[50];
int bookingRoom[50];

int roomCount = 0;
int customerCount = 0;
int bookingCount = 0;

// ========= ADMIN FUNCTIONS =========

void addRoom()
{
    cout<<"Enter room number: ";
    cin>>roomNumber[roomCount];

    cout<<"Enter room type: ";
    cin>>roomType[roomCount];

    cout<<"Enter room price: ";
    cin>>roomPrice[roomCount];

    roomAvailable[roomCount]=true;
    roomCount++;

    cout<<"Room Added Successfully!\n";
}

void viewRooms()
{
    cout<<"\n--- ROOM LIST ---\n";

    for(int i=0;i<roomCount;i++)
    {
        cout<<"Room No: "<<roomNumber[i]
            <<" Type: "<<roomType[i]
            <<" Price: "<<roomPrice[i]
            <<" Available: "<<roomAvailable[i]<<endl;
    }
}

void updateRoom()
{
    int rn;
    cout<<"Enter room number to update: ";
    cin>>rn;

    for(int i=0;i<roomCount;i++)
    {
        if(roomNumber[i]==rn)
        {
            cout<<"New Type: ";
            cin>>roomType[i];

            cout<<"New Price: ";
            cin>>roomPrice[i];

            cout<<"Updated!\n";
        }
    }
}

void deleteRoom()
{
    int rn;
    cout<<"Enter room number to delete: ";
    cin>>rn;

    for(int i=0;i<roomCount;i++)
    {
        if(roomNumber[i]==rn)
        {
            roomType[i]="Deleted";
            roomPrice[i]=0;
            roomAvailable[i]=false;
            cout<<"Room Deleted!\n";
        }
    }
}

void addCustomer()
{
    cout<<"Enter customer ID: ";
    cin>>customerId[customerCount];

    cout<<"Enter customer name: ";
    cin>>customerName[customerCount];

    customerCount++;
    cout<<"Customer Added!\n";
}

void viewCustomers()
{
    cout<<"\n--- CUSTOMER LIST ---\n";

    for(int i=0;i<customerCount;i++)
    {
        cout<<"ID: "<<customerId[i]
            <<" Name: "<<customerName[i]<<endl;
    }
}

void bookingHistory()
{
    cout<<"\n--- BOOKING HISTORY ---\n";

    for(int i=0;i<bookingCount;i++)
    {
        cout<<"Customer: "<<bookingCustomer[i]
            <<" Room: "<<bookingRoom[i]<<endl;
    }
}

// ========= CUSTOMER FUNCTIONS =========

void bookRoom()
{
    string cname;
    int rno;

    cout<<"Enter your name: ";
    cin>>cname;

    cout<<"Enter room number: ";
    cin>>rno;

    for(int i=0;i<roomCount;i++)
    {
        if(roomNumber[i]==rno && roomAvailable[i])
        {
            bookingCustomer[bookingCount]=cname;
            bookingRoom[bookingCount]=rno;

            roomAvailable[i]=false;
            bookingCount++;

            cout<<"Room Booked Successfully!\n";
        }
    }
}

void cancelBooking()
{
    int rno;
    cout<<"Enter room number to cancel: ";
    cin>>rno;

    for(int i=0;i<roomCount;i++)
    {
        if(roomNumber[i]==rno)
        {
            roomAvailable[i]=true;
            cout<<"Booking Cancelled!\n";
        }
    }
}

// ========= MENUS =========

void adminMenu()
{
    int choice;

    while(true)
    {
        cout<<"\n===== ADMIN MENU =====\n";
        cout<<"1.Add Room\n";
        cout<<"2.View Rooms\n";
        cout<<"3.Update Room\n";
        cout<<"4.Delete Room\n";
        cout<<"5.Add Customer\n";
        cout<<"6.View Customers\n";
        cout<<"7.Booking History\n";
        cout<<"8.Logout\n";
        cout<<"Choice: ";
        cin>>choice;

        if(choice==1) addRoom();
        else if(choice==2) viewRooms();
        else if(choice==3) updateRoom();
        else if(choice==4) deleteRoom();
        else if(choice==5) addCustomer();
        else if(choice==6) viewCustomers();
        else if(choice==7) bookingHistory();
        else if(choice==8) break;
    }
}

void customerMenu()
{
    int choice;

    while(true)
    {
        cout<<"\n===== CUSTOMER MENU =====\n";
        cout<<"1.View Rooms\n";
        cout<<"2.Book Room\n";
        cout<<"3.Cancel Booking\n";
        cout<<"4.Logout\n";
        cout<<"Choice: ";
        cin>>choice;

        if(choice==1) viewRooms();
        else if(choice==2) bookRoom();
        else if(choice==3) cancelBooking();
        else if(choice==4) break;
    }
}

// ========= MAIN FUNCTION =========

int main()
{
    int userType;

    while(true)
    {
        cout<<"\n===== HOTEL MANAGEMENT SYSTEM =====\n";
        cout<<"1.Admin Login\n";
        cout<<"2.Customer Login\n";
        cout<<"3.Exit\n";
        cout<<"Enter choice: ";
        cin>>userType;

        if(userType==1) adminMenu();
        else if(userType==2) customerMenu();
        else if(userType==3)
        {
            cout<<"Program Ended.\n";
            break;
        }
    }

    return 0;
}