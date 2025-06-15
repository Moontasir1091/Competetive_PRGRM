
#include <bits/stdc++.h>
using namespace std;

int lower_bound(vector<int> &v, int element)
{
    int lo = 0;
    int hi = v.size() - 1;
    int mid;
    while (hi - lo > 1)
    {
        mid = (hi + lo) / 2;
        if (v[mid] < element)
        {
            lo = mid + 1;
        }
        else
        {
            hi = mid;
        }
    }
    if (v[lo] >= element)
    {
        return lo;
    }
    if (v[hi] >= element)
    {
        return hi;
    }
    else
    {
        return -1;
    }
}

int main()
{
    int n;
    cin >> n;
    vector<int> v(n), prefix(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> v[i];
    }
    for (int i = 0; i < n; ++i)
    {
        if (i == 0)
        {
            prefix[i] = v[i];
        }
        else
        {
            prefix[i] = prefix[i - 1] + v[i];
        }
    }

    int m;
    cin >> m;
    vector<int> quest(m);
    for (int i = 0; i < m; ++i)
    {
        cin >> quest[i];
        cout << (lower_bound(prefix, quest[i])) + 1 << endl;
    }
}
