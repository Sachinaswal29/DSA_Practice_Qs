// Find the maximum and minimum element in an array

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int *a = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int maxi = INT_MIN;
    int mini = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (a[i] < mini)
            mini = a[i];
        if (a[i] > maxi)
            maxi = a[i];
    }
    cout << "Maximum element: " << maxi << " and "
         << "Minimum element: " << mini;
    return 0;
}