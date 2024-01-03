#include <bits/stdc++.h>
#include<stdio.h>
#include<iostream>

using namespace std;

class Solution {
public:
    int gp(int n){
        int sum = 0;
        while(n>0){
            sum += n-1;
            n--;
        }
        return sum;

    }
    int numIdenticalPairs(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int count = 1, ans =0;
        for(int i =1; i<nums.size(); i++){
            if(nums[i] == nums[i-1]){
                count++;
            }else{
                ans+= gp(count);
                count =1;
            }
        }
        ans+= gp(count);
        return ans;
    }
};