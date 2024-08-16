#include<iostream>
using namespace std;
class customer {
    string name;
    int account;
    int balance;
public:
//Default Constructor
    customer() {
        cout << "Default constructor is called." << endl;
    }
//Parametrized Constructor 
    customer(string a, int b, int c) {
        name = a;
        account = b;
        balance = c;
        cout << "Parameterized constructor is called." << endl;
    }
    void display() {
        cout << "Name: " << name << endl;
        cout << "Account: " << account << endl;
        cout << "Balance: " << balance << endl;
    }
};
int main() {
    customer A1;
    customer A2("Rohit", 123, 10000);
    customer A3("Mohit",321,10000);
    A1.display();
    A2.display();
    A3.display();
    return 0;
}