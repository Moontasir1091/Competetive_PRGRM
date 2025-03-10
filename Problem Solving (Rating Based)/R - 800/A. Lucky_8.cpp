#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        string s; cin >> s;
        int sum = 0;
        int sum1 = 0;
        for(int i=0;i<3;++i){
            sum += s[i] - '0';
        }

        for(int i=5;i>=3;--i){
            sum1 += s[i] - '0';
        }

        if(sum == sum1){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
}