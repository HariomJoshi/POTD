// Question link -> https://leetcode.com/problems/jump-game-ii/?source=submission-noac

#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    int smallest(vector<int> &vect, int i, int n){
        int size= vect.size(), mi = INT_MAX;
        for(int j = i; j<i+n; j++){ 
            if(j>=size){
                break;
            } 
            if(vect[j]< mi) mi = vect[j];
        }
        cout<< "end"<< '\n';
        return mi;
    }
    int jump(vector<int>& nums) {
        int n = nums.size();
        vector<int> dp(n,0);
        dp[n-1] = 0;
        for(int i =n-2;i>=0;i--){
            int temp = smallest(dp, i+1, nums[i]);
            if(temp == INT_MAX) dp[i] = INT_MAX;
            else dp[i] = 1+ temp;
        }
        return dp[0];
    }
};