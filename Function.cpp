#include<bits/stdc++.h>
using namespace std;
int  add(int num1,int num2){
    int sum=num1+num2;
    return sum;
}
int add(int num1,int num2,int num3){
    int sum=num1+num2+num3;
    return sum;
}
int main(){
    int a;int b;int c;
    cin>>a;
    cin>>b;
    cin>>c;
    cout<<add(a,b);
    cout<<endl;
    cout<<add(a,b,c);
}