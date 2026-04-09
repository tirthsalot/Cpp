#include<iostream>
using namespace std;

class constructor
{

    public:
    constructor()
    {
        cout << "This is a constructor" << endl;
    }

    ~constructor(){

        cout << "This is a destructor" << endl;

    }

};


int main(){

    constructor c1;


    return 0;
}