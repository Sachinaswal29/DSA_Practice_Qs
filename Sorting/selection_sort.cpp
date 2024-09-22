#include <bits/stdc++.h>
using namespace std;

void print(int *v, int n)
{
    for (int i = 0; i < n; i++)
        cout << v[i] << " ";
    cout << endl;
}

/*--------------------------------------------iterative------------------------------------------*/
void selectionSort(int *v, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int minIndex = i;
        for (int j = i + 1; j < n; j++)
        {
            if (v[j] < v[minIndex])
                minIndex = j;
        }
        swap(v[minIndex], v[i]);
    }
    print(v, n);
}

/*---------------------------------------------recusive-------------------------------------------*/
void selectionSortRecur(int *v1, int m)
{
    if (m == 0 || m == 1)
        return;
    int minIndex = 0;
    for (int j = 1; j < m; j++)
    {
        if (v1[j] < v1[minIndex])
            minIndex = j;
    }
    swap(v1[minIndex], v1[0]);
    selectionSortRecur(v1 + 1, m - 1);
}

int main()
{
    int n;
    cin >> n;
    int *v = new int[n];
    int m;
    cin >> m;
    int *v1 = new int[m];
    for (int i = 0; i < n; i++)
        cin >> v[i];
    for (int i = 0; i < m; i++)
        cin >> v1[i];
    cout << "Sorting by selection sort: ";
    selectionSort(v, n);
    selectionSortRecur(v1, m);
    cout << "Sorting by selection sort using recursion: ";
    print(v1, m);
    delete[] v;
    delete[] v1;
    return 0;
}