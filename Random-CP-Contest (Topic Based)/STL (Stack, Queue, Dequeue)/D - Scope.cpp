#include <bits/stdc++.h>
using namespace std;

int main() {
    string str;
    cin >> str;

    vector<char> BOX;  // Stack to store characters
    vector<bool> Is_Exist(26, false);  // Track which letters are in the box
    vector<int> BRK;  // Stack to track lengths of BOX when '(' occurs

    for (int i = 0; i < str.size(); ++i) {
        char ch = str[i];

        if (ch >= 'a' && ch <= 'z') {  // If it's a letter
            if (Is_Exist[ch - 'a']) {  // If already in the box, return NO
                cout << "No" << endl;
                return 0;
            }

            Is_Exist[ch - 'a'] = true;
            BOX.push_back(ch);
        } 
        
        else if (ch == '(') {  // If '(' appears, store the BOX size
            BRK.push_back(BOX.size());
        } 
        
        else if (ch == ')') {  // If ')' appears
            if (BRK.empty()) {  // If there is no matching '(' -> INVALID
                cout << "No" << endl;
                return 0;
            }

            int prev_length = BRK.back();
            BRK.pop_back();

            while (BOX.size() > prev_length) {  // Remove elements added after last '('
                char removed = BOX.back();
                BOX.pop_back();
                Is_Exist[removed - 'a'] = false;  // Mark as removed
            }
        }
    }

    // If any '(' is left unmatched, return NO
    if (!BRK.empty()) {
        cout << "No" << endl;
        return 0;
    }


    cout << "Yes" << endl;
    
}
