#include <iostream>

using namespace std;

// program of function overloading

// create function using name of addition
void addition(int num1, int num2)
{
    cout << num1 + num2 << endl;
}

// Some additon function create but parameter are not pass
void addition()
{
    cout << "This is addition function" << endl;
}

int main()
{

    int num1 = 20;
    int num2 = 30;

    addition();
    addition(num1, num2);

    return 0;
}
