#include<iostream>
using namespace std;
class person{
public:    
    string name;
    int age;
    int salary;
    // //These lines show error bcz when we assign name=name the compiler cannot detect which value is assigned to the name. And to solve this we use this-> keyword.
    person(string name,int age,int salary){
        this->name=name;
        this->age=age;
        this->salary=salary;
    } 
    // person(string n,int a,int s){
    //     name=n;
    //     age=a;
    //     salary=s;
    // }    
};
int main(){
    person p1("Aryan",19,100000);
    cout<<p1.name<<endl<<p1.age<<endl<<p1.salary<<endl<<" ";

}