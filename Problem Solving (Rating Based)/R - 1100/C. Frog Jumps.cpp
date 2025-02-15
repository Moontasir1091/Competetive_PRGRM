#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        long long int n = s.size();

        vector<int> position;
        position.push_back(0);
        for (int i = 0; i < n; ++i)
        {
            if (s[i] == 'R')
            {
                position.push_back(i + 1);
            }
        }
        position.push_back(s.size() + 1);
        int res = 0;
        for (int i = 0; i < int(position.size()) - 1; ++i)
        {
            res = max(res, (position[i + 1] - position[i]));
        }
        cout << res << endl;
    }
}
