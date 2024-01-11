#include <bits/stdc++.h>

using namespace std;

void quickSort(vector<int> &vect, int s, int e)
{
    if (s >= e) // only one element
        return;
    int less = 0;
    for (int i = s; i <= e; i++)
    {
        if (vect[i] < vect[s])
            less++;
    }
    int index = s + less;
    swap(vect[s], vect[index]);
    // now check if we have all the elements smaller at the left of pivot
    // or the right of pivot
    int l = s, h = e;
    while (l <= h)
    {
        while (l < s + less && vect[l] < vect[index])
        {
            l++;
        }
        while (h > s + less && vect[h] > vect[index])
        {
            h--;
        }
        swap(vect[l], vect[h]);
        l++;
        h--;
    }

    quickSort(vect, s, index - 1);
    quickSort(vect, index + 1, e);
}

int main()
{
    vector<int> vect = {23, 2, 6, 23, 19, 4, 70};

    quickSort(vect, 0, 6);
    for (int i = 0; i < 6; i++)
        cout << vect[i] << " ";
    cout << '\n';
}
