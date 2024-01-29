// question1 -> https://leetcode.com/problems/compare-version-numbers/
#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    int comp(string &v1, string &v2, int ps, int pe, int p2s, int p2e){
        // convert the string to numbers and simple compare them
        long long n1 =0, n2=0;
        while(ps<= pe){
            n1 += n1*10 + (v1[ps]-'0');
            ps++;
        }

        while(p2s<= p2e){
            n2 += n2*10 + (v2[p2s]-'0');
            p2s++;
        }

        if(n1> n2) return 1;
        else if(n1< n2) return -1;
        else return 0;

    }
    int compareVersion(string version1, string version2) {
        int n1 = version1.size(), n2 = version2.size(), s1 =0, e1 = 0, s2 = 0, e2 = 0;

        while(e1<n1 && e2< n2){
            while(e1< n1){
                if(version1[e1] == '.') break;
                e1++;
            }
            while(e2< n2){
                if(version2[e2] == '.') break;
                e2++;
            }
            if(e1<=n1 && e2<=n2){
                int ans = comp(version1, version2, s1, e1-1, s2, e2-1);
                if(ans != 0) return ans;
                // else
                e1++;
                e2++;
                s1 = e1;
                s2 = e2;
            }
        }
        // cout<< "E2 "<< e2<< " E1 "<< e1<< endl;
        while(e1< n1){
            if(version1[e1] != '0' && version1[e1] != '.') return 1;
            e1++;
        }
        while(e2<n2){
            // cout<< version2[e2]<< endl;
            if(version2[e2] != '0' && version2[e2] != '.') return -1;
            e2++;
        }

        return 0;
    }
};