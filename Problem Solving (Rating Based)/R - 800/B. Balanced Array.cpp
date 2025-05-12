#include<bits/stdc++.h>
using namespace std;
int main(){
    int test; cin >> test;
    while(test--){
        int n; cin >> n;
        if(n%4 != 0){
            cout << "NO" << endl;
            continue;
        }
        vector<int> ans;

        for(int i = 1; i <= n/2 ;++i){
            ans.push_back(i*2);
        }
        for(int i = 1; i < n/2 ;++i){
            ans.push_back(i*2 - 1);
        }

        ans.push_back((n-1) + (n/2));
        cout << "YES" << endl;
        for(auto i : ans){
            cout << i << " ";
        }
        cout << endl;

    }
}