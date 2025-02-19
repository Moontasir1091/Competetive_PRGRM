#include <bits/stdc++.h>
using namespace std;

int main() {
    int test;
    cin >> test;
    while (test--) {
        long long int a, b;
        cin >> a >> b;
        cout << min({a,(a + b) / 3, b }) << endl; 
    }
    return 0;
}
