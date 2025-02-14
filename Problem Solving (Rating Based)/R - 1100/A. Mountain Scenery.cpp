#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int p, k;
    cin >> p >> k;
    int n = (2 * p) + 1;
    vector<int> v(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> v[i];
    }
    int cnt = 0;
    for (int i = 0; i < n; ++i)
    {
        if (cnt == k)
            break;
        if (i % 2 != 0)
        {
            v[i]--;
            if ((v[i] > v[i - 1]) && (v[i] > v[i + 1]))
                cnt++;
            else
            {
                v[i]++;
                continue;
            }
        }
    }
    for (int i = 0; i < n; ++i)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}