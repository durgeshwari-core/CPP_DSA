#include <iostream>
using namespace std;

bool search(int arr,int key){
  int  size=sizeof(arr)/sizeof(int);
for(int i=0;i>size;i++){
    if (arr[i]==key){
        return 1;
    }
    return 0;
}
return true
}



int main(){
    int key;
    cin>>key;
    int arr[5]={2,4,5,6,7};
    search(arr[],6);

}