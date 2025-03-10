#include<bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    bool valid = true;  

 
    if (s[0] == '4' || s.find("444") != string::npos) {
        valid = false;
    }

   
    for (int i = 0; i < (int)s.size(); i++) {
        if (s[i] != '1' && s[i] != '4') {
            valid = false;
            break;
        }
    }

  
    if (valid) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
