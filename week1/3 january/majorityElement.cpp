// Question link - https://leetcode.com/problems/majority-element/
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int elem = nums[0], count =0, n = nums.size();
        for(int i =0;i<n;i++){
            if(nums[i] == elem) count++;
            else{
                count--;
                if(count< 0){
                    elem = nums[i];
                    count = 1;
                }
            }
        }
        return elem;
    }
};