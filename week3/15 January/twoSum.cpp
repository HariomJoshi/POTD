#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> list;
        // saving previous indices of elements in a hashmap
        for(int i =0; i<nums.size(); i++){
            list[nums[i]] = i;
        }
        vector<int> ans;

        for(int i=0; i<nums.size(); i++){
            int num = nums[i];
            int complement = target -num;
            if(list.find(complement) != list.end() && list[complement] != i){
                ans.push_back(i);
                ans.push_back(list[complement]);
                return ans;
            }
        }
        return ans;
    }
};