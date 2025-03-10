#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt; cin >> tt;
    while(tt--){
        int n, k;
        cin >> n >> k;
        vector<int> v(n);
    
        for (int i = 0; i < n; ++i) {
            cin >> v[i];
        }
    
        sort(v.begin(), v.end());
    
        long long cnt = 0, cnt1 = 1;
    
        for (int i = 1; i < n; ++i) {
            if (v[i] - v[i - 1] <= k) {
                cnt1++;
            } else {
                cnt = max(cnt, cnt1);
                cnt1 = 1; // Reset for the next sequence
            }
        }
        cnt = max(cnt, cnt1); // Final update in case the longest sequence ends at the last element
    
        cout << n-cnt << endl;

    }

    return 0;
}
