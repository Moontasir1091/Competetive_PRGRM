#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        int n, k; cin >> n >> k;
        vector<int>v(n);
        map<int, int>freq;
        freq[k] = INT_MAX;
        for(int i = 0 ; i< n;++i){
            cin >> v[i];
            freq[v[i]]++;
        }
        if(freq[k]==INT_MAX){
            cout << "NO" << endl;

        }
        else{
            cout << "YES" << endl;
        }
    }
}