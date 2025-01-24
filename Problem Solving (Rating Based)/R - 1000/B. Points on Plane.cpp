#include<bits/stdc++.h>
using namespace std;
 
long long SQRT(long long num){
    long long x = sqrt(num) + 2;
    while(x*x > num)x--;
    return x;
}

int main(){
    int tt; cin >> tt;
    while(tt--){
        long long n; cin >> n;
        cout << (SQRT(n-1LL)) << endl;
    }
}