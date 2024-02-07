//question -> https://leetcode.com/problems/minimum-number-of-days-to-make-m-bouquets/

#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    int tb(vector<int>& v, int &d, int &k, int &n){
        int count =0, temp =0;
        for(int i=0;i<n;i++){
            if(v[i]<=d){
                temp++;
            }else{
                temp = 0;
            }
            if(temp == k){
                count++;
                temp = 0;
            }
        }
        return count;
    }


    int minDays(vector<int>& bloomDay, int m, int k) {
        int n = bloomDay.size();
        if(n/k< m) return -1;
        int s= 0, e= max_element(bloomDay.begin(), bloomDay.end())[0];
        int ans = -1;
        while(s<=e){
            int mid = s+(e-s)/2;
            int t = tb(bloomDay, mid, k, n);
            if(t>=m){
                ans = mid;
                e = mid-1;
            }else{
                s = mid+1;
            }
        }
        return ans;

    }

};



