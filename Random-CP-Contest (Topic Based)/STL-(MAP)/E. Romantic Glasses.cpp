#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t; cin >> t;
    while(t--){
        long long  n; cin >> n;    vector<long long>v(n);
        ///long long sum = 0;
        for(long long i=0;i<n;++i) {
            cin >> v[i];
        }
        long long odd = 0, even = 0;
        map<long long , long long>mp;
        bool flag = 0;

        for(long long i = 0;i<n;++i){
            if(i & 1) even += v[i];
            else{
                odd += v[i];
            }
            long long diff = odd - even;
            if(odd == even){
                 cout << "YES" << endl;
                 flag = 1;
                 break;
            }
            if(mp.find(diff) != mp.end()){
                cout << "YES" << endl;
                flag = 1;
                break;

            }
            mp[diff] = 1;
        }

        if(flag == 0){
            cout << "NO" << endl;
        }

}
}