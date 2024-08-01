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
// #include<iostream>
// using namespace std;
// void findmax(int arr[5]){
//     int max=arr[0];
//     for(int i=0;i<5;i++){
//         if(arr[i]>max){
//             max=arr[i];
//         }
//     }
//     cout<<max;
// }
// int main(){
//     int arr[5];
//     for(int i=0;i<5;i++){
//         cin>>arr[i];
//     }
//     findmax(arr);
// }


// Find the minimum element from the array
// #include<iostream>
// using namespace std;
// void findmin(int arr[5]){
//     int min=arr[0];
//     for(int i=0;i<5;i++){
//         if(arr[i]<min){
//             min=arr[i];
//         }
//     }
//     cout<<min;
// }
// int main(){
//     int arr[5];
//     for(int i=0;i<5;i++){
//         cin>>arr[i];
//     }
//     findmin(arr);
// }


// Write a code which print the square of the element in the array.
#include<iostream>
using namespace std;
void square(int arr[5]){
    int a[5];
    for(int i = 0; i < 5; i++){
        a[i] = arr[i] * arr[i]; // Square the elements of the input array
    }
    for(int i = 0; i < 5; i++){
        cout << a[i] << " "; // Print each squared element
    }
}

int main(){
    int arr[5];
    for(int i = 0; i < 5; i++){
        cin >> arr[i];
    }
    square(arr);
}
