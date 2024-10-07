#include <iostream>

using namespace std;

class Complex {
private:
    float real;
    float imag;

public:
    // Constructor
    Complex(float r = 0, float i = 0) : real(r), imag(i) {}

    // Friend function to overload the + operator
    friend Complex operator+(const Complex &c1, const Complex &c2);

    // Function to display the complex number
    void display() {
        cout << real << " + " << imag << "i" << endl;
    }
};

// Overloading the + operator using a friend function
Complex operator+(const Complex &c1, const Complex &c2) {
    return Complex(c1.real + c2.real, c1.imag + c2.imag);
}

int main() {
    Complex c1(3.5, 2.5); // 3.5 + 2.5i
    Complex c2(1.5, 4.5); // 1.5 + 4.5i

    Complex c3 = c1 + c2; // Using overloaded + operator

    cout << "First Complex Number: ";
    c1.display();

    cout << "Second Complex Number: ";
    c2.display();

    cout << "Sum of Complex Numbers: ";
    c3.display();

    return 0;
}