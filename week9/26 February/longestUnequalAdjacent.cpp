
//question -> https://leetcode.com/problems/longest-unequal-adjacent-groups-subsequence-i/description/

#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<string> getLongestSubsequence( vector<string>& words, vector<int>& groups) {
        int n = words.size();
        int des = groups[0];
        vector<string> ans;
        for(int i =0;i<n;i++){
            if(groups[i]==des){
                ans.push_back(words[i]);
                if(des == 1) des =0;
                else des = 1;
            }
        }
        return ans;
        
    }
};
