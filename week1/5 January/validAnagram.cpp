#include<bits/stdc++.h>

using namespace std;
class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> letters(26,0);
        int n = s.size();
        if(n != t.size()) return false;
        for(int i=0;i<n;i++){
            letters[s[i]-'a']++;
        }

        for(int i=0;i<n;i++){
            letters[t[i]-'a']--;
        }

        for(int i=0;i<26;i++){
            if(letters[i] >=1) return false;
        }
        return true;
        
    }
};