#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m; // Read n and m

    vector<int> v(m);
    for (int i = 0; i < m; ++i)
    {
        cin >> v[i]; // Read values into the vector
    }

    // Sort the entire vector
    sort(v.begin(), v.end());

    // Find the minimum difference in a subarray of size n
    int mini = INT_MAX;
    for (int i = 0; i <= m - n; ++i)
    {
        int diff = v[i + n - 1] - v[i]; // Difference between largest and smallest in the subarray
        mini = min(mini, diff);
    }

    // Output the result
    cout << mini << endl;

    return 0;
}