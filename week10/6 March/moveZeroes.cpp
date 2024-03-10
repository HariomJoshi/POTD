//question -> https://leetcode.com/problems/move-zeroes/description/

#include<bits/stdc++.h>

using namespace std;

// class Solution {
// public:
//     void moveZeroes(vector<int>& nums) {
//         int nzp=0, zp=0, n= nums.size();
//         while(nzp <n && zp <n){
//             while(zp<n-1 && nums[zp]!=0){
//                 zp++;
//             }
//             nzp = zp;
//             while(nzp<n-1 && nums[nzp]==0){
//                 nzp++;
//             }
//             if(nums[nzp]!=0 && nums[zp] == 0) swap(nums[nzp], nums[zp]);
//             else return;
//             // zp++;
//             // nzp++;
//         }
//     }
// };

class Solution{
    public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();

        // Count the zeroes
        int numZeroes = 0;
        for (int i = 0; i < n; i++) {
            numZeroes += (nums[i] == 0);
        }

        // Make all the non-zero elements retain their original order.
        vector<int> ans;
        for (int i = 0; i < n; i++) {
            if (nums[i] != 0) {
                ans.push_back(nums[i]);
            }
        }

        // Move all zeroes to the end
        while (numZeroes--) {
            ans.push_back(0);
        }

        // Combine the result
        for (int i = 0; i < n; i++) {
            nums[i] = ans[i];
        }
    }
};
