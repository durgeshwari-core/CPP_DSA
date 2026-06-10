#include<iostream>
using namespace std;

void removeDupl(int arr[],int n ){
    
    
    for(int i=0;i<n;i++){
        if(arr[i]!=arr[i+1]){
            cout<<arr[i];
        }
    }
    // cout<<"new array will be"<<endl;
    // for(int i=0;i<n;i++){
    //     cout<<arr[i];
    // }
}
int main(){
    int n ;
    int arr[100];
    cout<<"enter size of array n"<<endl;
    cin>>n;
    cout<<"enter elemnts"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    removeDupl(arr,n);
}