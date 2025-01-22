#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }

    // Sort the array
    sort(v.begin(), v.end());

    // Find the midpoint
    int mid = (n + 1) / 2; // Handles odd sizes properly

    // Split into two halves
    vector<int> v1(v.begin(), v.begin() + mid);
    vector<int> v2(v.begin() + mid, v.end());

    // Alternate merging from v1 and v2
    vector<int> result;
    int i = 0, j = 0;

    while (i < v1.size() || j < v2.size()) {
        
        if (j < v2.size()) {
            result.push_back(v2[j]);
            j++;
        }

        if (i < v1.size()) {
            result.push_back(v1[i]);
            i++;
        }
        
    }

    // Output the result
    int cnt = 0;
    for(int i=0;i<result.size();++i){
        if(i%2!=0 && i!=0 && i!=result.size()-1)cnt++;
        
    }
    cout << cnt;
    cout << endl;
for(int i=0;i<result.size();++i){
       
        cout << result[i] << " ";
    }
    cout << endl;
    return 0;
}
