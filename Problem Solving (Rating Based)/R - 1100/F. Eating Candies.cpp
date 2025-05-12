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
        vector<int> vrr(n);

        for (int i = 0; i < n; ++i)
        {
            cin >> vrr[i];
        }

        int l = 0;
        int r = n - 1;
        int suml = vrr[l];
        int sumr = vrr[r];
        int ans = 0;

        while (l < r)
        {
            if (suml == sumr)
            {

                ans = max(ans, (l + 1) + (n - r));
            }

            if (suml <= sumr)
            {
                ++l;
                suml += vrr[l];
            }
            else
            {
                --r;
                sumr += vrr[r];
            }
        }

        cout << ans << endl;
    }
}
