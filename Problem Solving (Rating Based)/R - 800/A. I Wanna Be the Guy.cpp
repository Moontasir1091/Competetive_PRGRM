#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, p, q, level;
    cin >> n; 
    
    set<int> levels; // To store unique levels

    // Input levels for player 1
    cin >> p;
    for (int i = 0; i < p; i++) {
        cin >> level;
        levels.insert(level);
    }

    // Input levels for player 2
    cin >> q;
    for (int i = 0; i < q; i++) {
        cin >> level;
        levels.insert(level);
    }

    // Check if the union of both players' levels covers all levels
    if ((int)levels.size() == n) {
        cout << "I become the guy." << endl;
    } else {
        cout << "Oh, my keyboard!" << endl;
    }

    
}
