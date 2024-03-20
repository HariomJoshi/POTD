#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define pb push_back
#define vi vector<int>
#define vll vector<ll>
#define pii pair<int,int>
#define pll pair<ll,ll>
#define f(i,n) for(int i=0;i<n;i++)
#define fc(i,k,n) for(int i=k;i<=n;i++)
#define fr(i,k,n) for(int i=k;i>=n;i--)
#define debug(x) cout << #x << " is " << x << endl;
#define all(v) v.begin(),v.end()
 
const int MOD = 1e9+7;
const int MAX = 2e5+5;
 
template<typename T>
void inputVector(vector<T>& v, int n) {
    for(int i=0; i<n; i++) {
        T temp;
        cin >> temp;
        v.push_back(temp);
    }
}
 
template<typename T>
void printVector(vector<T>& v) {
    for(int i=0; i<v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << "\n";
}
 
template<typename T>
void debugVector(vector<T>& v) {
    cout << "[ ";
    for(int i=0; i<v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << "]\n";
}

/*
 
THINK
gcd 
xor
binary search
simple math
dp
dont give up, you can pull it back :)
 
*/
 
void solve() {
    //solve here
    ll x;
    cin>>x;\
    int c= 0;
    while(x>0){
        if(x%2==1)c++;
        x/=2;
    }
    cout<< c<< '\n';

    

}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // #ifndef ONLINE_JUDGE
    // freopen("D:\\CP\\codeforces\\1IO\\input.txt","r",stdin);
    // freopen("D:\\CP\\codeforces\\1IO\\output.txt","w",stdout);
    // #endif
    int t=1;
    // cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}