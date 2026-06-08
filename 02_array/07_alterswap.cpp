#include<iostream>
using namespace std;

void printarray(int arr[],int size){
    for(int i =0;i<size;i++){

        cout<<arr[i];
    }
}

void alterswap(int arr[],int size){
    for(int i = 0;i<size;i+=2){
        if(arr[i+1]<size){
            swap(arr[i],arr[i+1]);
        }
    }
    
}

int main(){
    int arr[100];
    int size;
    cout<<"enter size";
    cin>>size;
    cout<<"enter array";
    for(int i =0;i<size;i++){

       
        cin>>arr[i];
    }

    alterswap(arr,size);
    printarray(arr,size);
}