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
#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={1,2,7,5,18};
    int num;
    cin>>num;
    int ind=-1;
    for(int i=0;i<5;i++){
        if(arr[i]==num){
            ind=i;
        }
    }
    cout<<ind<<endl;
}