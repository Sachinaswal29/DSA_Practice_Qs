#include <bits/stdc++.h>
using namespace std;

void printArray(int *a, int s, int e)
{
    for (int i = s; i <= e; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}

// Using loop
int binarySearch(int *a, int n, int target)
{
    int start = 0;
    int end = n - 1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (a[mid] == target)
            return mid;
        else if (a[mid] > target)
            end = mid - 1;
        else
            start = mid + 1;
    }
    return -1;
}

// Using recursion
int binarySearchRecur(int *a, int start, int end, int target)
{
    printArray(a, start, end);
    if (start > end)
        return -1;
    int mid = start + (end - start) / 2;
    if (a[mid] == target)
    {
        cout << "Index of target by binary search using recursion: ";
        return mid;
    }
    else if (a[mid] < target)
        return binarySearchRecur(a, mid + 1, end, target);
    else
        return binarySearchRecur(a, start, mid - 1, target);
}

int main()
{
    int n, target;
    cout << "Enter the size of array: ";
    cin >> n;
    int a[100];
    cout << "Enter the array elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    cout << "Enter target:";
    cin >> target;
    cout << "Index of target by binary search is: " << binarySearch(a, n, target) << endl; // T.C=O(logn) and only works when elements are in increasing or decreasing order
    // cout << "Steps of binary search using recursion: " << endl
    //      << binarySearchRecur(a, 0, n - 1, target) << endl;
    return 0;
}

// /* ------------------Using STL ------------------------*/
// if(binary_search(a,a+n,target)) return 1;
// else return 0;