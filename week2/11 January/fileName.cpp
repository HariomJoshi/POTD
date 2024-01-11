#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    string s;
    cin >> s;
    int count = 1, ans = 0;
    for (int j = 1; j < n; j++)
    {
        if (s[j] == s[j - 1] && s[j] == 'x')
        {
            count++;
        }
        else
        {
            if (count >= 3)
            {
                ans += count - 2;
            }
            count = 1;
        }
    }
    if (count >= 3)
    {
        ans += count - 2;
    }
    cout << ans << '\n';
}