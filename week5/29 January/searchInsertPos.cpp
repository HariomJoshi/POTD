// question -> https://leetcode.com/problems/search-insert-position/description/

#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int ans = upper_bound(nums.begin(), nums.end(), target)-nums.begin();
        if(binary_search(nums.begin(), nums.end(), target)){
            return ans -1;
        }
        return ans;
    }
};