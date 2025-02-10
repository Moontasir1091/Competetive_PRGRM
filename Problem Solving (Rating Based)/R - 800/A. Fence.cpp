#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long a, b, c; 
    cin >> a >> b >> c;
    
    long long lower_bound = max({abs(a+b-c), abs(a+c-b), abs(b+c-a)}) + 1;
    long long upper_bound = a + b + c - 1;

    if (lower_bound <= upper_bound) {
        cout << lower_bound << endl;
    } 
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}
