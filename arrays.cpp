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
#include<bits/stdc++.h>
using namespace std;
int main(){
    int array[]={3,1,2,4,0,6};
    int target=6;
    int size=6;
    int pairs=0;
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            for(int k=j+1;k<size;k++){
                if(array[i]+array[j]+array[k]==target){
                    pairs++;
                }
            }
        }
    }
    cout<<pairs<<endl;
}