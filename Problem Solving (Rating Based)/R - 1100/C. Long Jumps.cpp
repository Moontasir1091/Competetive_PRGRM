// #include <bits/stdc++.h>
// using namespace std;

// vector<int> v;   // Vector to store the input sequence
// vector<int> dp;  // DP array to store the results

// int func(int i) {
//     if (i > v.size() - 1) return 0;  // Base case: If index exceeds n, return 0
//     if (dp[i] != -1) return dp[i];   // If already computed, return the stored value

//     dp[i] = v[i] + func(i + v[i]);   // Recursively calculate the maximum sum
//     return dp[i];
// }

// int main() {
//     int tt;
//     cin >> tt;  // Number of test cases
//     while (tt--) {
//         int n;
//         cin >> n;  // Number of elements for this test case
        
//         v.resize(n + 1);  // Resize vector to accommodate the input size
//         dp.resize(n + 1, -1);  // Resize dp array and initialize it to -1
        
//         for (int i = 1; i <= n; ++i) {
//             cin >> v[i];  // Input the values for this test case
//         }

//         int mx_sum = INT_MIN;  // Variable to track the maximum sum
//         for (int i = 1; i <= n; ++i) {
//             mx_sum = max(mx_sum, func(i));  // Find the maximum sum
//         }

//         cout << mx_sum << endl;  // Output the result for this test case
//     }
// }
#include <bits/stdc++.h>
using namespace std;

int main() {
    int test;
    cin >> test;
    while (test--) {
        int n;
        cin >> n;
        vector<int> v(n + 1);
        vector<int> dp(n + 1, -1); 

        for (int i = 1; i <= n; i++) 
            cin >> v[i];

        int mx_sum = INT_MIN;


        /// lamda funtion for dp///


        function<int(int)> Find_max_sum = [&](int i) -> int {
            if (i > n) return 0; 
            if (dp[i] != -1) return dp[i]; 
            
            dp[i] = v[i] + Find_max_sum(i + v[i]); 
            
            return dp[i];
        };

        for (int i = 1; i <= n; i++) {
            mx_sum = max(mx_sum, Find_max_sum(i)); 
        }

        cout << mx_sum << endl;
    }
}

/*
function<int(int)> findMaxSum = [&](int i) -> int 

findMaxSum একটি ল্যাম্বডা ফাংশন (anonymous function) যা একটি ইনপুট i নেয় এবং একটি পূর্ণসংখ্যা (int) রিটার্ন করে।
& চিহ্নটি ল্যাম্বডা ফাংশনের মধ্যে বাইরের ভেরিয়েবলগুলিকে রেফারেন্স হিসেবে ব্যবহার করতে নির্দেশ দেয় 
(যেমন v, dp, এবং n এই ভেরিয়েবলগুলির মান ফাংশনের মধ্যে ব্যবহৃত হবে)।


{*/