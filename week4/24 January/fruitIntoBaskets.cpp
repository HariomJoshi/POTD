// question  -> https://leetcode.com/problems/fruit-into-baskets/description/

#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int diff = 0, s=0, e=0, n = fruits.size(), ans =0; 
        unordered_map<int, int> map;
        while(e<n){
            while(e<n && map.size()<=2){
                //increasing the size of window
                if(map.find(fruits[e]) != map.end()){
                    map[fruits[e]]++;
                }else{
                    map[fruits[e]]=1;
                }
                e++;
                if(map.size()<=2) ans = max(ans, e-s);  // storing the ans
                
            }

            while(s<e && map.size()>2){
                // decreasing the size of window
                if(map[fruits[s]] == 1){
                    map.erase(fruits[s]);
                }else{
                    map[fruits[s]]--;
                }
                s++;
            }
        }
        return ans;
    }
};
