// Question link - https://codeforces.com/contest/1873/problem/A
#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>> t;
    for(int i=0;i<t;i++){
        string s;
        cin>>s;
        string final = "abc";
        int count=0;
        for(int i=0;i<3;i++){
            if(final[i] == s[i])count++;
        }
        if(count == 1 || count == 3) cout<< "YES\n";
        else cout<< "NO\n";
    }
}