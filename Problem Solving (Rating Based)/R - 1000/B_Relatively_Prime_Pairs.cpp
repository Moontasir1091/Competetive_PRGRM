#include<bits/stdc++.h>
using namespace std;
int main(){
    long long l,r; cin >> l >> r;
    if((r-l)%2 != 0){
        cout << "YES" << endl;
        while(l <= r){
        cout << l << " " <<  l+1 << endl;
        l = l+2;  
         }

    }
    else{
        cout << "NO" << endl;
    }
    
}