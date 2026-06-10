#include<iostream>
using namespace std;
void sorting(int arr[],int n){
    int zero=0,one=0,two=0;
    for(int i =0;i<n;i++){
        if(arr[i]==0){
            zero=zero+1;
        }
        if(arr[i]==1){
            one=one+1;
        }
        if(arr[i]==2){
            two=two+1;
        }
    }
    cout << "Sorted array: ";
    for(int i = 0; i < zero; i++) {
        cout << "0" << " ";
    }
   
     for(int i = 0; i <one; i++) {
        cout << "1" << " ";
    }
    
     for(int i = 0; i <two; i++) {
        cout << "2" << " ";
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
    
    sorting(arr,n);
}