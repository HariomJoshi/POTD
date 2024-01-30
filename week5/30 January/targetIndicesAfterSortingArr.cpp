//question -> https://leetcode.com/problems/find-target-indices-after-sorting-array/description/

#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int b = upper_bound(nums.begin(), nums.end(), target) - nums.begin();
        int a = lower_bound(nums.begin(), nums.end(), target) - nums.begin();
        vector<int> vect;
        for(int i =a;i<b;i++){
            vect.push_back(i);
        }
        return vect;  
    }
};