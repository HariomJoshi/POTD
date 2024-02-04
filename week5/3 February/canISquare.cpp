#include <bits/stdc++.h>
using namespace std;
 
int main(){ 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin>>t;
    for(int i =0; i<t; i++){
        int n;
        cin>> n;
        long long sum=0;
        for(int j =0;j<n;j++){
            int temp;
            cin>> temp;
            sum+=temp;
        }
        long long rt = sqrt(sum);
        if(rt*rt== sum){
            cout<< "YES"<< '\n';
        }else{
            cout<< "NO"<< '\n';
        }
 
        
    }
    return 0;
}