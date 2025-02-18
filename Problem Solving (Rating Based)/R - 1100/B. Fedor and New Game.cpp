#include <bits/stdc++.h>
using namespace std;
// New Thing


int countDifferentBits(int a, int b) {
    int x = a ^ b;  // XOR অপারেশন
    int count = 0;
    
    while (x) {
        count += (x & 1); // সর্বশেষ বিট চেক করা
        x >>= 1; // ডানদিকে এক ধাপ সরানো
    }
    
    return count;
}

int main() {

    int n, m, k;
    cin >> n >> m >> k;
    
    vector<int> v(m + 1); // মোট m+1 খেলোয়াড়
    for (int i = 0; i <= m; ++i) {
        cin >> v[i];
    }

    int fedor = v[m]; // Fedor-এর সেনাবাহিনী (শেষ ইনপুট)

    int friend_cnt = 0;

    for (int i = 0; i < m; ++i) { // Fedor ছাড়া বাকি m জন

        if (countDifferentBits(v[i], fedor) <= k) {
            friend_cnt++;
        }
    }

    cout << friend_cnt << endl;
}
