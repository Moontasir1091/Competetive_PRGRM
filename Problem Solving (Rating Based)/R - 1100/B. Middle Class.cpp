#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n, x; 
    cin >> n >> x;
    vector<int> v(n);
    
    for(int i = 0; i < n; ++i) cin >> v[i];

    sort(v.begin(), v.end()); 

    long long sum = 0; // Use long long to avoid overflow
    int cnt = 0;

    // Iterate from the back (largest elements first)
    for(int i = n - 1; i >= 0; --i){
        sum += v[i]; 
        cnt++; 
        // If average wealth is still below x, remove this person
        if ((sum / cnt) < x) {
            cnt--; // Remove this person
            break;
        }
    }

    cout << cnt << endl; 
}

int main() {
    int test;
    cin >> test;
    while(test--){
        solve();
    }
}
