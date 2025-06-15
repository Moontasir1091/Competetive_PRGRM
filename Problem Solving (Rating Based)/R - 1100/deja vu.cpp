#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, q;
        
        cin >> n >> q;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) cin >> a[i];

        vector<int> v1(q);
        for (int i = 0; i < q; ++i) {
            cin >> v1[i];
        }
        long long prev = 31;

        for (int x : v1) {
            if(x >= prev){
                continue; // Skip if x is greater than or equal to 31
            }
            int power = (1 << x);
            int add_val = (1 << (x - 1));
            for (int i = 0; i < n; ++i) {
                if (a[i] % power == 0) {
                    a[i] += add_val;
                }
            }
            prev = x; // Update pev to the current x
        }

        for (int i = 0; i < n; ++i) cout << a[i] << " ";
        cout << endl;
    }

    return 0;
}
