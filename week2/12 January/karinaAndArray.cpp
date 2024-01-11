// Question link - https://codeforces.com/contest/1822/problem/B

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n, d;
        cin >> n >> d;
        string s;
        cin >> s;
        string ans = "";
        int idx = n, currAvg = 0;
        for (int j = n - 1; j >= 0; j--)
        {
            currAvg = (currAvg + s[j] - '0') / n - j;
            if (currAvg < d && s[j] < d + '0')
                idx = j;
        }
        ans = s.substr(0, idx) + to_string(d) + s.substr(idx, n - idx);
        cout << ans << '\n';
    }
}