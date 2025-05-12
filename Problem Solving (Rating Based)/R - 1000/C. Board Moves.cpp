#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        long long int n; cin >> n;
        long long int sum = 0;
        long long int p = 8;
        long long int f = 1;
        for(long long int i = 1; i<= n/2;++i){
            sum += (p*f);
            p += 8;
            f++;

        }
        cout << sum << endl;
    }
}