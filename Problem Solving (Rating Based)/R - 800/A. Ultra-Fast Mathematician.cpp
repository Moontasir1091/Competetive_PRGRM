#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s1, s2, s;
    cin >> s1 >> s2;
    for (int i = 0; i < s2.size(); ++i)
    {
        if (s1[i] != s2[i])
        {
            s.push_back('1');
        }
        else
        {
            s.push_back('0');
        }
    }
    cout << s << endl;
}