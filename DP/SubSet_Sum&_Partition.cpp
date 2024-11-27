// https://leetcode.com/problems/partition-equal-subset-sum/submissions/1464116226/
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
int dp[210][20010];
bool magic(int i, int sum ,vector<int>&nums){
        if(sum == 0) return true;
        if(i < 0) return false;
        if(dp[i][sum] != -1)return dp[i][sum];
// NOT CONSIDER
bool isPossible = magic(i-1 , sum, nums);

// CONSIDER
if(sum - nums[i] >= 0)
isPossible |= magic(i-1 , sum - nums[i], nums);

return dp[i][sum] = isPossible;

}
    bool canPartition(vector<int>& nums) {
        memset(dp , -1, sizeof(dp));
        int sum = accumulate(nums.begin(),nums.end(),0);
        if(sum%2 != 0) return false;

        sum = sum/2;
        return magic(nums.size()-1, sum, nums);
        
    }
};


int main(){

}