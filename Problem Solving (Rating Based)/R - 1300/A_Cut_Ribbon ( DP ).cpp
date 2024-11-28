// https://codeforces.com/problemset/problem/189/A
#include <bits/stdc++.h>
using namespace std;
#define ll long long
long long dp[4005];
ll magic(ll n, ll a, ll b, ll c) { // Change return type to `ll`
    if (n == 0) return 0;         // Base case: no length left to cut
    if (n < 0) return INT_MIN;    // Invalid case: negative length
    if(dp[n] != -1)return dp[n];

    // Try all possible cuts and take the maximum
    ll ans = 1 + magic(n - a, a, b, c);
    ans = max(ans, magic(n - b, a, b, c)+1);
    ans = max(ans, magic(n - c, a, b, c)+1);

    return dp[n] = ans;
}

int main() {
    memset(dp , -1, sizeof(dp));
    ll n, a, b, c;
    cin >> n >> a >> b >> c;
    cout << magic(n, a, b, c) << endl;
    return 0;
}
