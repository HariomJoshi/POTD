#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int max = INT_MIN;
        int n = nums.size();
        for(int i =0;i<n/2;i++){
            if(nums[i]+nums[n-1-i]> max){
                max = nums[i]+nums[n-1-i];
            }
        }
        return max;
    }
};