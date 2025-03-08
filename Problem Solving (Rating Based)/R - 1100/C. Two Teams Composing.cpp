#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--){
        int n;
        cin >> n;
    
        vector<int> v(n);
        map<int, int> mp; // Stores frequency
        set<int> s; // To store unique numbers
    
        for (int i = 0; i < n; ++i) {
            cin >> v[i];
            s.insert(v[i]); // Insert into set
            mp[v[i]]++;
        }
        if(s.size() == n && n > 1){
            cout << 1 << endl;
            continue;
        }
    
        int MAX_FRQ = 0; // To store the max frequency
        for (auto pr : mp) {
            MAX_FRQ = max(MAX_FRQ, pr.second);
        }
        if(s.size() <= MAX_FRQ )
    
        cout << min((int)s.size(), MAX_FRQ - 1) << endl; // Print the result

        else{
            cout << min((int)s.size(), MAX_FRQ) << endl; // Print the result

        }

    }
   

    return 0;
}






   