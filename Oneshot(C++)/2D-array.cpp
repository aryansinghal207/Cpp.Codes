// // WAP to print the transpose of a matrix
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[2][3]={{1,2,3},{4,5,6}};
//     cout<<"The Actual Matrix is : ";
//     for(int i=0;i<2;i++){
//         for(int j=0;j<3;j++){
//             cout<<arr[i][j];
//         }
//         cout<<endl;
//     }
//     cout<<"The Transpose matrix is : ";
//     for(int j=0;j<3;j++){
//         for(int i=0;i<2;i++){
//             cout<<arr[i][j];
//         }
//         cout<<endl;
//     }
// }


// WAP to add 2 matrixes
// #include<iostream>
// using namespace std;
// int main(){
//     int row;
//     int column;
//     cout<<"Enter number of rows : ";
//     cin>>row;
//     cout<<"Enter number of colums : ";
//     cin>>column;
//     int mat1[row][column],mat2[row][column],summat[row][column];
//     cout<<"Enter element of first matrices : "<<endl;
//     for(int i=0;i<row;i++){
//         for(int j=0;j<column;j++){
//             cout<<"Element [" << i << "," << j << "]: ";
//             cin>>mat1[i][j];
//         }
//     }
//     cout<<"Enter element of Second matrices : "<<endl;
//     for(int i=0;i<row;i++){
//         for(int j=0;j<column;j++){
//             cout<<"Element [" << i << "," << j << "]: ";
//             cin>>mat2[i][j];
//         }
//     }
//     for(int i=0;i<row;i++){
//         for(int j=0;j<column;j++){
//             summat[i][j]=mat1[i][j]+mat2[i][j];
//         }
//     }
//     cout<<"The elements of resultant matrices : "<<endl;
//     for(int i=0;i<row;i++){
//         for(int j=0;j<column;j++){
//             cout<<summat[i][j]<<" ";
//         }
//         cout<<endl;
//     }
// }


// 