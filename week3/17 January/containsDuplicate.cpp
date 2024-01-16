#include<bits/stdc++.h>
using namespace std;

class Solution {
//it is my most optimised solution till now
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int, int> hash;
        int n= nums.size();
        for(int i=0;i<n;i++){
            if(hash[nums[i]] && (i-hash[nums[i]]+1<=k)) return true; 
            else hash[nums[i]]=i+1;
        }
        return false;

    }
};