#include<bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    vector<int> v(n);
    
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }
    
    sort(v.begin(), v.end(), greater<int>());
    
    int cnt = 0;
    for (int i = 1; i < n; ++i) {
        cnt += v[0] - v[i];  

    }
    
    cout << cnt << endl;  
    return 0;

}
