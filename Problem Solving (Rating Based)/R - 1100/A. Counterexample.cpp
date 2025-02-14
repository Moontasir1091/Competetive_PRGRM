#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    long long l, r;
    cin >> l >> r;

    if (r - l + 1 < 3) {
        cout << -1 << endl;  // পর্যাপ্ত সংখ্যা না থাকলে সমাধান সম্ভব নয়
        return 0;
    }

    if (l % 2 == 0) {
        cout << l << " " << l + 1 << " " << l + 2 << endl;
    } else {
        if (r - l + 1 > 3) {
            cout << l + 1 << " " << l + 2 << " " << l + 3 << endl;
        } else {
            cout << -1 << endl;  // 3 numbers . and 1st number is ODD. that means we cannot make 3 numbers .cause l+1, l+2 and (l+3 is not in range) 
        }
    }

    return 0;
}
