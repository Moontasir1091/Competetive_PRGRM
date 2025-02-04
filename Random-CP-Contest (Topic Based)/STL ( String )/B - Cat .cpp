#include <bits/stdc++.h>
#include <regex>
using namespace std;

int main() {
    int n; cin >> n;
    string s;
    cin >> s;  // Input string
    
    // Use regex_replace to replace "na" with "nya"
    s = regex_replace(s, regex("na"), "nya");
    
    cout << s << endl;  // Output the modified string
    
    return 0;
}
