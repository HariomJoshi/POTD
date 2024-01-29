// Question -> https://leetcode.com/problems/permutation-in-string/description/

#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    bool isEmpty(unordered_map<char,int> &map){
        for(auto i:map){
            if(i.second!= 0) return false;
        }
        return true;
    }

    bool checkInclusion(string s1, string s2) {
        unordered_map<char, int> sub, temp;
        for(int i=0; i<s1.size(); i++){
            if(sub.find(s1[i]) == sub.end()) sub[s1[i]] = 1;
            else sub[s1[i]]++;
        }

        // map ready
        int s=0,e=0, n=s2.size();
        while(e<n){
            while(e<n && e-s< s1.size()){
                if(sub.find(s2[e]) != sub.end()){
                    sub[s2[e]]--;
                }
                e++;
            }
            if(isEmpty(sub)) return true;
            if(sub.find(s2[s]) != sub.end()){
                sub[s2[s]]++; 
            }
            s++;
        }
        return false;
    }
};