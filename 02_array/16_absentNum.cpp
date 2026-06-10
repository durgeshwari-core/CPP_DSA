#include<iostream>
using namespace std;

void absentNum(int arr[],int n ){
   int sum=0,expsum=0;
   int actsum;
   
   if(arr[i]+1!=arr[i+1]){ 
    expsum=arr[i]+1<<endl;
 }
    for(int i=0;i<n;i++){
            sum=sum+arr[i];
        
    }
    actsum=sum-expsum;

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
    absentNum(arr,n);
}