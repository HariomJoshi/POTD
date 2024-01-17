#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    int divisorSubstrings(int num, int k) {
        int n = to_string(num).size();
        long long start = pow(10, n), end = pow(10, n-k);
        int count =0;
        // cout<< start<< " "<< end<< endl;
        while(end>0){
            int temp = num;
            temp %= start;
            temp /=end;
            if(temp != 0 && num%temp==0) count++;
            // cout<< temp<< endl;
            start /=10;
            end /=10;
        }
        return count;

    }
};