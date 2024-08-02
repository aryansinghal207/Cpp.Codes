// WAP to print the transpose of a matrix
#include<iostream>
using namespace std;
int main(){
    int arr[2][3];
    arr[0][0]=1;
    arr[0][1]=2;
    arr[0][2]=3;
    arr[1][0]=4;
    arr[1][1]=5;
    arr[1][2]=6;
    cout<<"The Actual Matrix is : ";
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            cout<<arr[i][j];
        }
        cout<<endl;
    }
    cout<<"The Transpose matrix is : ";
    for(int j=0;j<3;j++){
        for(int i=0;i<2;i++){
            cout<<arr[i][j];
        }
        cout<<endl;
    }
}