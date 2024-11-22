#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    vector<pair<int, int>> v(n);
    for (int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        v[i] = {x, i + 1}; 
    }

    int i = 0;
    int last_greater_index = -1; 
    while (i < v.size()) {
        if (v[i].first > m) {
            last_greater_index = v[i].second; 
            int modified_value = v[i].first - m; 
            v.push_back({modified_value, v[i].second}); 
        }
        ++i; // Move to the next index
    }

    if (last_greater_index == -1) {
        // If no element greater than m was found, print the index of the last element processed
        cout <<  v[v.size() - 1].second << endl;
    } else {
        cout <<  last_greater_index << endl;
    }

    return 0;
}
