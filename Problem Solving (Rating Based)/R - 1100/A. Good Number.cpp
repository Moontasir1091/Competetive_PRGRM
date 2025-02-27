#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    int cnt = 0;

    for (int i = 0; i < n; ++i) {

        unordered_set<char> st;


        string s;
        cin >> s;

        for (char ch : s) {
            if (ch >= '0' && ch <= '9') {
                st.insert(ch);
            }
        }

        bool found = true;
        for (char c = '0'; c <= ('0' + k); ++c) {
            if (st.find(c) == st.end()) {
                found = false;
                break;
            }
        }

        if (found) {
            cnt++;
        }
    }

    cout << cnt << endl;
    
}
