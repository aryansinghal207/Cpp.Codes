#include<iostream>
using namespace std;
class customer{
    string name;
    int account,balance;
    static int total_customer;
    public:
    customer(string name,int account,int balance){
        this->name=name;
        this->account=account;
        this->balance=balance;
        total_customer++;
    }
    void display(){
        cout<<name<<" "<<account<<" "<<balance<<" "<<total_customer<<" "<<endl;
    }
};
int customer::total_customer=0;
int main(){
    int total=3;
    customer A1("Aryan",123,10000);
    customer A2("Arush",987,11111);
    A1.display();
    A2.display();
}