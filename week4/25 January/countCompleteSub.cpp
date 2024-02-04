// question -> 

#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    int countCompleteSubarrays(vector<int>& nums) {
        unordered_set<int> st;
        int n = nums.size();
        for(int i=0;i<n;i++){
            st.insert(nums[i]);
        }
        int sz = st.size();
        st.clear();
        int ans=0;
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                st.insert(nums[j]);
                if(st.size() == sz){
                    ans += n-j;
                    break; 
                }
                
            }
            st.clear();
        }
        return ans;
        
        
    }
};