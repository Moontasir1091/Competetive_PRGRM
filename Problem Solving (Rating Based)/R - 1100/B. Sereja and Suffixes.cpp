//TLE 
//#include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n, m;
//     cin >> n >> m;
//     vector<int>v(n);
//     for(int i=0;i<n;++i){
//         cin >> v[i];

//     }

//     while(m--){
//         set<int>st;
//         int l; cin >> l;
//         for(int i=l-1;i<n;++i){
//             st.insert(v[i]);
//         }
//         cout << st.size() << endl;

//     }
// }

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> v(n), dp(n + 1, 0);
    
    unordered_set<int> seen_ele; // To track unique elements

    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }

    // Precompute distinct count in reverse
    for (int i = n - 1; i >= 0; --i) {
        seen_ele.insert(v[i]); // Insert element into set
        dp[i] = seen_ele.size(); // Store unique count
    }

    // Answer queries in O(1)
    while (m--) {
        int l;
        cin >> l;
        cout << dp[l - 1] << endl; // Output precomputed value
    }
}
