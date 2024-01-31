
//question -> https://leetcode.com/problems/search-in-rotated-sorted-array/

#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    // a simple binary search program
    int bs(vector<int>& nums, int target, int from, int to){
        int l= from, r = to;
        while(l<=r){
            int mid = l + (r-l)/2;
            if(nums[mid] == target){
                return mid;
            }else if(nums[mid]< target){
                l = mid + 1;
            }else{
                r = mid - 1;
            }
        } 
        return -1;
    }


    int search(vector<int>& nums, int target) {
        if(nums[0]<= nums[nums.size()-1]) { // check for rotated or not
            return bs(nums, target, 0, nums.size()-1); // the array is not rotated, hence normal binary search applied here
        }
        int l =0, r = nums.size() -1, pivot = 0;
        while(l<=r){
            int mid = l + (r -l)/2;
            if(nums[mid] > nums[r]){  // left side of the mid is sorted 
                if(nums[pivot] < nums[mid]){
                    pivot = mid;
                }
                l = mid +1;
            }
            else{  // right side of mid is sorted
                if(nums[pivot]< nums[r]){
                    pivot = r;
                }
                r = mid -1;
            }
        }
        cout<< pivot<< endl;
        // now we have pivot so we just have to search on both the sides of the pivot
        if(nums[0] == target) return 0;
        else if(target< nums[0]) return bs(nums, target, pivot+1, nums.size() -1);
        else return bs(nums, target, 0, pivot);
    }
};