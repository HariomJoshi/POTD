//question -> https://leetcode.com/problems/top-k-frequent-elements/description/

#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    static bool comp(vector<int> &p1, vector<int> &p2){
        return p1[1] > p2[1];
    }
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> map;
        for(int i=0;i<nums.size(); i++){
            map[nums[i]]++;
        }
        vector<vector<int>> temp;
        for(auto &it: map){
            vector<int> t;
            t.push_back(it.first);
            t.push_back(it.second);
            temp.push_back(t);
        }
        sort(temp.begin(), temp.end(), comp);
        vector<int> ans;
        for(int i=0;i<k;i++){
            ans.push_back(temp[i][0]);
        }

        
        return ans;
        
    }
};
