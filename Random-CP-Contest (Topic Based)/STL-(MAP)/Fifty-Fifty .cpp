#include <bits/stdc++.h>
using namespace std;

int main() {
    string Str;
    cin >> Str;

    // Frequency map
    map<char, int> freq;
    for (char c : Str) {
        freq[c]++;
    }

    
    if (freq.size() == 2) { 
        bool valid = true;
        for (auto pr : freq) {
            if (pr.second != 2) { 
                valid = false;
                break;
            }
        }
        if (valid) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    } else {
        cout << "No" << endl;
    }

    return 0;
}
