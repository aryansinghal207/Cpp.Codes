 // #A class is a user defined datatype #
// #include<iostream>
// using namespace std;
// class student{
//     // Default this is private and can't be accessable outside the function.
//     public:
//     string name;
//     int age, rollno;
//     string grade;
// };
// int main(){
//     student s1;
//     s1.name="Aryan";
//     s1.age=18;
//     s1.rollno=133;
//     s1.grade="O+";
//     cout<<s1.age<<endl;
// }


// #include<iostream>
// using namespace std;
// class student{
//     private:
//     string name;
//     int age, rollno;
//     string grade;
//     // Function Getter and Setter
//     public:
//     void setname(string a){
//         if(a.size()==0){
//             cout<<"Invalid name :";
//             return;
//         }
//         name=a;
//     }
//     void setage(int b){
//         age=b;
//     }
//     void setrollno(int c){
//         rollno=c;
//     }
//     void setgrade(string d){
//         grade=d;
//     }

//     void getname(){
//         cout<<name<<endl;
//     }
//     void getage(){
//         cout<<age<<endl;
//     }
//     void getrollno(){
//         cout<<rollno<<endl;
//     }
//     void getgrade(){
//         cout<<grade<<endl;
//     }
// };
// int main(){
//     student s1;
//     s1.setname("Aryan");
//     s1.setage(18);
//     s1.setrollno(133);
//     s1.setgrade("O+");
//     s1.getname();
//     s1.getage();
//     s1.getrollno();
//     s1.getgrade();
// }


