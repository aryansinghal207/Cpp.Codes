// #### Pattern Printing

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int i,j;
//     for(i=1;i<=n;i++){
//         for(j=1;j<=n;j++){
//             cout<<"*";
//         }
//         cout<<"\n";
//     }
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int i,j;
//     for(i=1;i<=n;i++){
//         for(j=1;j<=i;j++){
//             cout<<"*";
//         }
//         cout<<"\n";
//     }
// }


// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int i,j;
//     for(i=1;i<=n;i++){
//         for(j=n;j>=1;j--){
//             if(i>=j){
//                 cout<<"*";
//             }
//             else{
//                 cout<<" ";
//             }
//         }
//         cout<<"\n";
//     }
// }

// //Triangle Pattern
// #include <iostream>
// using namespace std;
// int main() {
//     int a = 5;
//     for (int i=1;i<=a;i++) {
//         for (int j=1;j<=a-i;j++) {
//             cout << " ";
//         }
//         for (int k = 1; k <= (2 * i - 1); k++) {
//             cout << "*";
//         }
//         cout << endl;
//     }
// }


// #include <iostream>
// #include <string>
// using namespace std;
// int main() {
//     int n;
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n;j++){
//             if(i==1 || i==n || j==1 || j==n){
//                 cout<<"*";
//             }
//             else{
//                 cout<<" ";
//             }    
//         }
//         cout<<"\n";
//     }
// }

// #include <iostream>
// using namespace std;
// int main() {
//     int a = 5;
//     for (int i =a;i>=1;i--) {
//         for (int j=a-i;j>=1;j--) {
//             cout << " ";
//         }
//         for (int k = 1; k <= (2 * i - 1); k++) {
//             cout << "*";
//         }
//         cout << endl;
//     }
// }


// #include <iostream>
// using namespace std;
// int main() {
//     int a ;
//     cin>>a;
//     for (int i=1;i<=a;i++) {
//         for (int j=1;j<=a-i;j++) { 
//             cout << " ";
//         }
//         for (int k = 1; k <= (2 * i - 1); k++) {
//             cout << "*";
//         }
//         cout << endl;
//     }
//     for (int i =a-1;i>=1;i--){
//         for (int j=a-i;j>=1;j--) {
//             cout << " ";
//         }
//         for (int k = 1; k <= (2 * i - 1); k++) {
//             cout << "*";
//         }
//         cout << endl;
//     }
// }


#include<iostream>
using namespace std;
int main(){
    for(int i=1;i<=7;i++){
        for(int j=1;j<=7;j++){
            if(i<=4){
                if((j>=1 && j<=5-i)||(j>=i+3&&j<=7)){
                    cout<<"*";
                }
                else{
                    cout<<" ";
                }
            }
            else{
                if((j>=1 && j<=i-3)||(j>=11-i&&j<=7)){
                        cout<<"*";
                }
                else{
                    cout<<" ";
                }
            }
        }
        cout<<endl;
    }    
}
