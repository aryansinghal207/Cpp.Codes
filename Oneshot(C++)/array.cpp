// Add the array using function
#include<iostream>
using namespace std;
void add(int arr[5]){
    int sum=0;
    for(int i=0;i<5;i++){
        sum=sum+arr[i];
    }
    cout<<sum;
}
int main(){
    int arr[5];
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }
    add(arr);
}
