#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    int check(string s, int k, char c){
        int n = s.size(), e= 0, st=0, t = 0, size = 0, ans = INT_MIN;
        char c2;
        if(c == 'T'){
            c2 = 'F';
        }else{
            c2 = 'T';
        }
        
        while(e<n && st<n){
            while(e< n && t<= k){
                if(s[e] == c2){
                    t++;
                }
                size++;
                e++;
                if(t<=k)ans = max(ans, size);
                // increasing the size of window up to limit
            }

            while(st<n && s[st] == c){
                st++;
                size--;
            }
            st++;
            size--;
            t--;
            ans = max(ans, size);
        }
        return ans;
    }
    int maxConsecutiveAnswers(string answerKey, int k) {
        if(answerKey.size() ==1) return 1;
        int num1= check(answerKey, k, 'T');
        int num2 = check(answerKey, k, 'F');
        
        return max(num1, num2);
    }
};