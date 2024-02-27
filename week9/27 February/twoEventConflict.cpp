//question -> https://leetcode.com/problems/determine-if-two-events-have-conflict/description/

#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    int time(string s){
        int sum = 0;
        for(int i =0;i<5; i++){
            if(s[i] == ':') continue;
            sum = sum*10 + s[i]-'0';
        }
        return sum;
    }
    bool haveConflict(vector<string>& event1, vector<string>& event2) {
        if(time(event1[1]) >= time(event2[0]) && time(event1[1]) <= time(event2[1])) return true;
        else if(time(event2[1]) >= time(event1[0]) && time(event2[1]) <= time(event1[1])) return true;
        else return false;
    }
};
