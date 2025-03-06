#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; ++i)
        cin >> v[i];

    int cnt_amazing = 0;

    for (int i = 1; i < n; ++i)
    {
        int cnt1 = 0, cnt2 = 0;
        for (int j = 0; j < i; ++j)
        {
            if (v[i] > v[j])
                cnt1++;
            else if (v[i] < v[j])
                cnt2++;
        }
        if ((cnt1 == i) || (cnt2 == i))
        {
            cnt_amazing++;
        }
    }
    cout << cnt_amazing << endl;
}