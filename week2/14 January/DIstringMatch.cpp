#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<int> diStringMatch(string s) {
        int n = s.size();
        vector<int> v;
        int st = 0,e = n;
        for(int i=0;i<n;i++){
            if(s[i] == 'I') v.push_back(st++);
            else v.push_back(e--);
        }
        v.push_back(st);

        return v;
    }
};