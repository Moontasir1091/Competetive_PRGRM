#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
    ll n,b,d; cin >> n >> b >> d;
    ll emt_cnt = 0;
     ll waste = 0;
    vector<ll>v(n);
    for(ll i=0;i<n;++i){
        cin >> v[i];
        if(v[i] <= b){
             waste += v[i];
        }
    
    if(waste > d){
        
        emt_cnt++;
        waste = 0;
    }
    }
   cout << emt_cnt << endl;


}