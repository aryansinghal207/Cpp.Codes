#include<iostream>
using namespace std;
class customer {
public:
    string name;
    int account;
    int balance;
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
    // Constructor overloading  :- when a constructor takes different number of inputs and shows the result. 
    customer(string a, int c) {
        // this-> :- It is used to store the pointer value.
        this->name = a;
        this->balance = c;
        cout << "Parameterized constructor is called." << endl;
    }
    // Inline constructor :- This is showing error bcz compiler can't decide from whom it should take the parameterized value.
    // inline customer(string a,int b,int c): name(a),account(b),balance(c){
    // }
    void display() {
        cout << "Name: " << name << endl;
        cout << "Account: " << account << endl;
        cout << "Balance: " << balance << endl;
    }
    // Copy Constructor

    // Deep copy :- when we copy the data of one constructor to other and after copying if we change one value of copied constructor it doesnot make any changes to previous constructor.
    
    // Shallow copy :- when we copy the data of one constructor to other and after copying if we change one value of copied constructor it make changes to previous constructor also.
    customer(customer &B){
        name=B.name;
        account=B.account;
        balance=B.balance;
    }
};
int main() {
    customer A1; //Default constructor
    A1.name="Tohit";
    A1.account=987;
    A1.balance=345;
    customer A2("Rohit", 123, 10000);
    customer A3("Mohit",10000);//Multiple Constructor
    customer A4(A2);
    A1.display();
    A2.display();
    A3.display();
    A4.display();
    return 0;
}


