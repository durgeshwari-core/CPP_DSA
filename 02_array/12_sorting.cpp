#include<iostream>
using namespace std;
void sorting(int arr[],int n){
    for(int i =0;i<n;i++){
        for(int i=0;i<n;i++){
            if(arr[i]>arr[i+1]){
              swap(arr[i],arr[i+1]);
            }
        
        }
    }
    cout << "Sorted array: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main(){
    int arr[100];
    int n;
    cout<<"enter size of array"<<endl;
    cin>>n;
    cout<<"enter element"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    sorting(arr,n);
}