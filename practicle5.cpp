#include <iostream>

using namespace std;

class Accout
{
public:
    void showdetail()
    {
        cout << "This is Accout Function" << endl;
    }
};

class Employee : public Accout
{

public:
    void print()
    {
        cout << "This employee Function Or class";
    }
};

int main()
{

    Employee e1;
    e1.print();
    e1.showdetail();

    return 0;
}
