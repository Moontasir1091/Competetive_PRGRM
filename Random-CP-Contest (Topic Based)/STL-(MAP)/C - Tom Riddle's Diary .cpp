#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    map<string, int> m;

    while (n--) {
        string str;
        cin >> str;
        m[str]++;
        if (m[str] == 1) {
            cout << "NO" << endl; // First occurrence of the string
        } else {
            cout << "YES" << endl; // String has appeared before
        }
    }

    return 0;
}
