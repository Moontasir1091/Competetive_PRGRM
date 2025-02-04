#include <bits/stdc++.h>
using namespace std;

bool isMeowString(string str) {
    transform(str.begin(), str.end(), str.begin(), ::tolower); // Convert to lowercase
    string target = "meow";
    string temp;
    
    for (char ch : str) {
        if (temp.empty() || temp.back() != ch) { // Avoid duplicate consecutive characters
            temp.push_back(ch);
        }
    }

    return (temp == target);
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string str;
        cin >> str;

        if (isMeowString(str)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
   
}
