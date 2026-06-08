#include<iostream>
using namespace std;

void unique(int arr[],int N){
    for(int i=0;i<N;i++){
        for(int j=i;j<N;j++){
            if(arr[i]!=arr[j]){
                cout<<arr[i];
            }
        }
    }
}

int main(){
    int arr[100];
    int n;
    cin>>n;
    int N=2*n+1;
    cout<<"enter array";
    for(int i =0;i<N;i++){

       
        cin>>arr[i];
    }
    unique(arr,N);
    
}