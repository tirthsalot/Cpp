#include <iostream>
using namespace std;

class Student
{
private:
    int rollNo;
    string name;

public:
    void setData()
    {
        cout << "Enter Roll No: ";
        cin >> rollNo;

        cout << "Enter Name: ";
        cin >> name;
    }

    void displayData()
    {
        cout << "Roll No: " << rollNo << endl;
        cout << "Name: " << name << endl;
    }
};

int main()
{
    int n;

    cout << "Enter number of students: ";
    cin >> n;

    Student s[n];   

    for(int i = 0; i < n; i++)
    {
        cout << "\nEnter details of student " << i + 1 << endl;
        s[i].setData();
    }

     cout << "\n--- Student Details ---\n";
    for(int i = 0; i < n; i++)
    {
        cout << "\nStudent " << i + 1 << endl;
        s[i].displayData();
    }

    return 0;
}