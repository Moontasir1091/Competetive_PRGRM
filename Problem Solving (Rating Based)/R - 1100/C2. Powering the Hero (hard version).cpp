#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        priority_queue<long long>st;
        vector<long long>v(n);
        long long ans = 0;
        for(int i=0;i<n;++i){
            cin >> v[i];
            if(v[i]>0){
                st.push(v[i]);
            }
            else if(v[i]==0 && st.empty()){
                continue;
            }
            else{
                ans = ans + st.top();
                st.pop();

            }
        }
        cout << ans << endl;



    }
}