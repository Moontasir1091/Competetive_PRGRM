#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<long long> v(n), v2(n - 1), v3(n - 2);

    for (int i = 0; i < n; ++i)
        cin >> v[i];
    for (int i = 0; i < n - 1; ++i)
        cin >> v2[i];
    for (int i = 0; i < n - 2; ++i)
        cin >> v3[i];

    sort(v.begin(), v.end());

    sort(v2.begin(), v2.end());

    sort(v3.begin(), v3.end());

    // প্রথম হারানো সংখ্যা খুঁজে বের করা
    long long first_missing = 0;
    for (int i = 0; i < n - 1; ++i)
    {
        if (v[i] != v2[i])
        {
            first_missing = v[i];
            break;
        }
    }
    if (first_missing == 0)
        first_missing = v[n - 1];


    // দ্বিতীয় হারানো সংখ্যা খুঁজে বের করা
    long long second_missing = 0;
    for (int i = 0; i < n - 2; ++i)
    {
        if (v2[i] != v3[i])
        {
            second_missing = v2[i];
            break;
        }
    }
    if (second_missing == 0)
        second_missing = v2[n - 2];

    cout << first_missing << endl;
    
    cout << second_missing << endl;

    return 0;
}
