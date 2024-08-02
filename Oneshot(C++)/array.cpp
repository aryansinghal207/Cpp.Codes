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
// #include<iostream>
// using namespace std;
// void square(int arr[5]){
//     int a[5];
//     for(int i = 0; i < 5; i++){
//         a[i] = arr[i] * arr[i]; // Square the elements of the input array
//     }
    // for(int i = 0; i < 5; i++){
    //     cout << a[i] << " "; // Print each squared element
    // }
// }

// int main(){
//     int arr[5];
//     for(int i = 0; i < 5; i++){
//         cin >> arr[i];
//     }
//     square(arr);
// }


// WAP in which make odd index element double and even index element increment by 10
// #include<iostream>
// using namespace std;
// void change(int arr[8]){
//     int a[8];
//     for(int i = 0; i < 8; i++){
//         if(i % 2 == 0){ // Check if index is even
//             a[i] = arr[i] + 10;
//         } else { // Index is odd
//             a[i] = arr[i] * 2;
//         }
//     }
//     for(int i = 0; i < 8; i++){
//         cout << a[i] << " "; // Print each transformed element
//     }
//     cout << endl;
// }
// int main(){
//     int arr[8];
//     for(int i = 0; i < 8; i++){
//         cin >> arr[i];
//     }
//     change(arr);
//     return 0;
// }


// Find the second largest element from array
// #include <iostream>
// using namespace std;
// void findSecondMax(int arr[5]) {
//     int max = INT_MIN;  // Initialize max to the smallest possible integer
//     int secondMax = INT_MIN;  // Initialize secondMax to the smallest possible integer
//     for (int i = 0; i < 5; i++) {
//         if (arr[i] > max) {
//             secondMax = max;  // Update secondMax before max changes
//             max = arr[i];  // Update max
//         } else if (arr[i] > secondMax && arr[i] != max) {
//             secondMax = arr[i];  // Update secondMax if the current element is not equal to max
//         }
//     }
//     if (secondMax == INT_MIN) {
//         cout << "No second largest element found";
//     } else {
//         cout << "The second largest element is: " << secondMax;
//     }
// }
// int main() {
//     int arr[5];
//     cout << "Enter 5 elements: ";
//     for (int i = 0; i < 5; i++) {
//         cin >> arr[i];
//     }
//     findSecondMax(arr);
// }
