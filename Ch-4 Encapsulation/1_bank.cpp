#include<iostream>
using namespace std;

class Bank
{
    private:
    int bankBalance = 50000;

    public:
    void getbalance()
    {
        cout << "Bank Balance : " << bankBalance << endl;
    }

    void setbalance(int bankBalance)
    {
        this->bankBalance += bankBalance;
    }

};

int main ()
{

    Bank b1;
    int AddBalance;

cout << "Addbalance :" << endl;
cin >> AddBalance;



b1.setbalance(AddBalance);
b1.getbalance();








    return 0;
}






