//question -> https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/

#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {\
        vector<int> ans;
        // an algorithm with complexity O(n) is simple run one for loop and record the first and last occurence of target but the callenge is to do the same thing in O(log n)

        // part 1: find the fist occurence
        int l =0;
        int r = nums.size()-1;

        int leftans = -1;
        while(l<=r){
            int mid = l + (r-l)/2;
            if(nums[mid] == target){
                leftans = mid;
                r = mid -1;
            }else if(nums[mid] < target){
                l = mid +1;
            }else{
                r = mid -1;
            }
        }
        ans.push_back(leftans);
        l =0;
        r = nums.size()-1;
        int rightans = -1;
        while(l<=r){
            int mid = l + (r-l)/2;
            if(nums[mid] == target){
                rightans = mid;
                l = mid +1;
            }else if(nums[mid] < target){
                l = mid +1;
            }else{
                r = mid -1;
            }
        }
        ans.push_back(rightans);
        return ans;

        
        
    }
};