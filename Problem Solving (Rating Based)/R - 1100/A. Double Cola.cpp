
// Colleted , understanding pu

#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin >> n;

    vector<string> names = {"Sheldon", "Leonard", "Penny", "Rajesh", "Howard"};
    long long cnt = 5, size = 1;

    // পর্যায়ক্রমে বোঝার জন্য লুপ চালাচ্ছি
    while (n > cnt) {
        n -= cnt; // বর্তমান গ্রুপের সকল পান করা ক্যান বাদ দিচ্ছি
        size *= 2;  // প্রতিটি ব্যক্তির পান করার ক্ষমতা দ্বিগুণ হচ্ছে
        cnt = 5 * size; // মোট পান করা ক্যান আপডেট করছি
    }

    // নির্দিষ্ট ব্যক্তি বের করার জন্য
    cout << names[(n - 1) / size] << endl; // for 0 based index

    return 0;
}
