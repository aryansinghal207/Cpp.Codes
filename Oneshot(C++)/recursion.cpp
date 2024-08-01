#include<iostream>
using namespace std;
void print(int n,int x){
    if(n==x+1) return;
    cout<<n<<endl;
    print(n+1,x);
}
int main(){
    int a,b;
    cout<<"Enter the value of a :";
    cin>>a;
    cout<<"Enter the last value : ";
    cin>>b;
    print(a,b);
}