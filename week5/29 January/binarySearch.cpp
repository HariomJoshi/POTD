//question -> https://leetcode.com/problems/binary-search/submissions/1160013878/

#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int s= 0, e= nums.size()-1;
        while(s<=e){
            int m = s+ (e-s)/2;
            if(nums[m] == target) return m;
            else if(nums[m]> target){
                e = m -1;
            }else{
                s = m+1;
            }
        }
        return -1;
    }
};