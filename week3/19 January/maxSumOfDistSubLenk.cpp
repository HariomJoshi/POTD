// Question link - https://leetcode.com/problems/maximum-sum-of-distinct-subarrays-with-length-k/description/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        int s = 0, e = 0, n = nums.size();
        long long size = 0, ans = 0;
        unordered_map<int, int> map;

        while (s < n && e < n) {
            while (map.size() < k && e < n && s<n) {
                if (map.find(nums[e]) == map.end()) {
                    // element not found in map
                    map[nums[e]] = 1;
                    size += nums[e];
                    e++;

                } else{
                        // element found in map
                        size+= nums[e];
                        while (nums[s] != nums[e]) {
                            map.erase(nums[s]);
                            size -= nums[s];
                            s++;
                        }
                        size -= nums[s];
                        s++;
                        e++;
                    }
            }

            if (map.size() == k) {
                ans = max(ans, size);
            }
            if (s < n) {
                map.erase(nums[s]);
                size -= nums[s];
                s++;
            }
        }
        return ans;
    }
};