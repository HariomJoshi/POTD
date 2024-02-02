//question -> https://leetcode.com/problems/find-minimum-in-rotated-sorted-array/description/

#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size(), s= 0, e= n-1, pivot;
        while(s<=e){
            int m= s+(e-s)/2;
            if(m-1>=0 && m+1<n && nums[m-1]> nums[m] && nums[m+1]> nums[m]){
                pivot = m;
                break;
            }else if(nums[m]< nums[n-1]){
                // right sorted array
                pivot = m;
                e = m-1;
            }else{
                // left sorted array
                pivot = m;
                s = m+1;
            }
        }

        return nums[pivot];
    }
};
