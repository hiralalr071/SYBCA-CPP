
#include<iostream>

using namespace std;

class Accout{
    int balance;
    string name;


    public:
    Accout(int balance,string name){
       this->balance = balance;
       this->name = name;   
    }

    void showdetail(){
        cout << "Account Balance =" << this->balance;
        cout << "Account H Name = " << this->name;
    }
};

int main(){
    Accout a1(1010,"Hariom Rathod");

    a1.showdetail();

    return 0;
}