#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int n1 = n+1;
        int n2 = n-1;
        if(n1 % 3 == 0 || n2 % 3 == 0){
            cout << "First" << endl;
    }
    else{
        cout << "Second" << endl;
    }

}}