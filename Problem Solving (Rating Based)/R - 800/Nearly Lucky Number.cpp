#include <bits/stdc++.h>
using namespace std;

int main() {
    string n;
    cin >> n;  // বড় ইনপুটের জন্য স্ট্রিং হিসেবে ইনপুট নিচ্ছি

    int lucky_number_count = 0;
    
    // প্রতিটি সংখ্যা চেক করবো
    for (char c : n) {
        if (c == '4' || c == '7') {
            lucky_number_count++;  // লাকি ডিজিট হলে কাউন্ট বাড়বে
        }
    }
    
    // এখন চেক করবো lucky_count নিজেই লাকি নাম্বার কিনা
    if (lucky_number_count == 4 || lucky_number_count == 7) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    
}
