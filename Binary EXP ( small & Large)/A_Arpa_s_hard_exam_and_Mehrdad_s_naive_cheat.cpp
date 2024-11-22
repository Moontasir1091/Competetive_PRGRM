/// prctice Question

#include<bits/stdc++.h>
using namespace std;


int binEXP(int a,int b, int m){
    int ans = 1;
    while(b){
        if(b&1){
            ans = (ans * 1LL * a)%m;
        }
        a = (a * 1LL * a)%m;
        b >>= 1;
    }
    return ans ;
}
int main()
{
	int n;
	cin>>n;
	cout<<binEXP(8,n,10)<<endl;
	return 0;
}