#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int l, r, d, u;
        cin >> l >> r >> d >> u;
        if (l == r && r == d && d == u && u == l)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}