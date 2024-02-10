//question -> https://leetcode.com/problems/heaters/

#include<bits/stdc++.h>

using namespace std;


class Solution {
public:
    bool isSuitable(vector<int>& houses, vector<int>& heaters, int& k, int& n, int &m){
        // reduced the time complexity from n^2 to n using two pointers
        int j =0, i =0;
        while(j<m && i<n){
            while(i<n && abs(houses[i]-heaters[j])<=k){
                i++;
            }
            if(i>=n) return true; // all the houses are heated
            while(j<m && abs(houses[i]-heaters[j])> k){
                j++;
            }
        }
        return false;
    }

    int findRadius(vector<int>& houses, vector<int>& heaters) {
        sort(houses.begin(), houses.end());
        sort(heaters.begin(), heaters.end());
        int m = heaters.size(), n = houses.size(), s= 0;
        int max1 = abs(houses[0] - heaters[m-1]), max2 = abs(houses[n-1] - heaters[0]);
        int e = max(max1, max2), ans = -1;
        while(s<=e){
            int mid = s+(e-s)/2;
            if(isSuitable(houses, heaters, mid, n, m)){
                ans = mid;
                e =mid-1;
            }else{
                s = mid+1;
            }
        }
        return ans;
        
    }
};