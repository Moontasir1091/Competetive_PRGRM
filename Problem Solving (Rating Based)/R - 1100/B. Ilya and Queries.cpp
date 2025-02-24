#include <bits/stdc++.h>
using namespace std;

int main() {
    string str; cin >> str;
    int n = str.size();
    int m; cin >> m;
vector<int> prefix_sum(n, 0);

for(int i=1;i<n;++i){
    prefix_sum[i] = prefix_sum[i-1] + (str[i] == str[i-1]);
}



    while(m--){
        int a , b; cin >> a >> b;
        a--, b--;
        cout << abs(prefix_sum[a] - prefix_sum[b]) << endl;

    }
}
