// Question -> https://leetcode.com/problems/container-with-most-water/description/

#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
        int s = 0, e = height.size() -1, ans =0;
        while(s<=e){
            ans = max(ans, (e-s)*min(height[s], height[e]));
            if(height[s]< height[e]) s++;
            // else if(height[s]> height[e]) e--;
            // else{
            //     s++;
            //     e--;
            // }
            else e--;
        }
        return ans;
    }
};