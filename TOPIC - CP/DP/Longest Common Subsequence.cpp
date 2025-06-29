// https://leetcode.com/problems/longest-common-subsequence/submissions/1464184093/

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
int dp[1005][1005];
int magic(int i, int j, string &s1, string &s2){
    if( i< 0 || j<0)return 0;

    if(dp[i][j] != -1)return dp[i][j];


    int ans = magic(i-1, j, s1, s2);

    ans = max(ans, magic(i, j-1, s1, s2));

    ans = max(ans ,  magic(i-1, j-1, s1, s2) + (s1[i] == s2[j]));

    return dp[i][j] = ans;



}
    int longestCommonSubsequence(string text1, string text2) {
        memset(dp, -1, sizeof(dp));

        return magic(text1.size()-1, text2.size()-1, text1 , text2);
        
    }
};

int main(){

}



