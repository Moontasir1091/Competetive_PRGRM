/*#include <bits/stdc++.h>
using namespace std;
#define ll long long 

class Solution {
public:
    bool isValid(ll x, ll h, ll w, ll n) {
        return (x / h) * (x / w) >= n;
    }

    ll minRectanglesInSquare(ll h, ll w, ll n) {
        ll l = 0, r = 1;  // Start l as the minimum dimension
        
        // Find an upper bound for binary search
        while (!isValid(r, h, w, n))
            r *= 2;

        // Binary search to find the minimum valid square size
        while (l < r) {
            ll mid = (l+r)/2;
            if (isValid(mid, h, w, n)) {
                r = mid;
            } else {
                l = mid + 1;
            }
        }

        return l;
    }
};     

int main() {
    Solution obj;
    ll h, w, n;
    cin >> w >> h >> n;
    cout << obj.minRectanglesInSquare(h, w, n) << "\n";
}
*/

// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long 

// class Solution {
// public:
//     bool isValid(ll x, ll h, ll w, ll n) {
//         return (x / h) * (x / w) >= n;
//     }

//     ll minRectanglesInSquare(ll h, ll w, ll n) {
//         ll l = min(h, w) , r = 1;  
        
//         // Find an upper bound for binary search
//         while (!isValid(r, h, w, n))
//             r *= 2;

//         // Binary search to find the minimum valid square size
//         while (l < r) {
//             ll mid = l + (r - l) / 2;
//             if (isValid(mid, h, w, n)) {
//                 r = mid;
//             } else {
//                 l = mid + 1;
//             }
//         }

//         return l;
//     }
// };     

// int main() {
//     Solution obj;
//     ll h, w, n;
//     cin >> w >> h >> n;
//     cout << obj.minRectanglesInSquare(h, w, n) << "\n";
// }


#include <bits/stdc++.h>
using namespace std;

// @author: pashka

long long w, h, n;

bool good(long long x) {
    return (x / w) * (x / h) >= n; // total number of rectangles
}

int main() {
   // ios::sync_with_stdio(sync: false);

    cin >> w >> h >> n;

    long long l = 0; // l is bad
    long long r = 1; // r is good
    while (!good(r)) r *= 2; // increase r until it is good because avoid overflow in predicate Function.

    while (r > l + 1) {
        long long m = (l + r) / 2;
        if (good(m)) {
            r = m;
        } else {
            l = m;
        }
    }

    cout << r << "\n";

    return 0;
}