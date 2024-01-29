// question -> https://leetcode.com/problems/3sum-closest/
#include<bits/stdc++.h>

using namespace std;
class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int closestSum;
        int ans = nums[0] + nums[1] + nums[2];
        for(int i =0; i< nums.size()-2; i++){

            int l = i+1;
            int r = nums.size()-1;
            while(l < r){
                closestSum = nums[l] + nums[r] + nums[i];
                if(closestSum == target){
                    return closestSum;
                }
                if(abs(closestSum - target) < abs(ans - target)){
                    ans = closestSum;
                }
                if(closestSum < target){
                    l++;
                }else{
                    r--;
                }
            }
        }
        return ans;
        
    }
};