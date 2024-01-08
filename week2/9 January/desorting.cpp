#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>> t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        int diff = INT_MAX, prev = 0;
        for(int j=0; j<n;j++){
            int temp;
            cin>> temp;
            if(j!=0){
                if(diff> temp -prev) diff = temp -prev;
            }
            prev = temp;
        }
        if(diff<0){
            cout<< 0<<'\n';
        }else{
            cout<< diff/2+1<<'\n';
        }
        
        
    }
}