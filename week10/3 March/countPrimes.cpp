//question -> https://leetcode.com/problems/count-primes/description/

#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    int countPrimes(int n) {
        if(n == 0 || n==1) return 0;
        vector<bool> prime(n+1, true);
        prime[0] = prime[1] = false;
        int count = 0;
        for(long long i=2;i<n;i++){
            if(prime[i]){
                for(long long j = i*i; j<n; j+=i){
                    if(prime[j])count++;
                    prime[j] = false;
                }
            }
        }
        return max(0,n-2-count);

    }
};
