//question -> https://leetcode.com/problems/single-element-in-a-sorted-array/

#include<bits/stdc++.h>

using namespace std;


// class Solution {
// public:
//     int singleNonDuplicate(vector<int>& nums) {
//         int ans  = 0;
//         for(int i=0;i<nums.size();i++){
//             ans ^=nums[i];
//         }
//         return ans;
//     }
// };


// BS APPROACH 


class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n = nums.size();
        if(n == 1) return nums[0];
        int s = 0, e= n-1;
        while(s<=e){
            int m = s+ (e-s)/2;
            if((m-1>=0 && m+1< n && nums[m-1] != nums[m] && nums[m+1]!= nums[m]) || (m-1<0 && nums[m]!= nums[m+1]) || (m+1>=n && nums[m]!= nums[m-1])){
                return nums[m];
            }
            if(m%2==0){
                if(nums[m] == nums[m+1]){
                    s=m+1;
                }else{
                    e=m-1;
                }

            }else{
                if(nums[m] == nums[m+1]){
                    e=m-1;
                }else{
                    s=m+1;
                }
            }

        }
        return -1;
    }
};