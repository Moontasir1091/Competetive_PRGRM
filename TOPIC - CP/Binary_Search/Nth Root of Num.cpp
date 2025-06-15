#include<bits/stdc++.h>
using namespace std;


double eps = 1e-7;

// NTH root

double multiply(double mid, int n){
    double ans = 1;
    for(int i = 0; i < n; ++i){
        ans = ans * mid;
    }
    return ans;
}

int main(){
    double n; 
    double x;
    cin >> x >> n;
    double lo = 1, hi = x, mid;
    while(hi - lo > eps){
        mid = (hi+lo)/2;

        if(multiply(mid, n) < x){
            lo = mid;
        }
        else{
            hi = mid;
        }
    } 

    cout << hi << " " << lo << endl;
    cout <<setprecision(10)<< hi << endl;
}

//TC : p * log( N * (10 ^ d))


// int intSqrt(long long x) {
//     long long low = 1, high = x, ans = 1;
//     while (low <= high) {
//         long long mid = (low + high) / 2;
//         if (mid * mid <= x) {
//             ans = mid;
//             low = mid + 1;
//         } else {
//             high = mid - 1;
//         }
//     }
//     return ans;
// }