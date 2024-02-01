//question -> https://leetcode.com/problems/the-k-weakest-rows-in-a-matrix/description/

#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    int power(vector<int> &vect){
        int s =0, n = vect.size(), e = n-1;
        if(vect[0] == 0) return 0;
        while(s<=e){
            int m = s+ (e-s)/2;
            if(m<n-1 && vect[m] == 1 && vect[m+1] == 0) return m+1;
            else if(vect[m] == 0){
                e = m-1;
            }else{
                s = m+1;
            }
            
        }
        return n;
    }

    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        vector<int> indices;
        int prev = 0;
        set<int> found;
        for(int j=0;j<k;j++){
            int min = INT_MAX, midx = 0;
            for(int i =0;i<mat.size();i++){
                if(found.find(i) != found.end()){
                    continue;
                }
                int temp = power(mat[i]);
                if(temp< min){
                    min = temp;
                    midx = i;
                }
                
            }
            found.insert(midx);
            indices.push_back(midx);
        }
        return indices;
        
    }
};