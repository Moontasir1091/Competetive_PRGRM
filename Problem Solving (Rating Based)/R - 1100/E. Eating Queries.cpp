#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll test;
    cin >> test;
    while (test--)
    {
        ll n, q;
        cin >> n >> q;
        vector<ll> a(n), prefix(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a.rbegin(), a.rend());

        for (ll i = 0; i < n; ++i)
        {
            if (i == 0)
                prefix[i] = a[i];
            else
                prefix[i] = prefix[i - 1] + a[i];
        }
        // ll sum = accumulate(a.begin(), a.end(), 0LL);
        while (q--)
        {
            ll x;
            cin >> x;

            ll hi = n - 1, lo = 0;
            while (hi - lo > 1)
            {
                ll mid = (hi + lo) / 2;
                if (prefix[mid] >= x)
                {
                    hi = mid;
                }
                else
                {
                    lo = mid + 1;
                }
            }
            if (prefix[lo] >= x)
                cout << lo + 1 << endl;
            else if (prefix[hi] >= x)
                cout << hi + 1 << endl;
            else
                cout << -1 << endl;
        }
    }
}