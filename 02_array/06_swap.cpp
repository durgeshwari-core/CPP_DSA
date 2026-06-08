#include <iostream>
using namespace std;
void reverse(int arr[],int n){
    int start=0;
    int end=n-1;
    for(int start=0,int end=n-1;start>=n-1;start++,end--){
       arr[start]=arr[end];
    }
    
        cout<<arr[start];
    
}
int main(){
    int n ,arr[100];
    cin>>n;
    cout<<"enter element ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    reverse(arr,n);
}