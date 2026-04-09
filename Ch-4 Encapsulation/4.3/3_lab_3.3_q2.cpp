#include<iostream>
using namespace std;

class Cafe
{
private:
    int cafe_id;
    string cafe_name;
    string cafe_type;
    int cafe_rating;
    string cafe_location;
    int cafe_establish_year;
    int cafe_staff_qty;

public:
    Cafe()
    {
        cafe_id = 0;
        cafe_name = "No specified";
        cafe_type = "No specified";
        cafe_rating = 0;
        cafe_location = "No specified";
        cafe_establish_year = 0;
        cafe_staff_qty = 0;
    }

    void setcafe()
    {
        cout << "======Cafe Information======" << endl;

        cout << "Enter Cafe ID : ";
        cin >> cafe_id;
        cin.ignore();

        cout << "Enter Cafe Name : ";
        getline(cin, cafe_name);

        cout << "Enter Cafe Type : ";
        getline(cin, cafe_type);

        cout << "Enter Cafe Rating : ";
        cin >> cafe_rating;
        cin.ignore();

        cout << "Enter Cafe Location : ";
        getline(cin, cafe_location);

        cout << "Enter Cafe Establish Year : ";
        cin >> cafe_establish_year;
        cin.ignore();

        cout << "Enter Cafe Staff Quantity : ";
        cin >> cafe_staff_qty;
        cin.ignore();
    }

    void getcafe()
    {
        cout << "\n======Cafe Information======" << endl;

        cout << "Cafe ID             : " << cafe_id << endl;
        cout << "Cafe Name           : " << cafe_name << endl;
        cout << "Cafe Type           : " << cafe_type << endl;
        cout << "Cafe Rating         : " << cafe_rating << endl;
        cout << "Cafe Location       : " << cafe_location << endl;
        cout << "Cafe Establish Year : " << cafe_establish_year << endl;
        cout << "Cafe Staff Quantity : " << cafe_staff_qty << endl;
    }
};

int main()
{
    int n;
    cout << "Enter Cafe Number: ";
    cin >> n;
    cin.ignore();

    Cafe c[n];  

    for(int i = 0; i < n; i++)
    {
        cout << "\nEnter cafe " << i + 1 << " details:\n";
        c[i].setcafe();
    }

    for(int i = 0; i < n; i++)
    {
        cout << "\nCafe " << i + 1 << " details:";
        c[i].getcafe();
    }

    return 0;
}