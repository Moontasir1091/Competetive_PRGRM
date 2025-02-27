// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int t;
//     cin >> t;
//     while (t--) {
//         int n;
//         cin >> n;
//         string s;
//         cin >> s;
//         vector<int> v(n);

        
//         for (int i = 0; i < n; i++) {
//             cin >> v[i];
//         }

//         int cnt = 0;
//         for (int i = 0; i < n; ++i) {
//             if (s[i] == '1') {  
//                 if (i > 0 && s[i - 1] == '0') {  
//                     cnt += max(v[i], v[i - 1]); 
//                     s[i] = 0;
//                 } else {
//                     cnt += v[i];  
//                 }
//             }
//         }

//         cout << cnt << endl;
//     }
//     // return 0;
// }




#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string str;
        cin >> str;
        str = '0' + str; // '0' prepend করা হলো যাতে indexing সহজ হয়

        vector<int> a(n + 1);
        for (int i = 1; i <= n; i++) {
            cin >> a[i];
        }

        int ans = 0;
        int i = 0;

        while (i <= n) {
            int mn = a[i]; // সর্বনিম্ন মান ধরে রাখার জন্য
            int sm = a[i]; // সামগ্রিক যোগফল

            int j = i + 1;
            while (j <= n && str[j] == '1') { // যতক্ষণ পর্যন্ত ধারাবাহিক '1' আছে
                mn = min(mn, a[j]); // সর্বনিম্ন মান আপডেট
                sm += a[j]; // সামগ্রিক যোগফল আপডেট
                j++;
            }



            ans = ans +  sm - mn; // সর্বোচ্চ ম্যাগাজিন সংরক্ষণ
            i = j; // পরবর্তী চেকের জন্য আপডেট
        }

        cout << ans << endl;
    }
    return 0;
}



// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int t;
//     cin >> t;
//     while (t--) {
//         int n;
//         cin >> n;
//         string s;
//         cin >> s;
//         vector<int> v(n);

//         for (int i = 0; i < n; i++) {
//             cin >> v[i];
//         }

//         int cnt = 0;
//         for (int i = 0; i < n; i++) {
//             if (s[i] == '1') { // যদি বাক্সটি ঢাকনা দিয়ে ঢাকা থাকে
//                 cnt += v[i]; // ঢাকনা থাকলে ম্যাগাজিন রক্ষা পাবে
//             } 
//             else if (i > 0 && s[i - 1] == '1') { // যদি আগের বাক্সে ঢাকনা থাকে এবং এটি খোলা থাকে
//                 cnt += v[i]; // আগের ঢাকনা সরিয়ে এখানে নিয়ে আসতে পারি
//                 s[i - 1] = '0'; // আগের বাক্স থেকে ঢাকনা সরিয়ে নেওয়া হলো
//             }
//         }

//         cout << cnt << endl;
//     }
//     return 0;
// }
