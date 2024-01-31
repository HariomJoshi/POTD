//question -> https://leetcode.com/problems/arranging-coins/

#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    int arrangeCoins(int n) {
        int sub = 1, temp = n, count =0;
        
        while(temp>=sub){
            count++;
            temp -=sub;
            sub++;
        }
        if(temp == 0) return count;
        else if(temp> 0) count++;
        temp = sub-temp;
        int sub2 =1, count2 =0;
        while(temp>=sub2){
            count2++;
            temp-=sub2;
            sub2++;
        }
        if(count2==0){
            return count;
        }else{
            return count-1;
        }
    }
};