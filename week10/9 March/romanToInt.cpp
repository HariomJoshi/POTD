//question -> https://leetcode.com/problems/roman-to-integer/description/

#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char, int> map;
        map['I'] = 1;
        map['V'] = 5;
        map['X'] = 10;
        map['L'] = 50;
        map['C'] = 100;
        map['D'] = 500;
        map['M'] = 1000;
        int ans = 0;
        for(int i=0;i < s.size(); i++){
            if(i+1 < s.size() && map[s[i]]< map[s[i+1]]){
                ans += map[s[i+1]]-map[s[i]];
                i++;
            }else{
                ans+= map[s[i]];
            }
        }
        return ans;

    }
};