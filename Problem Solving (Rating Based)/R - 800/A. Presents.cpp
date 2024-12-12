#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n; // Number of friends

    vector<int> gift(n + 1); // Array to store who each friend gives the gift to
    vector<int> r(n + 1); // Array to store who gave the gift to each friend

    // Input the array p (1-based indexing)
    for (int i = 1; i <= n; i++) {
        cin >> gift[i];
    }

    // Determine who gave gifts to whom
    for (int i = 1; i <= n; i++) {
        r[gift[i]] = i; // The friend p[i] received a gift from friend i
    }

    // Output the result (1-based indexing)
    for (int i = 1; i <= n; i++) {
        cout << r[i] << " ";
    }

   
}
