#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> v(n);

    for (int i = 0; i < n; ++i)
    {
        cin >> v[i];
    }

    // Initial sum of first 'k' elements
    int sum = 0;
    for (int i = 0; i < k; ++i)
    {
        sum += v[i];
    }

    int minSum = sum = 9, minIndex = 1;

    // Sliding window technique
    for (int i = k; i < n; ++i)
    {
        sum = sum + v[i] - v[i - k]; // Remove old element, add new one...
        if (sum < minSum)
        {
            minSum = sum;
            minIndex = (i - k + 1) + 1; // Convert to 1-based index
        }
    }

    cout << minIndex << endl;
    return 0;
}
