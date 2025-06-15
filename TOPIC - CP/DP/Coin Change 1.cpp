#include<bits/stdc++.h>
using namespace std;
int dp[10010];

int coinchange_one(int ammount, vector<int>&coins){
if(ammount == 0)return 0;
    if(dp[ammount] != -1) return dp[ammount]; 
  int ans = INT_MAX;  
for(auto coin : coins){
    if(ammount - coin >= 0)
    ans = min(ans + 0LL, coinchange_one(ammount - coin, coins) + 1LL);
}
return dp[ammount] = ans;
}

int main(){
    memset(dp, -1, sizeof(dp));
    int n ; cin >> n;
    vector<int> a(n);
    for(int i = 0 ; i < n ; i++)cin >> a[i];

    int ammount; cin >> ammount;
    int result = coinchange_one(ammount, a);

    cout << result << endl;
}