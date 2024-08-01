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
// #include<iostream>
// using namespace std;
// int fact(int n){
//     if(n==0 || n==1) return 1;
//     return n*fact(n-1);
// }  
// int main(){
//     int a;;
//     cout<<"Enter the value of a : ";
//     cin>>a;
//     cout<<fact(a);
// }


// ## Print the value of a raised to the power b
// #include<iostream>
// using namespace std;
// int power(int n,int x){
//     if(x==0) return 1;
//     return n*power(n,x-1);
// }
// int main(){
//     int a,b;
//     cout<<"Enter the value of a :";
//     cin>>a;
//     cout<<"Enter the last value : ";
//     cin>>b;
//     cout<<power(a,b);
// }


// Print fibonacci series usng recursion
#include<iostream>
using namespace std;
int fibo(int n){
    if(n==0 || n==1) return 1;
    return fibo(n-1)*fibo(n-2);
}
int main(){
    int a,b;
    cout<<"Enter the value of a :";
    cin>>a;
    cout<<"The fibo of"<<a<<"is : "<<fibo(a);
}