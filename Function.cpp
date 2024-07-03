// ##User defined Function 
// #include<bits/stdc++.h>
// using namespace std;
// int  add(int num1,int num2){
//     int sum=num1+num2;
//     return sum;
// }
// int add(int num1,int num2,int num3){
//     int sum=num1+num2+num3;
//     return sum;
// }
// int main(){
//     int a;int b;int c;
//     cin>>a;
//     cin>>b;
//     cin>>c;
//     cout<<add(a,b);
//     cout<<endl;
//     cout<<add(a,b,c);
// }


// ###Pre-defined Function
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     cout<<pow(2,4)<<endl;
//     cout<<sqrt(16)<<endl;
// }

// #include<iostream>
// using namespace std;
// int check(int &n){
//     return n/2;
// }
// int main(){
//     int x=4;
//     cout<<check(x);
//     cout<<x;
//     return 0;
// }


// ##Sum of first 10 n natural number
// #include<iostream>
// using namespace std;
// int natural(int n){
//     int sum=0;
//     for(int i=1;i<=n;i++){
//         sum+=i;
//     }
//     return sum;
// } 
// int main(){
//     cout<<natural(10);
// }
// OR
// #include<bits/stdc++.h>
// using namespace std;
// int natural(int n){
//     if(n==0) return 0;
//     else return n+natural(n-1);
// } 
// int main(){
//     cout<<natural(3);
// }


// Factoraial Code
// #include<bits/stdc++.h>
// using namespace std;
// int natural(int n){
//     if(n==0) return 1;
//     else return n*natural(n-1);
// } 
// int main(){
//     cout<<natural(3);
// }


//##GCD Code
// #include<bits/stdc++.h>
// using namespace std;
// int gcd(int a,int b){
//     int c=0;
//     for(int i=1;i<=a;i++){
//         if(a%i==0 && b%i==0){
//             c=i;
//         }
//     }
//     return c;
// } 
// int main(){
//     cout<<gcd(10,12);
// } 


// #Co-prime
// #include<bits/stdc++.h>
// using namespace std;
// int cop(int a,int b){
//     int c=0;
//     for(int i=1;i<=a;i++){
//         if(a%i==0 && b%i==0){
//             c=i;
//         } 
//     }
//     if(c==1){
//         return 1;
//     }
//     else return 0;
// }
// int main(){
//     cout<<cop(22,24);
// }
