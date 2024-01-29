//question -> https://leetcode.com/problems/subarray-sum-equals-k/

#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> v(n, 0);
        v[0] = nums[0];
        for(int i =1;i<n;i++){
            v[i] = nums[i] + v[i-1];
        }
        // prefix sum ready
        
        int ans = 0;
        unordered_map<int, int> mp;
        for(int i =0;i<n;i++){
            if(v[i] == k) ans++;
            if(mp.find(v[i]-k) != mp.end()){
                ans += mp[v[i]-k];
            }
            mp[v[i]]++;
        }
        return ans;
    }
};
