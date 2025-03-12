#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        map<int, int> freq;
        int n;
        cin >> n;
        vector<int> v(n);
        map<int, int> mp; 

        for (int i = 0; i < n; ++i) {
            cin >> v[i];
            freq[v[i]]++;
            if (mp.find(v[i]) == mp.end()) {
                mp[v[i]] = i + 1; // 1-based index সংরক্ষণ
            }
        }

        int ans = -1;
        for (auto it : freq) {
            if (it.second == 1) { // যেটার ফ্রিকোয়েন্সি ১
                ans = mp[it.first]; // তার ইনডেক্স বের করা
                break;
            }
        }

        cout << ans << endl; 
    }
}
