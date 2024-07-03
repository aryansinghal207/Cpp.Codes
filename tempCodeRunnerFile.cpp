#include<bits/stdc++.h>
using namespace std;
int cop(int a,int b){
    int c=0;
    for(int i=1;i<=a;i++){
        if(a%i==0 && b%i==0){
            c=i;
        } 
    }
    if(c==1){
        return 1;
    }
    else return 0;
}
int main(){
    cout<<cop(22,24);
}
