#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin>>s;
    for(int i=0;i<s.size();i++){
        if(s[i]>= 65 && s[i]<=90){ 
            s[i] += 32; 
        }
        if(s[i]=='a' || s[i]=='e'|| s[i] == 'i' || s[i]=='o' || s[i] == 'u' || s[i]=='y'){
            s.erase(i, 1);
            i--;
        }else{
            s.insert(i, ".");
            i++;
        }

        
    }
    cout<< s<< '\n';
}