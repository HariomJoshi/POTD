// question -> https://leetcode.com/problems/sort-array-by-parity-ii/description/
#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        int n = nums.size(), o = 1, e = 0;
        while(o<n && e<n){
            while(o<n && nums[o]%2==1){
                o+=2;
            }
            while(e<n && nums[e]%2==0){
                e+=2;
            }
            if(o<n && e<n)swap(nums[e], nums[o]);
        }
        return nums;
    }
};