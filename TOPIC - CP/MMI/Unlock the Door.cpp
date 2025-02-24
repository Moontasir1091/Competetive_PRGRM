//  https://www.hackerearth.com/practice/math/number-theory/basic-number-theory-1/practice-problems/algorithm/name-count/

#include <bits/stdc++.h>
using namespace std;

const int M = 1e9 + 7;
const int N = 1e5 + 10;
int fact[N];

int binEXP(int a, int b, int m)
{
    int result = 1;
    while (b)
    {
        if (b & 1)
        {
            result = (result * 1LL * a) % m;
        }
        a = (a * 1LL * a) % m;
        b >>= 1;
    }
    return result;
}
int main()
{
    int test;
    cin >> test;

    fact[0] = 1;
    for (int i = 1; i < N; ++i)
    {
        fact[i] = (fact[i - 1] * 1LL * i) % M;
    }

    while (test--)
    {
        int n, k;
        cin >> n >> k;
        int ans = fact[n];
        ans = (ans * 1LL * fact[k]) % M;

        int den = (fact[k - n] * 1LL * (fact[n])) % M;

        ans = (ans * 1LL * binEXP(den, M - 2, M)) % M;

        cout << ans << endl;
    }
}


/*
Time Complexity: (Test * O (log n) + N)


*/

