#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    vector<int> v1;
    vector<int> v2;
    vector<int> v3;

    int one = 0, two = 0, three = 0;
    for (int i = 0; i < n; ++i)
    {
        cin >> v[i];
        if (v[i] == 1)
        {
            one++;
            v1.push_back(i);
        }
        else if (v[i] == 2)
        {
            two++;
            v2.push_back(i);
        }
        else
        {
            three++;
            v3.push_back(i);
        }
    }

    if (one == 0 || two == 0 || three == 0)
    {
        cout << 0 << endl;
        return 0;
    }
int w = min(one, min(two, three));
    cout << w << endl;
    int i = 0;
    while(w--){
        cout << v1[i]+1 << " " << v2[i]+1  << " " << v3[i]+1  << endl;
        i++;

    }
}