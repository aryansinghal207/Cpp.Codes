// It is an instance member function that is invoked automatically whenever an object is going to be destroyed.
// It is a last function that is going to be called before an object is destroyed.
// #include<iostream>
// using namespace std;
// class customer{
//    string name;
//    int *data;
//    public:
//    customer(){
//       name="Rohit";
//       data=new int;
//       *data=10;
//       cout<<"Constructor is called \n";
//    } 
//    // Destructor
//    ~customer(){
//       cout<<"Destructor is called \n";
//    }
// };
// int main(){
//    customer A1;
// }

#include<iostream>
using namespace std;
class customer{
   string name;
   int *data;
   public:
   customer(string name){
      this->name=name;
      cout<<"Constructor is "<<name<<endl;
   }
   // Destructor
   ~customer(){
      cout<<"Destructor is "<<name<<endl;
   } 
};
int main(){
   customer A1("1"),A2("2"),A3("3");
}