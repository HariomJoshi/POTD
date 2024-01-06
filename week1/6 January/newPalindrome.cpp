// question link -> https://codeforces.com/problemset/problem/1832/A

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
        int n= s.size(), count = 0;
        for(int j =1;j<n/2;j++){
            if(s[j-1]!= s[j]){
                count++;
            } 
        }
        if(count < 1){
            cout<< "NO"<<'\n';
        }else{
            cout<< "YES"<< '\n';    
        }
        
 
        
    }
}