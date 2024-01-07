// Question link - https://codeforces.com/problemset/problem/1684/A
#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>> t;
    for(int i=0;i<t;i++){
        int n;
        cin>> n;
        int length =0, temp = n, mi = INT_MAX;
        while(temp>0){
            mi = min(mi, temp%10);
            temp/=10;
            length++;
        }
        if(length == 2) cout<< n%10<< '\n';
        else cout<< mi<< '\n';

    }
}