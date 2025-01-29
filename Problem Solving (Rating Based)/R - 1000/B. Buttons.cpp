#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n; cin >> n;
    int sum = n;
    for(int i=1;i<n;++i){
        sum += (n-i)*i;
    }

    cout << sum << endl;

}