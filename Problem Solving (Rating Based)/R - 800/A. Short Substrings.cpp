#include<bits/stdc++.h>
using namespace std;

int main(){
    int test; 
    cin >> test;
    while(test--){
        string s; 
        cin >> s;
        string ans = s.substr(0, 2); // আরও clean
        for(int i = 3; i < s.size(); i += 2){
            ans += s[i];
        }
        cout << ans << endl;
    }
    
}
