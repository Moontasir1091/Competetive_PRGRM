#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    map<int, int>m;
 int M = INT_MIN;
    vector<long long>v(n);
    for(int i=0;i<n;++i){
        cin >> v[i];
        m[v[i]]++;
        if(m[v[i]] > M){
            M = m[v[i]];
        }
    }
    cout << M << endl;

    

}