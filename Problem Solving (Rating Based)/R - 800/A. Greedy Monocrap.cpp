#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> v(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> v[i];
        }
        sort(v.rbegin(), v.rend());

        int sum = 0;
        int res = k;
        for (int i = 0; i < n; ++i)
        {
            sum += v[i];

            if (sum <= k)
            {

                res = min(res, k - sum);
            }
            else
            {
                break;
            }
        }

        cout << res << endl;
    }
}