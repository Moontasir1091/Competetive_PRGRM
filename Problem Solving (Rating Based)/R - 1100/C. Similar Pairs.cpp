#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt;
    cin >> tt;
    while (tt--) {
        int n;
        cin >> n;
        vector<int> v(n);
        int e = 0, o = 0;

        for (int i = 0; i < n; ++i) {
            cin >> v[i];
            if (v[i] % 2 == 0) e++;
            else o++;
        }

        if (e % 2 != o % 2) {
            cout << "NO" << endl;
        } 
        else {
            if (e % 2 == 0) {
                cout << "YES" << endl;
            } 
            else {
                bool Found = false;
                for (int i = 0; i < n; ++i) {
                    for (int j = i + 1; j < n; ++j) {
                        if (v[i] % 2 != v[j] % 2 && abs(v[i] - v[j]) == 1) {
                           
                            Found = true;
                            break;  // Exit inner loop
                        }
                    }
                    if (Found) break; // Exit outer loop
                }
                cout << (Found ? "YES" : "NO") << endl;
            }
        }
    }
}
