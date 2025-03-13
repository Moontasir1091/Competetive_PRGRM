// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//    int t; cin >> t;
//    while(t--){
//     long long  n,k;
//         cin >>n >> k;

//         long long sum = 0;
//         for(int i=0 ; i<n ; i++)
//         {
//             long long x;
//             cin >> x;
//             sum+=x;

//         }

//         if(n*k==sum) {
//          cout << "YES" << endl;
//         }
//         else{
//             cout << "NO" << endl;
//         }

//    }

// }

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        long long n, k;
        cin >> n >> k;
        vector<long long> v(n);
        if (n == 2)
        {
            cout << "2 1" << endl;
            continue;
        }

        if (k % 2 == 0)
        {
            for (long long i = 0; i < n; ++i)
            {
                v[i] = n - 1;
            }
            v[n - 2] = n;
        }

        else
        {
            for (long long i = 0; i < n; ++i)
            {
                v[i] = n;
            }
            v[n - 1] = n - 1;
        }
        for(long long i = 0; i < n; ++i){
            cout << v[i] << " ";
        }
        cout << endl;
    }
}
