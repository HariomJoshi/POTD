//question -> https://leetcode.com/problems/maximum-distance-between-a-pair-of-values/

#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    int isValid(vector<int> &n1, int &target, int &e){
        int s= 0, ans = -1, n =e;
        while(s<=e){
            int m = s+(e-s)/2;
            if(n1[m] <= target){
                ans = m;
                e = m-1;
            }else{
                //  if(n1[m]> target)
                s = m+1;
            }
        }
        return ans;
    }

    int maxDistance(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size(), m = nums2.size(), ans = -1;
        for(int j=0;j<m;j++){
            // j is a pointer to second array
            int e = j;

            if(e>=n) e= n-1;
            int idx = isValid(nums1, nums2[j], e);
            if(idx != -1){
                ans = max(ans, j-idx);
            }
        }
        return (ans==-1)? 0:ans;  
    }
};