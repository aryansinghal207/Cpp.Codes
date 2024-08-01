// Add the array using function
// #include<iostream>
// using namespace std;
// void add(int arr[5]){
//     int sum=0;
//     for(int i=0;i<5;i++){
//         sum=sum+arr[i];
//     }
//     cout<<sum;
// }
// int main(){
//     int arr[5];
//     for(int i=0;i<5;i++){
//         cin>>arr[i];
//     }
//     add(arr);
// }


// Find the product of the element of array using function
// #include<iostream>
// using namespace std;
// void pro(int arr[5]){
//     int mul=1;
//     for(int i=0;i<5;i++){
//         mul=mul*arr[i];
//     }
//     cout<<mul;
// }
// int main(){
//     int arr[5];
//     for(int i=0;i<5;i++){
//         cin>>arr[i];
//     }
//     pro(arr);
// }


// Find the maximum element from the array
#include<iostream>
using namespace std;
void findmax(int arr[5]){
    int max=arr[0];
    for(int i=0;i<5;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    cout<<max;
}
int main(){
    int arr[5];
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }
    findmax(arr);
}
