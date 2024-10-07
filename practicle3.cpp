#include <iostream>

using namespace std;

class Accout
{
    int balance;
    string name;

public:
    Accout(int balance, string name)
    {
        this->balance = balance;
        this->name = name;
    }

    void showdetail()
    {
        cout << "Account Balance =" << this->balance;
        cout << "Account H Name = " << this->name;
    }

    int gatebalance()
    {
        return this->balance;
    }

    string gatename()
    {
        return name;
    }
};

int main()
{
    Accout a1(1012, "Hariom Rathod");
    int balance = a1.gatebalance();
    string name = a1.gatename();
    a1.showdetail();

    return 0;
}