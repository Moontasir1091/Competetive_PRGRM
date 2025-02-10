// #include<bits/stdc++.h>
// using namespace std;
// int main(){

// int t; cin >> t;
// while(t--){
//     string str; cin >> str;
//     for(int i=0;i<(str.size()-2);++i){
//         cout << str[i];
//     }

    
//     cout << "i" << endl;
// }


// }

// #include <bits/stdc++.h>
// using namespace std;

// void solve() {
//     string s;
//     cin >> s;
    
//     int unique_groups = 1; // Minimum length will be at least 1
    
//     for (int i = 1; i < s.size(); i++) {
//         if (s[i] != s[i - 1]) {
//             unique_groups++; // Count distinct adjacent character groups
//         }
//     }
    
//     cout << unique_groups << "\n";
// }

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(0);

//     int t;
//     cin >> t;
    
//     while (t--) {
//         solve();
//     }

//     return 0;
// }



// // #include <bits/stdc++.h>
// // using namespace std;

// // void solve() {
// //     int n, m;
// //     cin >> n >> m;
    
// //     vector<long long> a(n);
// //     for (int i = 0; i < n; i++) cin >> a[i];
    
// //     long long b;
// //     cin >> b; // m = 1, তাই শুধু b[1] ইনপুট নিবো
    
// //     // a[i] কে b - a[i] দ্বারা আপডেট করি
// //     for (int i = 0; i < n; i++) {
// //         a[i] = b - a[i];
// //     }
    
// //     // চেক করি, এটি sorted কিনা
// //     if (is_sorted(a.begin(), a.end())) {
// //         cout << "YES\n";
// //     } else {
// //         cout << "NO\n";
// //     }
// // }

// // int main() {
// //     ios::sync_with_stdio(false);
// //     cin.tie(0);
    
// //     int t;
// //     cin >> t;
    
// //     while (t--) {
// //         solve();
// //     }
    
// //     return 0;
// // }
// #include<bits/stdc++.h>
// using namespace std;
// int main(){

// int tt; cin >> tt;
// while(tt--){
//     string s; cin >> s;
//     for(int i=0;i<(s.size()-2);++i){
//         cout << s[i];
//     }

    
//     cout << "i" << endl;
// }


// }

#include<bits/stdc++.h>
using namespace std;
void fun(){
    string s; cin >> s;
    int n = s.size();
    for(int i=0;i<n-1;++i){
        if(s[i] == s[i+1]){
            cout << 1 << endl;
            return;
        }
    }
    cout << n << endl;
}



int main(){
int t = 1; cin >> t;
while(t--){
    fun();
    
}

}
