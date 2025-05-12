#include<bits/stdc++.h> 
using namespace std;

int n, x, y;

bool good(long long t){
    return (t / x) + (t / y) >= n - 1;
}

int main(){
    cin >> n >> x >> y;
    if (n == 1) {
        cout << min(x, y) << endl; // প্রথম copy করতে যেটা কম সময় লাগে
        return 0;
    }

    long long l = 0;
    long long r = 1e18;

    while (r > l + 1){
        long long m = (l + r) / 2;
        if (good(m)){
            r = m;
        } else {
            l = m;
        }
    }

    cout << r + min(x, y) << endl; // এখানে r হবে সর্বনিম্ন সময়
}
