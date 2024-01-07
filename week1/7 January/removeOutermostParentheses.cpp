//question link  - https://leetcode.com/problems/remove-outermost-parentheses/submissions/1139393389/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string removeOuterParentheses(string s) {
        string ans = "";
        int n = s.size(), count = 0, prevCount = 0;
        for(int i =0;i<n;i++){ 
            prevCount = count;
            if(s[i]=='(') count++;
            else count--;
            if(!(prevCount == 0 && count == 1 || prevCount == 1 && count == 0)){
                ans+= s[i];
                
            }
            
        }
        return ans;
    }
};