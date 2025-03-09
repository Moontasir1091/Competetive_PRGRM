#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string str;
        cin >> str;

        int result = 0;
        int balance = 0;

        for (int i = 0; i < n; ++i)
        {
            if (str[i] == '(')
            {
                ++balance;
            }
            else
            {
                --balance;
                if (balance < 0)
                {
                    balance = 0;
                    ++result;
                }
            }
        }
        cout << result << endl;
    }
}
