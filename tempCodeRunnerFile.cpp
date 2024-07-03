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