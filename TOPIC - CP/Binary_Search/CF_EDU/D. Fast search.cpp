#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    
    for (int i = 0; i < n; ++i)
    {
        cin >> v[i];
    }
    
    sort(v.begin(), v.end()); // Sort করা হলো
    
    int q;
    cin >> q;
    
    while (q--)
    {
        int l, r;
        cin >> l >> r;
        
        // Binary Search দিয়ে Range Count বের করা
        int left_idx = lower_bound(v.begin(), v.end(), l) - v.begin();
        int right_idx = upper_bound(v.begin(), v.end(), r) - v.begin();
        
        cout << (right_idx - left_idx) << " ";
    }
    
    return 0;
}
// lower_bound() gives an iterator, and - v.begin() converts it to an index.

// upper_bound() does the same.

// rightIdx - leftIdx gives the count of elements in the range.