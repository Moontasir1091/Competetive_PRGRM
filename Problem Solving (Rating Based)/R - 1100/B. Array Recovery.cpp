#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; 
    cin >> t;
    while (t--) {
        int n; 
        cin >> n;
        vector<int> v(n);
        vector<int> v1(n);

        for (int i = 0; i < n; ++i) {
            cin >> v[i];
        }

        v1[0] = v[0];  // প্রথম উপাদান সেট করা হলো
        bool flag = false;

        for (int i = 1; i < n; ++i) {
            if (v[i] == 0) {
                v1[i] = v1[i - 1];  // যদি 0 থাকে, তাহলে আগের মান ধরে রাখবে
            } else if (v[i] <= v1[i - 1]) {
                flag = true;  // যদি বর্তমান উপাদান আগেরটির চেয়ে ছোট হয়, তাহলে সম্ভব না
                break;
            } else {
                v1[i] = v[i] + v1[i - 1];  // নতুন মান যোগ করবো
            }
        }

        if (flag) {
            cout << "-1\n";
        } else {
            for (int i = 0; i < n; ++i) {
                cout << v1[i] << " ";
            }
            cout << endl;
        }
    }
    
}
