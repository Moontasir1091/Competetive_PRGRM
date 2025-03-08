#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> v(n);
    vector<int> v2;
    for (int i = 0; i < n; ++i)
    {
        cin >> v[i];
        if (v[i] < 0)
        {
            v2.push_back(v[i]);
        }
    }

    int sum = 0;

    // for (int i = 0; i < v2.size(); ++i)
    //     {

    //         cout << v2[i] << " ";
    //     }
    //     cout << endl;

    sort(v2.begin(), v2.end());

    if (m <= v2.size())
    {
        for (int i = 0; i < m; ++i)
        {

            sum += v2[i];
        }
    }
    else
    {
        for (int i = 0; i < v2.size(); ++i)
        {

            sum += v2[i];
        }
    }

    cout << abs(sum) << endl;
}
