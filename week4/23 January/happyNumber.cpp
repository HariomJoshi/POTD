// question -> https://leetcode.com/problems/happy-number/description/
#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    int sumSq(int n){
        int sum = 0;
        while(n>0){
            sum+= (n%10)*(n%10);
            n/=10;
        }
        return sum;
    }
    bool isHappy(int n) {
        unordered_set<int> st;
        while(n!=1){
            if(st.find(n) == st.end()){
                st.insert(n);
            }else return false;
            n = sumSq(n);
        }
        return true;
    }
};