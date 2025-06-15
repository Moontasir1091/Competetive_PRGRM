#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }

        vector<int> diff(n + 10);
        diff[0] = b[0];
        for (int i = 1; i < n; i++)
        {
            diff[i] = max(diff[i - 1], b[i]);
        }
        int ans = 0, total = 0;
        for (int i = 0; i < min(n, k); ++i)
        {
            total += a[i];
            int r = k - (i + 1);
            int p = total + (r * diff[i]);
            ans = max(ans, p);
        }
        cout << ans << endl;
    }
}