#include <iostream>
#include <vector>
using namespace std;


int totalrooms = 5;
static int room_no_count = 0;


class Hotel
{
private:
    int rt;
    int stayNights;
    int s, p, r, t;
    string name, address;
    char typeOfRoom;

public:
    int rno = -1;

    Hotel()
    {
        this->rt = 0;
        this->r = 0;
        this->t = 0;
        this->p = 0;
        this->s = 0;
        this->name = "";
        this->address = "";
    }

    void inputdata()
    {

        cout << "\nWe have the following rooms for you:-" << endl;
        cout << "A. Luxe               ----> Rs 6000 PN-" << endl;
        cout << "B. Premium            ----> Rs 5000 PN-" << endl;
        cout << "C. Basic Double Bed  ----> Rs 4000 PN-" << endl;
        cout << "D. Basic Single Bed  ----> Rs 3000 PN-" << endl;


        cout << "Enter Your Choice Please->";
        cin >> typeOfRoom;
        cout << endl;
        cout << "Kindly tell your following details :" << endl;
        cout << "Enter your name:";
        cin >> name;
        cout << "Enter your address:";
        cin >> address;
        cout << "Enter the number of nights you want to stay : ";
        cin >> stayNights;
        cout << "Your room no.: " << rno << endl;

    }

    void roomrent()
    {

        switch (typeOfRoom)
        {
        case 'A':
            cout << "You have opted for Luxe" << endl;
            s = 6000 * stayNights;
            break;
        case 'B':
            cout << "You have opted for Premium" << endl;
            s = 5000 * stayNights;
            break;
        case 'C':
            cout << "You have opted for Basic Double Bed" << endl;
            s = 4000 * stayNights;
            break;
        case 'D':
            cout << "You have opted for Basic Single Bed" << endl;
            s = 3000 * stayNights;
            break;
        default:
            cout << "Please choose a room" << endl;
        }

        cout << "Total number of nights : " << stayNights << endl;
        cout << "your room rent is = " << s << endl;

    }

    void restaurant()
    {

        cout << "\n*****RESTAURANT MENU*****" << endl;
        cout << "1.water----->Rs20" << endl;
        cout << "2.tea----->Rs10" << endl;
        cout << "3.breakfast combo--->Rs90" << endl;
        cout << "4.lunch combo---->Rs110" << endl;
        cout << "5.dinner combo--->Rs150" << endl;
        cout << "6.Exit" << endl;

        while (true)
        {
            int c, d;
            cout << "Enter your choice:";
            cin >> c;
            if (c == 6)
                break;

            cout << "Enter the quantity:";
            cin >> d;

            switch (c)
            {
            case 1:
                r += 20 * d;
                break;
            case 2:
                r += 10 * d;
                break;
            case 3:
                r += 90 * d;
                break;
            case 4:
                r += 110 * d;
                break;
            case 5:
                r += 150 * d;
                break;
            default:
                cout << "Invalid option" << endl;
            }
        }

        cout << "Total food Cost = Rs" << r << endl;

    }

    void laundry()
    {

        cout << "\n******LAUNDRY MENU*******" << endl;
        cout << "1.Shorts----->Rs3" << endl;
        cout << "2.Trousers----->Rs4" << endl;
        cout << "3.Shirt--->Rs5" << endl;
        cout << "4.Jeans---->Rs6" << endl;
        cout << "5.Girlsuit--->Rs8" << endl;
        cout << "6.Exit" << endl;

        while (true)
        {
            int e, f;
            cout << "Enter your choice:";
            cin >> e;
            if (e == 6)
                break;

            cout << "Enter the quantity:";
            cin >> f;

            switch (e)
            {
            case 1:
                t += 3 * f;
                break;
            case 2:
                t += 4 * f;
                break;
            case 3:
                t += 5 * f;
                break;
            case 4:
                t += 6 * f;
                break;
            case 5:
                t += 8 * f;
                break;
            default:
                cout << "Invalid option" << endl;
            }
        }

        cout << "Total Laundary Cost = Rs" << t << endl;

    }

    void game()
    {

        cout << "\n******GAME MENU*******" << endl;
        cout << "1.Table tennis----->Rs60" << endl;
        cout << "2.Bowling----->Rs80" << endl;
        cout << "3.Snooker--->Rs70" << endl;
        cout << "4.Video games---->Rs90" << endl;
        cout << "5.Pool--->Rs50==6" << endl;
        cout << "6.Exit" << endl;

        while (true)
        {
            int g, h;
            cout << "Enter your choice:";
            cin >> g;
            if (g == 6)
                break;

            cout << "No. of hours:";
            cin >> h;

            switch (g)
            {
            case 1:
                p += 60 * h;
                break;
            case 2:
                p += 80 * h;
                break;
            case 3:
                p += 70 * h;
                break;
            case 4:
                p += 90 * h;
                break;
            case 5:
                p += 50 * h;
                break;
            default:
                cout << "Invalid option" << endl;
            }
        }

        cout << "Total Game Bill=Rs" << p << endl;

    }

    void display()
    {

        cout << "\n******HOTEL BILL******" << endl;
        cout << "Customer details:" << endl;
        cout << "Customer name: " << name << endl;
        cout << "Customer address: " << address << endl;
        cout << "Room no." << rno << endl;
        cout << "Your Room rent is:" << s << endl;
        cout << "Your Food bill is:" << r << endl;
        cout << "Your laundary bill is:" << t << endl;
        cout << "Your Game bill is:" << p << endl;

        rt = t + p + r;

        cout << "Your sub total bill is :" << s << endl;
        cout << "Additional Service Charges is : " << rt << endl;
        cout << "Your grandtotal bill is :" << s + rt << endl;

    }
};
int main()
{

    cout << "*****WELCOME TO ABC HOTEL*****" << endl;
    vector<Hotel> rooms(totalrooms);
    while (true)
    {
        cout << "\n0. Total Available Rooms " << endl;
        cout << "1. Book A Room" << endl;
        cout << "2. Calculate room rent" << endl;
        cout << "3. Book Food" << endl;
        cout << "4. Laundry" << endl;
        cout << "5. Play Games" << endl;
        cout << "6. Show total cost" << endl;
        cout << "7. Check Out" << endl;
        cout << "8. EXIT" << endl;
        int b;
        cout << "Enter your choice: ";
        cin >> b;
        if (b == 0)
        {
            cout << "Available Rooms : " << totalrooms - room_no_count << endl;
        }
        else if (b == 1)
        {
            if (totalrooms - room_no_count > 0)
            {
                for (int i = 0; i < rooms.size(); i++)
                {
                    if (rooms[i].rno == -1)
                    {
                        rooms[i].rno = i;
                        rooms[i].inputdata();
                        rooms[i].roomrent();
                        room_no_count++;
                        break;
                    }
                }
            }
            else
            {
                cout << "No Rooms Available at the moment." << endl;
            }
        }
        else if (b == 2)
        {
            int x = 0;
            int g;
            cout << "Enter Room No. : ";
            cin >> g;
            for (int i = 0; i < rooms.size(); i++)
            {
                if (rooms[i].rno == g)
                {
                    rooms[i].roomrent();
                    x = 1;
                    break;
                }
            }
            if(x==0){
                cout<<"Wrong Room Number Enetered"<<endl;
            }
        }
        else if (b == 3)
        {
            int x = 0;
            int g;
            cout << "Enter Room No. : ";
            cin >> g;
            for (int i = 0; i < rooms.size(); i++)
            {
                if (rooms[i].rno == g)
                {
                    rooms[i].restaurant();
                    x = 1;
                    break;
                }
            }
            if(x==0){
                cout<<"Wrong Room Number Enetered"<<endl;
            }
        }
        else if (b == 4)
        {
            int x = 0;
            int g;
            cout << "Enter Room No. : ";
            cin >> g;
            for (int i = 0; i < rooms.size(); i++)
            {
                if (rooms[i].rno == g)
                {
                    rooms[i].laundry();
                    x = 1;
                    break;
                }
            }
            if(x==0){
                cout<<"Wrong Room Number Enetered"<<endl;
            }
        }
        else if (b == 5)
        {
            int x = 0;
            int g;
            cout << "Enter Room No. : ";
            cin >> g;
            for (int i = 0; i < rooms.size(); i++)
            {
                if (rooms[i].rno == g)
                {
                    rooms[i].game();
                    x = 1;
                    break;
                }
            }
            if(x==0){
                cout<<"Wrong Room Number Enetered"<<endl;
            }
        }
        else if (b == 6)
        {
            int x = 0;
            int g;
            cout << "Enter Room No. : ";
            cin >> g;
            for (int i = 0; i < rooms.size(); i++)
            {
                if (rooms[i].rno == g)
                {
                    rooms[i].display();
                    x = 1;
                    break;
                }
            }
            if(x==0){
                cout<<"Wrong Room Number Enetered"<<endl;
            }
        }
        else if (b == 7)
        {
            int x = 0;
            int g;
            cout << "Enter Room No. : ";
            cin >> g;
            for (int i = 0; i < rooms.size(); i++)
            {
                if (rooms[i].rno == g)
                {
                    rooms[i].rno = -1;
                    room_no_count--;
                    cout << "Thank You For Visiting" << endl;
                    x = 1;
                    break;
                }
            }
            if(x==0){
                cout<<"Wrong Room Number Enetered"<<endl;
            }
        }
        else if (b == 8)
        {
            break;
        }
        else{
            cout<<"Wrong Input. Enter correct input."<<endl;
        }
    }
    return 0;
    
}
