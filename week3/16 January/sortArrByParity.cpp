#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int s=0,e =nums.size()-1;
        while(s<=e){
            while(s<=e && nums[s]%2== 0){
                s++;
            }
            while(e>=s && nums[e]%2==1){
                e--;
            } 
            if(s<=e && e>=s){
                swap(nums[s], nums[e]);
                s++;
                e--;
            }

        }
        return nums;
    }
};