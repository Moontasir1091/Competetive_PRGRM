#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y;
        cin >> x >> y;

        if (y > (x + 1))
            cout << "NO" << endl;
        else if (y % 9 == (1 + (x % 9))%9)
        {
            cout << "YES" << endl;
        }
        else
            cout << "NO" << endl;
    }
}
