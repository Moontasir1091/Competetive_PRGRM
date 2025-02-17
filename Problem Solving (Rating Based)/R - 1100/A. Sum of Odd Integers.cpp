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
        // vector<int>v;
        //  for(int i=1;i<=n;++i){
        //      if(i%2 != 0)v.push_back(i);
        //  }

       if((k*k) > n){
        cout << "NO" << endl;
        continue;
       }
       if(n%2 != k%2){
        cout << "NO" << endl;
        continue;
       }
       cout << "YES" << endl;
    }
}