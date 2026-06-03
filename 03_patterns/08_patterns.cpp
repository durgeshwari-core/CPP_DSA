#include<bits/stdc++.h>
using namespace std;

void patterns(int n){
    for(int i = n; i >=0; i--){
        
        // spaces
        for(int j =0 ; j<n-i; j++){
            cout << " ";
        }

        // stars
        for(int j = 0 ; j<i*2+1; j++){
            cout << "*";
        }

        cout << endl;
    }
}

int main(){
    cout << "Enter the value of n: ";
    int n;
    cin >> n;
    patterns(n);
}