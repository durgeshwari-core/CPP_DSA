#include <iostream>
#include <cmath>

using namespace std;
int main()
{
    int n ;
    cin>>n;
    int arm=0 ;
   int po=0;
    while(n>0){
        int num =n%10;
        po=po+1;
        n=n/10;
    }
     while(n>0){
        int num =n%10;
        arm= (arm*10)+std::pow(num, po); 

}
cout<<arm;
}