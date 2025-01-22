#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{

    int t;
    cin>>t;
        while(t--)
        {
               ll n,i,s=0;
               cin>>n;
               ll a[n];
               for(int i=0;i<n;++i)cin >> a[i];
               sort(a,a+n);
               ll res=a[0];
               for(i=0;i<n;i++)
               {
                   a[i]-=s;
                   s+=a[i];
               }
                for(i=0;i<n;i++)
                {
                     res=max(res,a[i]);
                }
                cout<<res<<endl;
        }

}
