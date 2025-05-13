#include <bits/stdc++.h>
using namespace std;
int n;
int k;
vector<int> a(n);

bool good(long long x)
{
    long long sum = 0;
    long long cnt = 0;
    for (int i = 0; i < n; ++i)
    {
        sum += a[i];
        if (sum >= x)
        {
            cnt++;
            sum = 0;
        }
    }
    return cnt >= k;
}
int main()
{
    cin >> n >> k;
    a.resize(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int lo = 0, hi = accumulate(a.begin(), a.end(), 0LL);
    while (hi > lo)
    {
        
    long long mid = (lo + hi + 1) / 2; // ceiling mid
    if (good(mid)) {
        lo = mid;
    } else {
        hi = mid - 1;
    }
}
    
    cout << lo << endl;
}