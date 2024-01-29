// question -> https://leetcode.com/problems/divide-players-into-teams-of-equal-skill/description/

#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
        sort(skill.begin(), skill.end());
        long long ans =0;
        int n  = skill.size(), sum = skill[0] + skill[n-1];
        for(int i=0;i<n/2;i++){
            int temp = skill[i] + skill[n-1-i];
            if(temp != sum) return -1;
            ans += (skill[i]*skill[n-1-i]);
        }
        return ans;
    }
};