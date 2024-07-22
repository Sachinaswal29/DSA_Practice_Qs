#include <bits/stdc++.h>
using namespace std;

void printArray(int *a, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}

// Using loop
int linearSearch(int *a, int n, int target)
{
    for (int i = 0; i < n; i++)
        if (a[i] == target)
            return i;
    return -1;
}

// Using recursion
int linearSearchRecur(int *a, int n, int target, int index)
{
    printArray(a, n);
    if (n == 0)
        return -1;
    if (a[0] == target)
    {
        cout << "Index of target by linear search using recusion: ";
        return index;
    }
    return linearSearchRecur(a + 1, n - 1, target, index + 1);
}

int main()
{
    int n, target;
    cout << "Enter the size of array: ";
    cin >> n;
    int a[100];
    cout << "Enter the array elements: ";
    for (int i = 0; i < n; i++)
        cin >> a[i];
    cout << "Enter target:";
    cin >> target;
    cout << "Index of target by linear search using loop: " << linearSearch(a, n, target) << endl; // T.C=O(n) and works in every condition
    cout << "Steps of linear search using recursion: " << endl
         << linearSearchRecur(a, n, target, 0) << endl;
    return 0;
}