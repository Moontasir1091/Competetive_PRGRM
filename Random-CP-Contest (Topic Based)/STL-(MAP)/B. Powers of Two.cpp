#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin >> n;

    vector<long long> v(n);
    map<long long, long long> freq;

    for (long long i = 0; i < n; ++i) {
        cin >> v[i];
        freq[v[i]]++;
    }

    long long sum = 0;
    for (long long i = 0; i < n; ++i) {
        for (long long j = 0; j < 32; ++j) {
            long long power_of_two = 1LL << j; // Ensure power_of_two is a long long
            long long element = power_of_two - v[i];    // here V[i] + v[j] = (Power_of_two)

            // Count pairs that sum up to power_of_two
            sum += freq[element];

            // Avoid counting the same element with itself
            if (power_of_two == v[i]) {
                sum--;
            }
        }
    }

    cout << sum / 2 << endl; // Divide by 2 to avoid double-counting
    
}
