#include<iostream>
using namespace std;
class student{
    // Default this is private and can't be accessable outside the function.
    public:
    string name;
    int age, rollno;
    string grade;
};
int main(){
    student s1;
    s1.name="Aryan";
    s1.age=18;
    s1.rollno=133;
    s1.grade="O+";
    cout<<s1.age<<endl;
}