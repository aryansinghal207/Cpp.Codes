// ## Print the number from 1 to n (Parameterised)
// #include<iostream>
// using namespace std;
// void print(int n,int x){
//     if(n==x+1) return;
//     cout<<n<<endl;
//     print(n+1,x);
// }
// int main(){
//     int a,b;
//     cout<<"Enter the value of a :";
//     cin>>a;
//     cout<<"Enter the last value : ";
//     cin>>b;
//     print(a,b);
// }


// ## Return the sum from 1 to n 
// #include<iostream>
// using namespace std;
// int sum(int n){
//     if(n==1) return 1;
//     return n + sum(n-1);
// }
// int main(){
//     int a;
//     cout<<"Enter the value of a : ";
//     cin>>a;
//     cout<<sum(a);
// }


// ## Make a function which calculate factorial of n using recursion.
#include<iostream>
using namespace std;
int fact(int n){
    if(n==0 || n==1) return 1;
    return n*fact(n-1);
}  
int main(){
    int a;;
    cout<<"Enter the value of a : ";
    cin>>a;
    cout<<fact(a);
}