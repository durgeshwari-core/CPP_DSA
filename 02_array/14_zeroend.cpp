#include<iostream>
using namespace std;

void zeroend(int arr[],int n){
    int zero=0;
    for(int i =0;i<n;i++){
        if(arr[i]==0){
            zero=zero+1;
        }
        
    }
    cout << "Sorted array: ";
   
   
     for(int i = 0; i <n; i++) {
        if(arr[i]!=0){
        cout << arr[i] << " ";
    }
}
for(int i=0;i<zero;i++){
    cout<<'0'<<" ";
}
   

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
    
    zeroend(arr,n);
}