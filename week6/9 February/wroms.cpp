#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main(){ 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;
    vector<int> a(n,0);
    cin>> a[0];
    for(int i=1;i<n;i++){
        cin>>a[i];
        a[i] = a[i]+ a[i-1];
    }
    int q;
    cin>>q;
    for(int i=0;i<q;i++){
        int temp;
        cin>> temp;
        int ans = upper_bound(a.begin(), a.end(), temp)-a.begin();
        if(!binary_search(a.begin(), a.end(), temp)){
            ans++;
        }
        cout<< ans<< '\n';
    }
    

    return 0;
}