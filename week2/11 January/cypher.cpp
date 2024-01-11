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
        int final[n];
        for (int j = 0; j < n; j++)
            cin >> final[j];
        for (int j = 0; j < n; j++)
        {
            int b;
            cin >> b;
            string move;
            cin >> move;
            int netCount = final[j];
            for (int k = 0; k < b; k++)
            {
                // we will have to perform opposite actions to reach the previous state
                if (move[k] == 'U')
                    netCount--;
                else
                    netCount++;
            }
            // note that, we are not finding modulus with here, because total number of digits is 10
            netCount %= 10;
            if (netCount < 0)
                netCount += 10; // similarly here also
            final[j] = netCount;
        }
        for (int j = 0; j < n; j++)
            cout << final[j] << " ";
        cout << '\n';
    }
}