// https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/U
//Normal Approch
#include<bits/stdc++.h>
using namespace std;
int wt[60], val[1100];


int Magical(int ind, int wt_left){
    if(wt_left == 0) return 0;

    if(ind < 0) return 0;


    int ans = Magical(ind - 1, wt_left);

    if(wt_left - wt[ind] >= 0)
    ans = max(ans,(Magical(ind - 1, wt_left - wt[ind]) + val[ind]));

    return ans;

}

int main(){
    int N, W; cin >> N >> W;
    for(int i=0;i<N;++i){
        cin >> wt[i] >> val[i];
    }

    cout << Magical(N-1 , W) << endl;

}

// DP Approch
#include<bits/stdc++.h>
using namespace std;
int wt[60], val[1100];

int dp[1000][1000];
int Magical(int ind, int wt_left){
    if(wt_left == 0) return 0;

    if(ind < 0) return 0;
if(dp[ind][wt_left] != -1) return dp[ind][wt_left];

    int ans = Magical(ind - 1, wt_left);

    if(wt_left - wt[ind] >= 0)
    ans = max(ans,(Magical(ind - 1, wt_left - wt[ind]) + val[ind]));

    return dp[ind][wt_left] = ans;

}

int main(){
    memset(dp , -1, sizeof(dp));
    int N, W; cin >> N >> W;
    for(int i=0;i<N;++i){
        cin >> wt[i] >> val[i];
    }

    cout << Magical(N-1 , W) << endl;

}