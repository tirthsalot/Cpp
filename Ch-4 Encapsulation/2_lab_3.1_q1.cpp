#include<iostream>
using namespace std;

class Student
{
 private:

 int stu_id;
 string stu_name;
 int stu_age;
 string stu_course;
 string stu_city;
 string stu_email;
 string stu_college;
 public:

 void getstudent()
 {

    cout << "Student Id  :\n" << stu_id << endl;
    cout << "Student Name :\n" << stu_name << endl;
    cout << "Student Age  :\n" << stu_age << endl;
    cout << "Student Course :\n" << stu_course << endl;
    cout << "Student City :\n" << stu_city << endl;
    cout << "Student Email :\n" << stu_email << endl;
    cout << "Student College :\n" << stu_college << endl;

 }
 void setStudent()
 {

    cout << "Enter Student Id :\n";
    cin >> stu_id;
    cin.ignore(); 
    
    cout << "Enter Student Name :\n";
    cin >> stu_name;
    getline(cin, stu_name); 


    cout << "Enter Student Age :\n";
    cin >> stu_age;
    cin.ignore();

    cout << "Enter Student Course :\n";
    cin >> stu_course;
    getline(cin, stu_course);

    cout << "Enter Student City :\n";
    cin >> stu_city;
    getline(cin, stu_city);

    cout << "Enter Student Email :\n";
    cin >> stu_email;
    getline(cin, stu_email);

    cout << "Enter Student College :\n";
    cin >> stu_college;
    getline(cin, stu_college);



 }

};

int main()
{
    Student s[5];

    for(int i = 0; i < 5; i++)
    {
        cout << "Enter details for Student " << i + 1 << ":\n";
        s[i].setStudent();

    }

        for(int i = 0; i < 5; i++)
        {
            cout << "Details of Student " << i + 1 << ":\n";
            s[i].getstudent();
    
        }
        return 0;
}