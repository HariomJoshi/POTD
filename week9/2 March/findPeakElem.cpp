//question -> https://leetcode.com/problems/find-peak-element/description/

#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int s= 0, e = nums.size()-1;
        while(s<e){
            int m = s+(e-s)/2;
            if(nums[m]> nums[m+1]){
                e = m;
            }else{
                s = m+1;
            }
        }
        return e;
    }
};