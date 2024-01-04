//Question link - https://leetcode.com/problems/longest-common-prefix/


#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n = strs.size(), m = INT_MAX;
        for(int i=0;i<n;i++){
            if(strs[i].size()<m){
                m = strs[i].size();
            }
            
        }
        string ans = "";
        bool found = true;
        for(int i =0;i<m;i++){
            for(int j =1;j<n;j++){
                if(strs[j][i] != strs[j-1][i]){
                    found = false;
                    break;
                }
            }
            if(found){
                ans+=strs[0][i];
            }
            
        }
        return ans;
    }
};