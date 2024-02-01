//question -> https://leetcode.com/problems/count-negative-numbers-in-a-sorted-matrix/description/

#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    int neg2D(vector<int> &vect){
        int n = vect.size(), s= 0, e= n-1;
        if(vect[0]<0) return n;
        while(s<=e){
            int m = s+(e-s)/2;
            if(m<n-1 && vect[m]>=0 && vect[m+1]<0) return n-m-1;
            else if(vect[m]>= 0){
                s= m+1;
            }else{
                e = m-1;
            }
        }
        return 0;

    }

    int countNegatives(vector<vector<int>>& grid) {
        int m = grid.size();
        int s= 0, e = m-1;
        int pivot = m;
        if(grid[0][0]<0){
            pivot = 0;
        }else{
            while(s<=e){
                int m = s+ (e-s)/2;
                if(m>0 && grid[m][0] < 0 && grid[m-1][0]>=0){
                    pivot = m;
                    break;
                }else if(grid[m][0]>=0){
                    s = m+1;
                }else{
                    e = m-1;
                }
            }
        }
        int ans =0;
        cout<< m-pivot<< endl;
        ans += (m-pivot)*grid[0].size();
        for(int i=0;i<pivot;i++){
            int temp = neg2D(grid[i]);
            ans += temp;
            // cout<< "temp: "<< temp<<endl;
        }
        return ans;
    }
};