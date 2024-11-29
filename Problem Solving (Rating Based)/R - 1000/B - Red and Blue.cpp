#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> r(n);
        for (int i = 0; i < n; ++i)
            cin >> r[i];
        int pre_sum = 0, mx_a = 0;
        for (int i = 0; i < n; ++i)
        {
            pre_sum += r[i];
            mx_a = max(mx_a, pre_sum);
        }

        int m;
        //
        cin >> m;
        vector<int> b(m);
        for (int i = 0; i < m; ++i)
            cin >> b[i];
        int pre_sum2 = 0, mx_b = 0;
        for (int i = 0; i < m; ++i)
        {
            pre_sum2 += b[i];
            mx_b = max(mx_b, pre_sum2);
        }

        int p = mx_b + mx_a;
        int q = 0; // question a Zero er sathe maximum nite bolse.
        int ans = max(p, q);

        cout << ans << endl;
    }
}