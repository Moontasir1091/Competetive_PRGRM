#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
       int  arr[n];
       int hsh[n+1];
       for(int i=1;i<=n;++i)
       {
           hsh[i]=0;
       }
        for( int i=0;i<n;++i)
        {
            cin >> arr[i];
           ++hsh[arr[i]];
        }
        int ans = -1;
        for( int i=1;i<=n;++i)
        {

            if(hsh[i]>=3)
            {
                ans=i;
                break;
            }

        }
        cout << ans << endl;
    }
}