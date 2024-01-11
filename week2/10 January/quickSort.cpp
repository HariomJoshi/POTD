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
        int n, k;
        cin >> n >> k;
        int count = 0, target = 1;
        for (int j = 0; j < n; j++)
        {
            int temp;
            cin >> temp;
            if (temp != target)
                count++;
            else
                target++;
        }
        if (count % k == 0)
            cout << count / k << '\n';
        else
            cout << count / k + 1 << '\n';
        // cout << ceil(count / k) << '\n';
        // input ready
    }
}