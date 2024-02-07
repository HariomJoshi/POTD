//question -> https://leetcode.com/problems/count-pairs-whose-sum-is-less-than-target/description/

#include<bits/stdc++.h>

using namespace std;

// a simple O(n^2) solution would work here

class Solution {
public:
    int countPairs(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int n = nums.size(), ans = 0;
        for(int i=0;i<n;i++){
            int s= 0, e= n -1, tans = i;
            while(s<=e){
                int m = s + (e-s)/2;
                if(nums[i] + nums[m] < target){
                    tans = m;
                    s = m+1;
                }else{
                    e = m-1;
                }
            }
            tans -=i;
            if(tans<0) tans = 0;
            ans+= tans;
        }
        return ans;
    }
};