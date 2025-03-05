// #include <bits/stdc++.h>
// using namespace std;

// void solve() {
//     long long a, b, c; 
//     cin >> a >> b >> c;
    
//     long long lower_bound = max({abs(a+b-c), abs(a+c-b), abs(b+c-a)}) + 1;
//     long long upper_bound = a + b + c - 1;

//     if (lower_bound <= upper_bound) {
//         cout << lower_bound << endl;
//     } 
// }

// int main() {
//     int t;
//     cin >> t;
//     while (t--) {
//         solve();
//     }
// }
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    
    int remaining_time = 240 - k;   // মোট সময় থেকে যাত্রার সময় বাদ
    
    
    
  
    int solved = 0, time_spent1 = 0;

    for (int i = 1; i <= n; i++) {
        time_spent1 += 5 * i;
        if (time_spent1 > remaining_time) break;
        solved++;
    }

    cout << solved << endl;
    return 0;
}
