#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

vector<ll> t, z, y;
int m, n;

ll count_balloons(ll time, ll i)
{
    ll cycle_time = t[i] * z[i] + y[i];
    ll full_cycles = time / cycle_time;
    ll remaining_time = time % cycle_time;
    ll extra = min(z[i], remaining_time / t[i]);
    return full_cycles * z[i] + extra;
}
bool is_possible(ll time)
{
    ll total = 0;
    for (ll i = 0; i < n; ++i)
    {
        total += count_balloons(time, i);
        if (total >= m)
            return true;
    }
    return false;
}

int main()
{

    cin >> m >> n;
    t.resize(n);
    z.resize(n);
    y.resize(n);

    for (int i = 0; i < n; i++)
    {
        cin >> t[i] >> z[i] >> y[i];
    }

    ll lo = 0, hi = 1e18;
    while (hi - lo > 1)
    {
        ll mid = (hi + lo) / 2;
        if (is_possible(mid))
        {
            hi = mid;
        }
        else
        {
            lo = mid + 1;
        }
    }
ll ans_time ;
    if(is_possible(lo))
    {
        ans_time = lo;
    }
    else
    {
        ans_time = hi;
    }
    cout << ans_time << "\n";
    
    // কে কয়টা বেলুন ফুলাবে
    vector<ll> result(n);
    ll remaining = m;

    for (ll i = 0; i < n; i++)
    {
        ll total = count_balloons(ans_time, i);
        result[i] = min(total, remaining);
        remaining -= result[i];
    }

    for (ll i = 0; i < n; i++)
    {
        cout << result[i] << " ";
    }
    cout << "\n";

    return 0;
}