// https://www.geeksforgeeks.org/problems/rod-cutting0840/1
#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
int dp[1005];
  int magic(int len, vector<int> &price){
    if(len==0)return 0;
    if(dp[len] != -1)return dp[len];
    int ans = 0;
    for(int len_to_cut = 1; len_to_cut <= price.size(); ++len_to_cut){
        if(len - len_to_cut >= 0){
            ans = max(ans , magic((len - len_to_cut), price) + price[len_to_cut - 1]);
        }
    }
    return dp[len] = ans;
  }

   int cutRod(vector<int> &price) {
        // code here
         memset(dp, -1, sizeof(dp)); // Initialize the global dp array to -1
        int n = price.size();
        return magic(n, price);
    }
};

int main(){
  
}


// https://codeforces.com/problemset/problem/189/A
/*#include <bits/stdc++.h>
using namespace std;
#define ll long long
long long dp[4005];
ll magic(ll n, ll a, ll b, ll c) { // Change return type to `ll`
    if (n == 0) return 0;         // Base case: no length left to cut
    if (n < 0) return INT_MIN;    // Invalid case: negative length
    if(dp[n] != -1)return dp[n];

    // Try all possible cuts and take the maximum
    ll ans = 1 + magic(n - a, a, b, c);
    ans = max(ans, magic(n - b, a, b, c)+1);
    ans = max(ans, magic(n - c, a, b, c)+1);

    return dp[n] = ans;
}

int main() {
    memset(dp , -1, sizeof(dp));
    ll n, a, b, c;
    cin >> n >> a >> b >> c;
    cout << magic(n, a, b, c) << endl;
    return 0;
}
*/


