#include<iostream>
using namespace std;
class vector{
    public:
    int size;
    int capacity;
    int* arr;
    vector(){
        size=0;
        capacity=1;
        arr=new int[1];
    }
    void add(int ele){
        if(size==capacity){
            capacity*=2;
            int*arr2=new int[capacity];
            for(int i=0;i<size;i++){
                arr2[i]=arr[i];
            }
            arr=arr2;
        }
        arr[size++]=ele;
    }
    void print(){
        for(int i=0;i<size;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    int get(int idx){
        if(idx>=size || idx<0){
            cout<<"Invalid Index"<<endl;
            return 0;
        }
        return arr[idx];
    }
    void remove(){
        if(size==0){
            cout<<"Array is empty"<<endl;
        }
        size--;
    }
};
int main(){
    vector v;
    cout<<v.size<<" "<<v.capacity<<endl;
    v.add(10);
    v.print();
    cout<<v.size<<" "<<v.capacity<<endl;
    v.add(14);
    v.print();
    cout<<v.size<<" "<<v.capacity<<endl;
    v.add(14);
    v.print();
    v.remove();
    v.print();
    cout<<v.size<<" "<<v.capacity<<endl;
}