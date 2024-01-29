// question -> https://leetcode.com/problems/max-consecutive-ones-iii/description/

#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int e =0, s=0, n = nums.size(), ans =0;
        while(e<n){
            while(e<n && k>=0){
                if(nums[e] == 0) k--;
                e++;
                if(k>=0)ans = max(ans, e-s);
            }
            
            while(s<e && k<0){
                if(nums[s] == 0) k++;
                s++;
            }
        }
        return ans;
    }
};
