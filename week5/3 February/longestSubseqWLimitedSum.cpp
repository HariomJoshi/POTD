//question -> https://leetcode.com/problems/longest-subsequence-with-limited-sum/

#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
        sort(nums.begin(), nums.end());
        int n = nums.size(),m = queries.size();
        for(int i=1;i<n;i++){
            nums[i] += nums[i-1];
        }
        vector<int> ans;
        for(int i=0;i<m;i++){
            ans.push_back(upper_bound(nums.begin(), nums.end(), queries[i])-nums.begin());
        }
        return ans;
    }
};