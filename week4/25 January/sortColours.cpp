// question -> https://leetcode.com/problems/sort-colors/description/

#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int zero = 0, one=0, two=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i] ==0) zero++;
            else if(nums[i] ==1) one++;
            else two++;
        }
        int j=0;
        while(zero>0){
            nums[j] = 0;
            zero--;
            j++;
        }
        while(one>0){
            nums[j] = 1;
            one--;
            j++;
        }
        while(two>0){
            nums[j] = 2;
            two--;
            j++;
        }
        
    }
};