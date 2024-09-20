#include <bits/stdc++.h>
using namespace std;

void print(int *v, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}

/*-----------------------------------------iterative-------------------------------------------*/
void bubbleSort(int *v, int n)
{
    for (int i = 1; i < n; i++)
    {
        bool swapped = false;
        for (int j = 0; j < n - i; j++)
        {
            if (v[j] > v[j + 1])
            {
                swap(v[j], v[j + 1]);
                swapped = true;
            }
        }
        if (swapped == false)
            break;
    }
    print(v, n);
}

/*------------------------------------------recursive----------------------------------------*/
void bubbleSortRecur(int *v1, int m)
{
    if (m == 0 || m == 1)
        return;
    for (int i = 0; i < m - 1; i++)
    {
        if (v1[i] > v1[i + 1])
        {
            swap(v1[i], v1[i + 1]);
        }
    }
    bubbleSortRecur(v1, m - 1);
}

int main()
{
    int n;
    cin >> n;
    int *v = new int[n];
    for (int i = 0; i < n; i++)
        cin >> v[i];
    int m;
    cin >> m;
    int *v1 = new int[m];
    for (int i = 0; i < m; i++)
        cin >> v1[i];
    cout << "Sorting by bubble sort: ";
    bubbleSort(v, n);
    bubbleSortRecur(v1, m);
    cout << "Sorting by bubble sort using recursion: ";
    print(v1, m);
    delete[] v;
    delete[] v1;
    return 0;
}