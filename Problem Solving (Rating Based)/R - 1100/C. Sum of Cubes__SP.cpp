#include <bits/stdc++.h>
using namespace std;

unordered_set<long long> st;
long long MAX_num = 1000000000000LL;

void precalculate_cube()
{
    for (long long i = 1; i * i * i <= MAX_num; ++i)
    {
        st.insert(i * i * i);
    }
}

void solve()
{
    long long x;
    cin >> x;
    bool is_found;

    for (long long i = 1; i * i * i <= x; ++i)
    {
        if (st.count(x - (i * i * i)))
        {
            cout << "YES" << endl;
            return;
        }
    }

    cout << "NO" << endl;
}

int main()
{
    precalculate_cube();

    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
}