#include<iostream>
using namespace std;
void commonElement(int arr1[],int arr2[],int n,int m){
    for(int i =0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr1[i]==arr2[j]){
                cout<<arr1[i]<<endl;
            }
        
        }
    }
}
int main(){
    int arr1[100];
    int arr2[100];
    int n,m;
    cout<<"enter size of array";
    cin>>n;
    cin>>m;
    
    cout<<"enter arr1 and arr2"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }
    for(int i=0;i<n;i++){
        cin>>arr2[i];
    }
    commonElement(arr1,arr2,n,m);
}