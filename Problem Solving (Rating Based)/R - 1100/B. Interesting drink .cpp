#include<bits/stdc++.h>
using namespace std;


int main()
{
    int m,n,i,j,k;
    cin>>n;
    int arr[n],q;
    int cnt= 0;
    for(i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    cin>>q;
    sort(arr,arr+n);
    int res ;
    while(q--)
    {
        cin>>m;
        res=upper_bound(arr,arr+n, m) - arr;
        cout<<res<<endl;
    }
return 0;
}