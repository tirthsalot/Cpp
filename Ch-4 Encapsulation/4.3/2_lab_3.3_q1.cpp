#include<iostream>
using namespace std;


class diamondCompanies
{
    private:
    int comp_id;
    string comp_name;
    int comp_staff_qty;
    double comp_revenue;
    int comp_import_raw_diamonds;
    int comp_export_diamonds;
    string comp_ceo;

    public:

    diamondCompanies(int id, string name, int staff_qty, double revenue, int import_raw_diamonds, int export_diamonds, string ceo)
    {
        comp_id = id;
        comp_name = name;
        comp_staff_qty = staff_qty;
        comp_revenue = revenue;
        comp_import_raw_diamonds = import_raw_diamonds;
        comp_export_diamonds = export_diamonds;
        comp_ceo = ceo;
    }

    void display()
    {
        cout << "======Companies Information======" << endl;

        cout << "Company ID : " << comp_id << endl;
        cout << "Company Name : " << comp_name << endl;
        cout << "Company Staff Quantity : " << comp_staff_qty << endl;
        cout << "Company Revenue : " << comp_revenue << endl;
        cout << "Company Import Raw Diamonds : " << comp_import_raw_diamonds << endl;       
        cout << "Company Export Diamonds : " << comp_export_diamonds << endl;
        cout << "Company Ceo : " << comp_ceo << endl;
    }

    ~diamondCompanies()
    {
        cout << "diamondCompanies object\n";
    }

};


int main()
{
    cout << "Enter Company Details :" ;

    int n;
    cin >> n;
    cin.ignore();

    for(int i = 0; i < n; i++)

    {
        int id;
        string name;
        int staff_qty;
        double revenue;
        int import_raw_diamonds;
        int export_diamonds;
        string ceo;

        cout << "Company ID : " ;
        cin >> id;
        cin.ignore();

        cout << "Company Name : " ;
        getline(cin, name);

        cout << "Company Staff Quantity : " ;
        cin >> staff_qty;
        cin.ignore();

        cout << "Company Revenue : " ;
        cin >> revenue;
        cin.ignore();

        cout << "Company Import Raw Diamonds : " ;
        cin >> import_raw_diamonds;
        cin.ignore();

        cout << "Company Export Diamonds : " ;
        cin >> export_diamonds;
        cin.ignore();

        cout << "Company Ceo : " ;
        getline(cin, ceo);

        diamondCompanies company(id, name, staff_qty, revenue, import_raw_diamonds, export_diamonds, ceo);
        company.display();
    }


    return 0;
}