// Question link - https://codeforces.com/contest/1811/problem/A

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
        int n;
        long long ma = LONG_LONG_MIN, smax = LONG_LONG_MIN, min = LONG_LONG_MAX, smin = LONG_LONG_MAX;
        cin >> n;
        for (int j = 0; j < n; j++)
        {
            int temp;
            cin >> temp;
            if (temp > ma)
            {
                smax = ma;
                ma = temp;
            }
            else if (temp > smax)
            {
                smax = temp;
            }

            if (temp < min)
            {
                smin = min;
                min = temp;
            }
            else if (temp < smin)
            {
                smin = temp;
            }
        }
        // cout << max << " " << smax << " " << min << " " << smin << " " << endl;
        long long ans = max(ma * smax, min * smin);
        cout << ans << '\n';
    }
}