#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, q;
    cin >> n >> q;
    map<string, string> m;

    // Read the mappings and store them in the map
    while (n--) {
        string s1, s2;
        cin >> s1 >> s2;
        s2 = s2 + ';';
        m[s2] = s1;
    }

    // Process the queries
    while (q--) {
        string s3, s4;
        cin >> s3 >> s4;
        // Output the query along with the mapped value
        cout << s3 << " " << s4 << " #" << m[s4] << endl;
    }

    return 0;
}
