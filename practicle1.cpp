#include <iostream> // Use iostream for cout
using namespace std;

// This Function Is Use To Check Number Is Odd Or even
void oddEven(int num1)
{
    if (num1 % 2 == 0)
    {
        cout << "Number Is Even" << endl;
    }
    else
    {
        cout << "Number is odd" << endl;
    }
}

// This function Is use to calculate the average og three numbers
void avergeOfThreNumbers(int num1, int num2, int num3)
{
    int average = 0;
    average = (num1 + num2 + num3) / 3;
    cout << "Average Of Three Numbers: " << average;
}

int main()
{
    int num1, n1, n2, n3;
    cout << "Enter The Number";
    cin >> num1;
    oddEven(num1);

    n1 = 30;
    n2 = 60;
    n3 = 80;

    avergeOfThreNumbers(n1, n2, n3);
}