#include<iostream>
using namespace std;
class cricketer{
    public:
    string name;
    int runs;
    float avg;
    cricketer(string name,int runs,float avg){
        this->name=name;
        this->runs=runs;
        this->avg=avg;
    }
};
int main(){
    cricketer c1("Virat",25000,56);
    cricketer* c2=new cricketer("Dhoni",23000,72);
    cout<<c1.name<<" "<<c1.runs<<endl;
    cout<<c1.name<<" "<<c1.runs<<endl;
}