#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t; // একবারই নেওয়া উচিত
    while (t--) {
        int n;
        cin >> n;
        vector<int> v1(n), v2(n);
        
        for (int i = 0; i < n; ++i) cin >> v1[i];
        for (int i = 0; i < n; ++i) cin >> v2[i];

        int l = 0, r = n - 1;

        while ( v1[l] == v2[l]) {
            l++;
        }
        while ( v1[r] == v2[r]) {
            r--;
        }
        while (l > 0  && v2[l] >= v2[l-1]) {
            l--;
        }
        while (r < n-1  && v2[r] <= v2[r+1]) {
            r++;
        }


        cout << l + 1 << " " << r + 1 << endl;
    }
  
}
