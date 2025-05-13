#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n + 1);

    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    int ans = 1;
    for (int i = 1; i <= n; i++)
    {
        int node = a[i];
        int dep = 1;
        while (node != -1)
        {
            node = a[node];
            dep++;
        }
        ans = max(ans, dep);
    }

    cout << ans << endl;
    return 0;
}
