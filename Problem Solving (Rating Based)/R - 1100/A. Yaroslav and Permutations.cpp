#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> vec(n);

    for (int i = 0; i < n; ++i) {
        cin >> vec[i];
    }

   
    map<int, int> freq;
    for (int num : vec) {
        freq[num]++;
    }

   
    int max_Freq = 0;
    for (auto ele : freq) {
        max_Freq = max(max_Freq, ele.second);
    }

    if (max_Freq > (n + 1) / 2) {
        cout << "NO" << endl;
        return 0;
    }

    cout << "YES" << endl;
}

/*(n+1)/2 ফর্মুলার ব্যাখ্যা:
আমরা যদি কোনো অ্যারেতে সংখ্যা সাজাই, তাহলে সবচেয়ে বেশি আসা সংখ্যাটির জন্য যথেষ্ট ফাঁকা জায়গা থাকা দরকার।

আমরা সাধারণত সংখ্যাগুলোকে Even index (0, 2, 4, 6...) ও Odd index (1, 3, 5, 7...)-তে ভাগ করতে পারি।

🔹 যদি n বিজোড় হয় (Odd)
👉 তাহলে অ্যারেতে মোট (n+1)/2 টা ইভেন ইনডেক্স থাকে।

🔹 যদি n জোড় হয় (Even)
👉 তাহলে মোট n/2 টা ইভেন ইনডেক্স থাকে, কিন্তু (n+1)/2 এই হিসাবটিও সবসময় কাজ করবে।

তাই, যদি সবচেয়ে বেশি আসা সংখ্যাটির পরিমাণ (frequency) (n+1)/2-এর বেশি হয়, তাহলে ওই সংখ্যাকে যথেষ্ট দূরত্বে রাখা সম্ভব হবে না, ফলে Rearrange করা যাবে না।*/
