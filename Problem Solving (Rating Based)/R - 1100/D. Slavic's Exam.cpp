#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt; cin >> tt;
    while(tt--) {
        string s, t; cin >> s >> t;
    	int p = 0;
    
    	for(int i = 0; i < (int)s.size(); ++i) {
    		if(s[i] == '?') {
    			if(p < (int)t.size()) s[i] = t[p++];
    			else s[i] = 'a';
    		} else if(s[i] == t[p]) ++p;
    	}
    	if(p >= t.size()) cout << "YES\n" << s << "\n";
    	else cout << "NO\n";
    }
}