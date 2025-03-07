#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, a, b;
    cin >> n >> m >> a >> b;

    int cnt = 0;

    cout << min(n * a, min((n / m) * b + (n % m) * a, ((n + m - 1) / m) * b)) << endl;

}
