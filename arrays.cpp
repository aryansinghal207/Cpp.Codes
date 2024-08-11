// ### To find maximum element of an array.
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int arr[]={1,2,7,5,18};
//     int max=arr[0];
//     for(int i=1;i<5;i++){
//         if(arr[i]>max){
//             max=arr[i];
//         }
//     }
//     cout<<max<<endl;
// }


// ### Linear Search
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int arr[]={1,2,7,5,18};
//     int num;
//     cin>>num;
//     int ind=-1;
//     for(int i=0;i<5;i++){
//         if(arr[i]==num){
//             ind=i;
//         }
//     }
//     cout<<ind<<endl;
// }

// Find number of pairs whose sum is equal to the target sum.
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int array[5]={0,1,2,3,4};
//     int target=3;
//     int pairs=0;
//     for(int i=0;i<5;i++){
//         for(int j=i+1;j<5;j++){
//             if(array[i]+array[j]==target){
//                 pairs++;
//             }
//         }
//     }
//     cout<<pairs<<endl;
// }


// Find number of triplets whose sum is equal to the target sum.
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int array[]={3,1,2,4,0,6};
//     int target=6;
//     int size=6;
//     int pairs=0;
//     for(int i=0;i<size;i++){
//         for(int j=i+1;j<size;j++){
//             for(int k=j+1;k<size;k++){
//                 if(array[i]+array[j]+array[k]==target){
//                     pairs++;
//                 }
//             }
//         }
//     }
//     cout<<pairs<<endl;
// }


// Array Manupulation
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int array[]={1,3,2,5,2,3,1};
//     int size=7;
//     for(int i=0;i<size;i++){
//         for(int j=i+1;j<size;j++){
//             if(array[i]==array[j]){
//                 array[i]=array[j]=-1;
//             }
//         }
//     }
//     for(int i=0;i<size;i++){
//         if(array[i]>0){
//             cout<<array[i]<<endl;
//         }
//     }
// }


// Find the largest element in the given array.
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int array[]={1,43,55,34,88};
//     int size=5;
//     int max=0;
//     for(int i=0;i<size;i++){
//         if(array[i]>max){
//             max=array[i];
//         }
//     }
//     cout<<max;
// } 


//### Find the Second largest element in the given array.
// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     int array[] = {1, 43, 55, 34, 88};
//     int size = 5;
//     int max = INT_MIN;
//     int second_max = INT_MIN;
//     for (int i = 0; i < size; i++) {
//         if (array[i] > max) {
//             second_max = max;
//             max = array[i];
//         } else if (array[i] > second_max && array[i] != max) {
//             second_max = array[i];
//         }
//     }
//     if (second_max == INT_MIN) {
//         cout << "No second largest element";
//     } else {
//         cout << second_max;
//     }
//     return 0;
// }


//### Rotataing a given array by k steps
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int arr[]={1,2,3,4,5};
//     int n=5;
//     int k=4;
//     k=k%n;
//     int j=0;
//     int ansarr[5];
//     for(int i=n-k;i<n;i++){
//         ansarr[j++]=arr[i];
//     }
//     for(int i=0;i<=k;i++){
//         ansarr[j++]=arr[i];
//     }
//     for(int i=0;i<n;i++){
//         cout<<ansarr[i]<<" ";
//     }
//     cout<<endl;
// }


// Sort an array consisting of only 0's and 1's
#include<bits/stdc++.h>
using namespace std;
void sortzero(vector<int> &v){
    int zero=0;
    for(int ele:v){
        if(ele==0){
            zero++;
        }
    }
    for(int i=0;i<v.size();i++){
        if(i<zero){
            v[i]=0;
        }
        else{
            v[i]=1;
        }
    }
}
int main(){
    int n;
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++){
        int ele;cin>>ele;
        v.push_back(ele);
    }
    sortzero(v);
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }cout<<endl;
    return 0;
}