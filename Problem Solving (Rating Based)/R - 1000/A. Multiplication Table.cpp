// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     long long  n, k;
//     cin >> n >> k;
//     long long cnt = 0;

//         for(long long i = 1; i*i <= n ;++i){
//             if(k%i==0){
//                 if(i < n)cnt++;

//             if(k/i != i && k/i <= n){ // if i divisor of K then k/i will be the divisor of K
//                 cnt++;
//             }
//          }

//         }

//     cout << cnt << endl;
// }
#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n, k;
    cin >> n >> k;
    long long cnt = 0;

    for (long long i = 1; i <= n; ++i)
    {

        if (k % i == 0 && k / i <= n) // if i divisor of K then k/i will be the divisor of K
            cnt++;
    }

    cout << cnt << endl;
}
