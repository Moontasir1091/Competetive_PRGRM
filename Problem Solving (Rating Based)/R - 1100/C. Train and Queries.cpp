#include <bits/stdc++.h>
using namespace std;

int main() {
    int test; 
    cin >> test;
    while (test--) {
        int n, k;
        cin >> n >> k;
        vector<long long> v(n);
        map<long long, vector<long long>> mp; // একাধিক ইনডেক্স রাখার জন্য `vector` ব্যবহার করা হয়েছে

        for (int i = 0; i < n; ++i) {
            cin >> v[i];
            mp[v[i]].push_back(i); // মানের ইনডেক্স সংরক্ষণ
        }

        // Debugging output (optional)
        // cout << "Value -> Index Mapping: " << endl;
        // for (auto val : mp) {
        //     cout << val.first << " -> ";
        //     for (auto idx : val.second) {
        //         cout << idx << " ";
        //     }
        //     cout << endl;
        // }

        while (k--) {
            long long a, b;
            cin >> a >> b;

            if (mp.count(a) && mp.count(b)) { // যদি দুটি মান ম্যাপে থাকে
                if (mp[a].front() < mp[b].back()) { // প্রথম `a` ও শেষ `b` তুলনা
                    cout << "YES" << endl;
                } else {
                    cout << "NO" << endl;
                }
            } else {
                cout << "NO" << endl;
            }
        }
    }
   
}


/*আগের কোডে map<long long, long long> mp; ব্যবহার করা হয়েছিল, কিন্তু এতে প্রথম ইনডেক্স বা শেষ ইনডেক্স রাখা যাচ্ছিল না।

এর সমাধান: 👉 আমরা vector<long long> ব্যবহার করব, যাতে একটি সংখ্যার সব ইনডেক্স সংরক্ষণ করতে পারি।
👉 তাহলে, mp[a] আসলে একটি vector হবে, যেখানে a সংখ্যাটি যেখানে যেখানে পাওয়া গেছে সেগুলোর ইনডেক্স থাকবে।*/

/* mp[a].front() → a প্রথমবার যেখানে পাওয়া গেছে (সর্বনিম্ন index)
🔹 mp[b].back() → b শেষবার যেখানে পাওয়া গেছে (সর্বোচ্চ index)
🔹 চেক করছে:

✅ যদি a প্রথমবার b শেষবারের আগেই আসে → "YES"
❌ না হলে "NO"*/
