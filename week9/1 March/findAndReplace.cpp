
//question -> https://leetcode.com/problems/find-and-replace-pattern/description/

#include<bits/stdc++.h>

using namespace std;


class Solution {
public:
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        if(pattern.size() == 1) return words;
        vector<string> ans;
        for(int i =0; i<words.size(); i++){
            bool found = true;
            unordered_map<char, char> map;
            vector<bool> mapped(26,false);
            for(int j = 0; j<pattern.size(); j++){
                if(map.find(pattern[j]) == map.end() && !mapped[words[i][j]-'a']){
                    map[pattern[j]] = words[i][j];
                    mapped[words[i][j] - 'a'] = true;
                }else{
                    if(map[pattern[j]] != words[i][j]){
                        found = false;
                        break;
                    }
                }
                // cout<< map[pattern[j]]<< " ";
            }
            // cout<<endl;
            if(found){
                ans.push_back(words[i]);
            }
        }
        return ans;
    }
};