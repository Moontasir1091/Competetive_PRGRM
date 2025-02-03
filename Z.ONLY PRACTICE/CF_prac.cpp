// #include<bits/stdc++.h>

// using namespace std;

// int main() {
//     int t;  
//     cin >> t;
    
//     while (t--) {
//         int n;  
//         cin >> n;
        
//         vector<int> v1(n), v2(n);
//         set<long long> sum_value;
      
//         for (int i = 0; i < n; ++i) {
//             cin >> v1[i];
//         }
//         for (int i = 0; i < n; ++i) {
//             cin >> v2[i];
//         }
        
        
// for (int i = 0; i < n; ++i) {
//             for (int j = 0; j < n; ++j) {
//                 long long c = (v1[i] + v2[j]);
//                 sum_value.insert(c);
//             }
//         }
        
     
//         if (sum_value.size() >= 3) {
//             cout << "YES" << endl;
//         } else {
//             cout << "NO" << endl;
//         }
//     }
    

// }
#include <bits/stdc++.h>
using namespace std;
 
void func() {
    int n, k;
    cin >> n >> k;
    k = k/2;
    vector<int> a(n);
    for (int i=0;i<n;++i) cin >> a[i];
    if (2 * k == n) {
        for (int i = 1; i < n; i += 2) {
            if (a[i] != (i + 1) / 2) {
                cout << (i + 1) / 2 << '\n';
                return;
            }
        }
        cout << k + 1 << '\n';
    } else {
        for (int i = 1; i <= n - 2 * k + 1; i++) {
            if (a[i] != 1) {
                cout << "1\n";
                return;
            }
        }
        cout << "2\n";
    }
}
 
int main() {
    int test = 1;
    cin >> test;
    while (test--) {
        func();
    }
}