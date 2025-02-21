#include<bits/stdc++.h>
using namespace std;

int main() {

    int k, l, m, n, d;
    cin >> k >> l >> m >> n >> d;

    set<int> damaged_DRA;

    for (int i = k; i <= d; i += k) damaged_DRA.insert(i);
    for (int i = l; i <= d; i += l) damaged_DRA.insert(i);
    for (int i = m; i <= d; i += m) damaged_DRA.insert(i);
    for (int i = n; i <= d; i += n) damaged_DRA.insert(i);

    cout << damaged_DRA.size() << endl;
    
    return 0;
}
