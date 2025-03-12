#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int i = 0;
    int n = s.size();

    while (i < n)
    {
        if (s[i] == '.')
        {
            cout << "0";
            i++;
            continue;
        }
        if (s[i] == '-')
        {
            if (s[i + 1] == '-')
            {
                cout << 2;
                i = i + 2;
            }
            else
            {
                cout << 1;
                i = i + 2;
            }
        }
    }
}