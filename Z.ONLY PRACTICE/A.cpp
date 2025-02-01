#include<bits/stdc++.h>
using namespace std;
int main(){
int t; cin >> t;
while(t--){
    long long l , r;
    cin >> l >> r;

    if(l==1 && r==1){
        cout << 1 << endl;
        continue;
    }
     if(l == r){
        cout << 0 << endl;
        
     }

     else{
        cout << abs(r-l) << endl;
     }


}
    
    





}
