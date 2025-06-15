#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) { // ? O(t * F(N))
        int n;
        cin >> n;

        vector<long long> arr(n);
        for (int i = 0; i < n; i++) cin >> arr[i]; // ? O(N)

        long long ans = 0;

        for (int i = 1; i <= 60; i++) {
            set<long long> distinctVals;
            long long k = 1LL << i;

            for (int ind = 0; ind < n; ind++) {
                distinctVals.insert(arr[ind] % k);
            }

            if (distinctVals.size() == 2) {
                ans = k;
                break;
            }
        }

        cout << ans << "\n";
    }

    return 0;
}
