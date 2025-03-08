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
        bool is_possible = false;
        for (int x = 0; x * 2020 <= n; ++x)
        {
            if ((n - (x * 2020)) % 2021 == 0)
            {
                is_possible = true;
            }
        }

        if (is_possible)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}