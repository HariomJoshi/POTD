#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        string s;
        cin>>s;
        string f = "codeforces";
        int count =0;
        for(int j =0;j<10;j++){
            if(f[j] != s[j]) count++;
        }
        cout<< count<< '\n';
    }
}