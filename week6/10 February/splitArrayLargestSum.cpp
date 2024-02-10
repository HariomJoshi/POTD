//question -> https://leetcode.com/problems/split-array-largest-sum/description/

#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    int subWithMaxS(vector<int>& nums, int& s, int& n){
        int sum = 0, count =1;
        for(int i=0;i<n;i++){
            if(nums[i]>s) return n+1;
            sum+= nums[i];
            if(sum>s){
                count++;
                sum = nums[i];
            }
        }
        return count;
    }
    int splitArray(vector<int>& nums, int k) {
        int s= *min_element(nums.begin(), nums.end()), e = accumulate(nums.begin(), nums.end(), 0);
        int n = nums.size(), ans = 0;
        while(s<=e){
            int m = s+(e-s)/2;
            int num = subWithMaxS(nums, m, n);
            cout<<m<< " "<<num<< endl;
            if(num<=k){
                ans = m;
                e = m-1;
            }else{
                s = m+1;
            }

        }
        return ans;
    }
};