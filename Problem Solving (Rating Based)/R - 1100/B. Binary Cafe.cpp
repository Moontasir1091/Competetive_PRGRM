#include <bits/stdc++.h>
using namespace std;

int subsetSums(int n, int k) {
    int cnt = 0;
    vector<int> arr(n);
    
    // Fill array with numbers 1 to n
    for (int i = 0; i < n; i++) {
        arr[i] = i + 1; 
    }

    int totalSubsets = 1 << n; // 2^n subsets

    for (int mask = 0; mask < totalSubsets; mask++) {
        int sum = 0;
        for (int i = 0; i < n; i++) {
            if (mask & (1 << i)) {
                sum += arr[i]; // Add actual array value
            }
        }
        if (sum <= k) cnt++;
    }
    return cnt+1;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        cout << subsetSums(n, k) << endl; // Print the result
    }
    return 0;
}
