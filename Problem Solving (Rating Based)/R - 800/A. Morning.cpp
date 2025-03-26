#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s;
    cin >> s;
    int init_pos = 1, cur_pos, a = 0;
    for (int i = 0; i < 4; i++) {
        cur_pos = s[i] - '0';
        if (cur_pos == 0) {
            cur_pos = 10; 
        }
        a += abs(cur_pos - init_pos);  
        init_pos = cur_pos; 
    }

    cout << a + 4 << "\n";  
}

int main() {
    int tt;
    cin >> tt;
    while (tt--) {
        solve();  
    }
    return 0;
}