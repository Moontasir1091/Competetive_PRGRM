#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        long long cnt = 0;
        while (n > 1)
        {

            long long m = (-1 + sqrt(1 + 24 * n)) / 6;
            long long x = (m * (3 * m + 1)) / 2;
            n = n - x;
            cnt++;
        }
        cout << cnt << endl;
    }
}
