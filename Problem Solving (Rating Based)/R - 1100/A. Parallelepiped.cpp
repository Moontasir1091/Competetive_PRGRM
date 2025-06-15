#include <bits/stdc++.h>
using namespace std;

int intSqrt(long long x)
{
    long long low = 1, high = x, ans = 1;
    while (low <= high)
    {
        long long mid = (low + high) / 2;
        if (mid * mid <= x)
        {
            ans = mid;
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return ans;
}

int main()
{
    long long ab, bc, ca;
    cin >> ab >> bc >> ca;

    int a = intSqrt(ab * ca / bc);
    int b = intSqrt(ab * bc / ca);
    int c = intSqrt(bc * ca / ab);

    int total_ans = 4 * (a + b + c);
    cout << total_ans << endl;

    return 0;
}
