// Question link - https://leetcode.com/problems/minimum-time-to-make-rope-colorful/
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findMin(int s, int e, vector<int>& neededTime){
        int sum =0, ma = INT_MIN;
        for(int i =s;i<=e;i++){
            ma = max(ma, neededTime[i]); 
            sum+=neededTime[i];
        }
        sum-=ma;
        return sum;
    }

    int minCost(string colors, vector<int>& neededTime) {
        int n = colors.size(), s=0, e =0, sum =0;
        bool vis = true;
        while(e<n){
            while(colors[e] == colors[e+1]){
                if(vis){
                    s=e;
                    vis = false;
                }
                e++;
            }
            if(!vis){
                sum+=findMin(s, e, neededTime);
            }
            vis= true;
            e++;
        }
        return sum;
    }
};