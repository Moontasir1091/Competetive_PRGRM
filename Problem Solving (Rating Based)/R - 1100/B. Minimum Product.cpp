#include<bits/stdc++.h>
using namespace std;

int main(){
    int test; cin >> test;
    while(test--){
        int a, b, x, y,n; cin >> a >> b >> x >> y >> n;;

        long long ans = 1e18;

        for(int i=0; i< 2;++i){
            int ba = min(a-x, n);
            int bb = min(n-ba, b-y);

            ans = min(ans, (long long)(a-ba)*(b-bb));
            swap(a,b);
            swap(x,y);

        }
        cout << ans << endl;
    }
}