#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        long long a, b;
        cin >> a >> b;
        
        if (a == b) {
            cout << 0 << endl;
            continue;
        }

        long long dif = abs(a - b);
        cout << (dif / 10) + (dif % 10 != 0) << endl; // Corrected Formula
    }
}
