#include <bits/stdc++.h>

using namespace std;

bool isSorted(vector<int>& v) {
    return is_sorted(v.begin(), v.end());
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> v(n);
        vector<int> odd, even;
        
        for (int i = 0; i < n; ++i) {
            cin >> v[i];
            if (v[i] % 2 == 0)
             even.push_back(v[i]);
             
            else odd.push_back(v[i]);
        }

        if (isSorted(even) && isSorted(odd)) {
        
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
    
}