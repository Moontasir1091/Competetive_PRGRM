// #include <bits/stdc++.h>
// using namespace std;

// long long solve(long long a, long long b)
// {
//     long long res = 1;
//     while (b)
//     {
//         if (b & 1)
//         {
//             res = (res * a);
//         }
//         a = (a * a);
//         b >>= 1;
//     }
//     return res;
// }

// int main()
// {
//     long long n;
//     cin >> n;
//     long long ans = solve(5, n);

//     string s;

//     for (int i = 0; i < 2; ++i)
//     {
//         int digit = ans % 10;
//         ans = ans / 10;

//         s.push_back(digit + '0'); // Converting  integer to character
//     }

//     reverse(s.begin(), s.end()); // Fix syntax error
//     cout << s << endl;
// }
#include <bits/stdc++.h>
using namespace std;

int main() {
    long long int n;

    cin >> n;

    cout << "25" << endl;  // Always 25 for n >= 2
    return 0;
}
