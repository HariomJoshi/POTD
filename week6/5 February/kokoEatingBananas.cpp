//question -> https://leetcode.com/problems/guess-number-higher-or-lower/

#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    long long timeReq(vector<int>& vect, int& k, int& n){
        long long count = 0;
        for(int i=0;i<n;i++){
            count+= ceil((double)vect[i]/k);
        }
        return count;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int n = piles.size();
        if(n>h) return -1;
        int s = 1, e = INT_MIN;
        for(int i=0;i<n;i++) e = max(e, piles[i]);
        int ans = 0, ans2 =0;
        while(s<=e){
            int m = s+(e-s)/2;
            long long hrs = timeReq(piles, m, n);
            if(hrs == h){
                cout<< hrs<<endl;
                cout<< m<< endl;
                ans2 = m;
                ans = m;
                e = m-1;
            }else if(hrs>h){
                s = m+1;
            }else{
                ans = m;
                e = m-1;
            }
        }
        if(ans2 != 0) return ans2;
        return ans;
    }
};