#include<bits/stdc++.h>
using namespace std;

int main(){
    int tt; cin >> tt;
    while(tt--){
        int x, y, n; cin >> x >> y >> n;
        
        int p = floor((n-y)/x);
        int ans = (x*p) + y;
        cout << ans << endl;
    }
}