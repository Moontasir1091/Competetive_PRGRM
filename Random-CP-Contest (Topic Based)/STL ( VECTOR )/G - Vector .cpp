#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    ll q; cin >>  q;
    vector<ll>v;

    while(q--){
        ll tp; cin >> tp;
        if(tp == 0){
            ll x; cin >> x;
            v.push_back(x);
           
        }
        else if(tp == 1){
            int p; cin >> p;
            cout << v[p] << endl;
            
        }
        else{
            v.pop_back();
            
        }
    }
}