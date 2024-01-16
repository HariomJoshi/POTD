#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int longestAlternatingSubarray(vector<int>& nums, int threshold) {
        int n = nums.size(), l =0, ans = INT_MIN;
        bool e=true, s=false;
        for(int i=0;i<n;i++){
            if(nums[i]%2==0 && e && nums[i]<=threshold){
                e= !e;
                l++;
                if(!s){
                    s=true;
                    l=1;
                }
            }else if(nums[i]%2==1 && !e && nums[i]<=threshold && s){
                l++;
                e= !e;
            }else if(nums[i]%2==0 && !e && nums[i]<= threshold && s){
                l=1;
                e=false;
                s= true;
            }else {
                
                e=true;
                s=false;
                l =0;
            }
            ans = max(ans, l);
        }
        ans = max(ans, l);
        return ans;
    }
};