// #include <bits/stdc++.h>
// using namespace std;

// // Function to check if a palindromic subsequence exists with length >= 3
// bool hasPalindromeSubsequence(vector<int> &arr) {
//     int n = arr.size();
    
//     if (n < 3) return false; // ছোট হলে সম্ভব নয়

//     // **Frequency map ব্যবহার করে প্যাটার্ন খুঁজবো**
//     unordered_map<int, vector<int>> pos;
//     for (int i = 0; i < n; i++) {
//         pos[arr[i]].push_back(i);
//     }

//     // যদি কোনো সংখ্যা ৩ বার বা তার বেশি আসে, তাহলে সেটার ৩টি occurrence নিয়ে palindrome করা সম্ভব
//     for (auto &p : pos) {
//         if (p.second.size() >= 3) return true;
//     }

//     // যদি কোনো সংখ্যা প্রথম ও শেষ index-এ থাকে, এবং মাঝখানে অন্য সংখ্যা থাকে, তাহলে palindrome করা সম্ভব
//     for (auto &p : pos) {
//         if (p.second.size() >= 2) {
//             int first = p.second.front();
//             int last = p.second.back();
//             if (last - first >= 2) return true;
//         }
//     }

//     return false;
// }

// int main() {
//     int t = 1; cin >> t;
//     while(t--){
//         int n; cin >> n;
//         vector<int> arr(n);
//         for(int i = 0; i < n; i++) {
//             cin >> arr[i];
//         }

//         if (hasPalindromeSubsequence(arr)) {
//             cout << "YES" << endl;
//         } else {
//             cout << "NO" << endl;
//         }
//     }
//     return 0;
// }


#include <bits/stdc++.h>
using namespace std;


bool hasPalindromeSubsequence(vector<int> &arr) {
    int n = arr.size();
    
    if (n < 3) return false; 

    
    unordered_map<int, vector<int>> pos;
    for (int i = 0; i < n; i++) {
        pos[arr[i]].push_back(i);
    }

    
    for (auto &p : pos) {
        if (p.second.size() >= 3) return true;
    }

    
    for (auto &p : pos) {
        if (p.second.size() >= 2) {
            int first = p.second.front();
            int last = p.second.back();
            if (last - first >= 2) return true;
        }
    }

    return false;
}

int main() {
    int t = 1; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int> arr(n);
        for(int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        if (hasPalindromeSubsequence(arr)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
