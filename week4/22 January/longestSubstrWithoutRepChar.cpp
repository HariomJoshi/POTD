// question -> https://leetcode.com/problems/longest-substring-without-repeating-characters/?envType=list&envId=rrssge1g

#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> map;
        string ans;
        string temp = "";
        for(int i =0; i<s.size(); i++){

            if(map.find(s[i])==map.end()){ // element not found
                map[s[i]] = i;
                temp += s[i];
                
            }

            else{  //element found
                i = map[s[i]];
                map.clear();
                temp = "";                 
            }
            if(ans.size() < temp.size()){
                ans = temp;
            }
        }
        return ans.size();
    }
};