//question -> https://leetcode.com/problems/missing-number/

#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        // traverse the array, swap from the location of the index
        int n = nums.size();
        for(int i =0;i<n;i++){
            while(nums[i]< n && nums[i] != i){
                swap(nums[i], nums[nums[i]]);
                
            }
        }
        for(int i =0;i<n;i++){
            if(nums[i]!= i) return i;
        }

        return n;
    }
};