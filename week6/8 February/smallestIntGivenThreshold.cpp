//question -> https://leetcode.com/problems/find-the-smallest-divisor-given-a-threshold/

#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    int sumDiv(vector<int>& nums, int &n, int &num){
        int sum =0;
        for(int i=0;i<n;i++){
            sum+= ceil((float)nums[i]/num);
        }
        return sum;
    }

    int smallestDivisor(vector<int>& nums, int t) {
        int n = nums.size(),  s=1, e = *max_element(nums.begin(), nums.end()); 
        int ans = e;
        // cout<< e<<endl;
        while(s<=e){
            int m = s+(e-s)/2;
            int sum = sumDiv(nums, n, m);
            // cout<< "M "<< m<< " Sum "<< sum<< endl;
            if(sum<= t){
                ans = m;
                e = m-1;
            }else{
                s = m+1;
            }
        }
        return ans;

    }  
};