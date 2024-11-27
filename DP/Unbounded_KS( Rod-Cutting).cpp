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


