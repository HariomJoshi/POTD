//question -> https://leetcode.com/problems/camelcase-matching/description/

#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<bool> camelMatch(vector<string>& queries, string pattern) {
        vector<bool> ans;
        int n = queries.size();
        for(int i=0;i<n;i++){
            int idx= 0;
            bool match = true;
            for(int j=0; j<queries[i].size();j++){
                if(idx< pattern.size() && queries[i][j] == pattern[idx]){
                    idx++;
                    continue;
                }else if(idx< pattern.size() && queries[i][j] != pattern[idx]){
                    if(queries[i][j] <= 'Z'){
                        match = false;
                        break;
                    }
                }
                if(idx >= pattern.size()){
                    if(queries[i][j] <= 'Z'){
                        match = false;
                        break;
                    }
                }
            }
            if(idx == pattern.size() && match) ans.push_back(true);
            else ans.push_back(false);
        }
        return ans;
    }
};
