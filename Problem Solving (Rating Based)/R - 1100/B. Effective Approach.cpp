#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
 int n;
    cin >> n;
    
    unordered_map<int, int> mp;
    
    for (int i = 1; i <= n; ++i) {
        int x;
        cin >> x;
        mp[x] = i;  // মান x-এর ইনডেক্স সংরক্ষণ করি (1-based index)
    }

    int q;
    cin >> q;
long long v_cnt = 0, p_cnt = 0;

    while (q--) {
        int x;
        cin >> x;
        int idx = mp[x];  // সংখ্যার ইনডেক্স খুঁজে বের করা O(1)
        v_cnt += idx;      // ভাসিয়া: 1 থেকে idx পর্যন্ত গুনবে
        p_cnt += (n - idx + 1);  // পেতিয়া: n থেকে idx পর্যন্ত গুনবে
    }
   cout << v_cnt << " " << p_cnt << endl;
    
 
}
