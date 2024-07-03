//##To check weather a number is havibg odd number of factors or even
// #include<iostream>
// #include<math.h>
// using namespace std;
// int main(){
//     int n=36;
//     int k=sqrt(n);
//     if(k*k==n){
//         cout<<"Odd";
//     }
//     else{
//         cout<<"Even";
//     }
// }

// If we include this libraray then we need not to include any other #include<bits/stdc++.h>

// Check Weather a number is prime or not
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     for(int i=2;i<=n-1;i++){
//         if(n%i==0){
//             cout<<"not prime";
//             return 0;
//         }
//     }
//     cout<<"prime";
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int a;
//     cin>>a;
//     int b;
//     cin>>b;
//     int c=((a+b)/2);
//     cout<<c;
//     cout<<"\n";
//     int d=((b-a)+1/2);
//     cout<<d;
// }


// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int a,b;
//     cin>>a;
//     cin>>b;
//     int gcd=0;
//     for(int i=1;i<=a;i++){
//         if(a%i==0 && b%i==0){
//             gcd=i;
//         }
//     }
//     cout<<gcd;
//     return 0;
// }

// #The code To find GCD by using divident method(Euclidean Division Method)
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int a,b;
//     cin>>a;
//     cin>>b;
//     while(b%a!=0){
//         int x=a;
//         a=b%a;
//         b=x;
//     }
//     cout<<a;
//     return 0;
// }

// Print Number of Prime Number between 1 to 100   
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n=100;
//     int i,j;
//     for( i=2;i<100;i++){
//         for( j=2;j<i;j++){
//             if (i%j==0){
                
//                 break;
//             }
//         }
//         if (j==i) cout<<i;
//     }
// }

// Sieve of Eratosthnes :- To find prime number between some given range we use this we calculate the root of the last number and check upto the root number we cancel the multiple of those number and lest ones are prime number in between that given range.

