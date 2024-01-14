#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    string makeSmallestPalindrome(string s) {
        int n = s.size();
        for(int i=0;i<n;i++)s[i] = min(s[i], s[n-1-i]);
        return s;
    }
};