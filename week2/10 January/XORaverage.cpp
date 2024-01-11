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
        cin >> n;
        if (n % 2 == 1)
        {
            for (int j = 0; j < n; j++)
                cout << 2 << " ";
            cout << '\n';
        }
        else
        {
            for (int j = 0; j < n - 2; j++)
                cout << 2 << " ";

            cout << 3 << " " << 1 << '\n';
        }
    }
}