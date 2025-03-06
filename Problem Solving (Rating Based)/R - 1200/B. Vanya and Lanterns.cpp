#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, l;
    int mx = 0;
    cin >> n >> l;
    vector<int> v(n);
    for (int i = 0; i < n; ++i)
        cin >> v[i];

    sort(v.begin(), v.end());

    for (int i = 0; i < n - 1; ++i)
    {
        if ((v[i + 1] - v[i]) > mx)
        {
            mx = (v[i + 1] - v[i]);
        }
    }

    double x = v[0];
    double y = (double)mx / 2;
    double res1 = max(x, y);

    double z = l - v[n - 1];

    double Final_res = max(res1, z);
    cout << fixed << setprecision(10) << Final_res << endl;
}