#include<iostream>
using namespace std;
void pairsum(int arr[],int n,int target){
    for(int i =0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j]==target){
              cout << "(" << arr[i] << "," << arr[j] << ")" << endl;
            }
        
        }
    }
}
int main(){
    int arr[100];
    int n,target;
    cout<<"enter size of array"<<endl;
    cin>>n;
    cout<<"enter target"<<endl;
    cin>>target;
   
    
    cout<<"enter element"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    pairsum(arr,n,target);
}