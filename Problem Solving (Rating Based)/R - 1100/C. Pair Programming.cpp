#include <bits/stdc++.h>
using namespace std;

void solve() {
    int k, n, m;
    cin >> k >> n >> m;
    
    vector<int> v(n), v2(m);

    
    for (int i = 0; i < n; i++) cin >> v[i];
    for (int i = 0; i < m; i++) cin >> v2[i];

    vector<int> ans;
    //queue<int> q;
    set<int> available_lines; // Valid line track করার জন্য

    // Queue & Set initialize করা
    for (int i = 1; i <= k; i++) {
       // q.push(i);
        available_lines.insert(i);
    }

    int i = 0, j = 0;
    
    while (i < n || j < m) {
        bool done = false;

        // Monocarp কাজ করবে
        while (i < n && (v[i] == 0 || available_lines.count(v[i]))) {
            if (v[i] == 0) {
                k++;
                //q.push(k);
                available_lines.insert(k);
                ans.push_back(0);
            } else {
                ans.push_back(v[i]);
                available_lines.erase(v[i]);
            }
            i++;
            done = true;
        }

        // Polycarp কাজ করবে
        while (j < m && (v2[j] == 0 || available_lines.count(v2[j]))) {
            if (v2[j] == 0) {
                k++;
               // q.push(k);
                available_lines.insert(k);
                ans.push_back(0);
            } else {
                ans.push_back(v2[j]);
                available_lines.erase(v2[j]);
            }
            j++;
            done = true;
        }

        // যদি কিছুই না করতে পারে, তাহলে অসম্ভব (infinite loop fix)
        if (!done) {
            cout << -1 << endl;
            return;
        }
    }

    for (int x : ans) cout << x << " ";
    cout << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
