
//question -> https://leetcode.com/problems/rotate-image/description/

#include<bits/stdc++.h>

using namespace std;


class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                swap(matrix[i][j],matrix[j][i]);
            }
        }
        // now we have the transpose of matrix
        // we have to rotate 90 degrees clockwise so we are reversing each row
        // if we had to rotate 90 degrees anticlockwise we will be rotating each column
        for(int i =0;i<n;i++){
            for(int j =0;j<n/2; j++){
                swap(matrix[i][j],matrix[i][n-1-j]);
            }
        }
        
    }
};