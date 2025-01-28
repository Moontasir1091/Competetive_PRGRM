#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int>v(n);
        for(int i=0;i<n;++i){
            cin >> v[i];
        }

        bool flag = true;

        for(int i=0;i<n;++i){
            if(v[i] <= 2 * (max(i , n-i-1))){
                flag = false;
            }
        }
        if(flag == true){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
}