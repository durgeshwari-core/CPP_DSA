#include<iostream>
using namespace std;

void minmax(int arr[],int size){
    int min=arr[0],max=arr[0];
    for(int i =0;i<size;i++){
       
        if(arr[i]<min){
            min=arr[i];
        }
        else if(arr[i]>max){
            max=arr[i];
        }
    }
    cout<<max<<endl;
    cout<<min<<endl;
}

int main(){
    int size;
    cin>>size;
    int arr[100];
    
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    minmax(arr,size);
    
}