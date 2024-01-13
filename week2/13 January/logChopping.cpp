#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>> t;
    while(t--){
        int n;
        cin>>n;
        int sum = 0;
        while(n--){
            int temp;
            cin>> temp;
            sum+= temp-1;
            sum%=2;
        }
        if(sum%2==1) cout<< "errorgorn"<< '\n';
        else cout<< "maomao90"<< '\n';
    }
}