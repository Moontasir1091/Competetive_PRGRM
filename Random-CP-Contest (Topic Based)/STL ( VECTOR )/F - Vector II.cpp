#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    ll n,q; cin >> n >> q;
    vector<ll>v[n];

    while(q--){
        ll tp; cin >> tp;
        if(tp == 0){
            ll t,x; cin >> t >> x;
            v[t].push_back(x);

        }
        else if(tp == 1){
            ll t; cin >> t;
            for(ll k=0;k<v[t].size();++k){
            	cout << v[t][k];
            	if(k != v[t].size()-1){
            		cout << " ";
            	}
            }
            cout << '\n';
        }
        else{
            ll t; cin >> t;
            v[t].clear();

        }
    }
}