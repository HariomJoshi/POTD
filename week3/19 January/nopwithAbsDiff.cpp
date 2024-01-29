// Question link - https://leetcode.com/problems/count-number-of-pairs-with-absolute-difference-k/description/

#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
        int count =0, n = nums.size();
        vector<int> v(101, 0);
        // for(int i =0;i<n;i++){
        //     for(int j =0;j<n;j++){
        //         if(abs(nums[i]-nums[j]==k)) count++;
        //     }
        // }
        // another way is count sort
        // we know that nums[i]<=100
        for(int i=0;i<n;i++){
            v[nums[i]]++;
        }
        for(int i=k;i<101;i++){
            count += v[i]*v[i-k];
        }
        return count;
    }
};