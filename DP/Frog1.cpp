// https://atcoder.jp/contests/dp/tasks/dp_a

// 1.  Let's Do it Without DP

#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;

int h[N];
int magic(int i){
    int cost = INT_MAX;
    if(i==0)return 0;

cost = min(cost , magic(i-1) + abs(h[i]-h[i-1]));  // 1 --> 5

if(i > 1){
    cost = min(cost , magic(i-2) + abs(h[i]-h[i-2])); // 1 --> 4
}
return cost;
}

int main(){
    int n; cin >> n;
    for(int i=0;i<n;++i){
        cin >> h[i];
    }
    cout << magic(n-1);
}

// Output : TLE


// 2. With DP

#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;

int h[N], dp[N];
int magic(int i){
    int cost = INT_MAX;
    if(i==0)return 0;
    if(dp[i] != -1)return dp[i];

cost = min(cost , magic(i-1) + abs(h[i]-h[i-1]));  // 1 --> 5

if(i > 1){
    cost = min(cost , magic(i-2) + abs(h[i]-h[i-2])); // 1 --> 4
}
return dp[i] = cost;
}

int main(){
    memset(dp , -1 , sizeof(dp));
    int n; cin >> n;
    for(int i=0;i<n;++i){
        cin >> h[i];
    }
    cout << magic(n-1);
}

