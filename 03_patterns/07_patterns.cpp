#include<bits/stdc++.h>
using namespace std;

void patterns(int n){
    for(int i = 0; i < n; i++){
        
        // spaces
        for(int j = 0; j < n - i - 1; j++){
            cout << " ";
        }

        // stars
        for(int j = 0; j < 2*i + 1; j++){
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