//question -> https://leetcode.com/problems/subdomain-visit-count/description/

#include<bits/stdc++.h>

using namespace std;


class Solution {
public:
    vector<string> subdomainVisits(vector<string>& cpdomains) {
        unordered_map<string, int> mp;
        for(int i=0;i<cpdomains.size();i++){
            int n= cpdomains[i].size();
            int s= 0;
            string temp = "";
            int num = 0;
            for(int j =0; j<n;j++){
                if(cpdomains[i][j] == ' '){
                    s = j;
                    num = stoi(temp);
                    break;
                }
                temp+= cpdomains[i][j];
            }
            temp = "";
            for(int j = n-1; j>s;j--){
                if(cpdomains[i][j] == '.'){
                    mp[temp] += num;
                }
                temp= cpdomains[i][j] + temp;
            }
            mp[temp] += num;
        }
        vector<string> ans;
        for(auto &it: mp){
            ans.push_back(to_string(it.second) + " "+ it.first);
        }
        return ans;
    }
};