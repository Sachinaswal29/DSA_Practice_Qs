#include <iostream>
using namespace std;

void printArray(int *A, int n)
{
    for (int i = 0; i < n; i++)
        cout << A[i] << " ";
    cout << "\n";
}

/*-------------------------------------Using indexes-------------------------------------*/

void merge(int *A, int mid, int start, int end)
{
    int i = start, j = mid + 1, k = start;
    int *B = new int[end +1];
    while (i <= mid && j <= end)
    {
        if (A[i] < A[j])
            B[k++] = A[i++];
        else
            B[k++] = A[j++];
    }
    while (i <= mid)
        B[k++] = A[i++];
    while (j <= end)
        B[k++] = A[j++];
    for (int i = start; i <= end; i++)
        A[i] = B[i];
    delete[] B;
}

void mergeSort(int *A, int start, int end)
{
    if (start < end)
    {
        int mid = start + (end - start) / 2;
        mergeSort(A, start, mid);
        mergeSort(A, mid + 1, end);
        merge(A, mid, start, end);
    }
}

/*----------------------------By creating new array and copying the values----------------------------*/

// void mergeNew(int *A, int mid, int start, int end)
// {
//     int l1 = mid - start + 1;
//     int l2 = end - mid;
//     int *b = new int[l1];
//     int *c = new int[l2];
//     int k = start;
//     for (int i = 0; i < l1; i++)
//         b[i] = A[k++];
//     k = mid + 1;
//     for (int i = 0; i < l2; i++)
//         c[i] = A[k++];
//     int i = 0, j = 0;
//     k = start;
//     while (i < l1 && j < l2)
//     {
//         if (b[i] < c[j])
//             A[k++] = b[i++];
//         else
//             A[k++] = c[j++];
//     }
//     while (i < l1)
//         A[k++] = b[i++];
//     while (j < l2)
//         A[k++] = c[j++];
//     delete[] b;
//     delete[] c;
// }

// void mergeSortNew(int *B, int start, int end)
// {
//     if (start < end)
//     {
//         int mid = start + (end - start) / 2;
//         mergeSortNew(B, start, mid);
//         mergeSortNew(B, mid + 1, end);
//         mergeNew(B, mid, start, end);
//     }
// }

int main()
{
    int n;
    cin >> n;
    int *A = new int[n];
    for (int i = 0; i < n; i++)
        cin >> A[i];
    // int m;
    // cin >> m;
    // int *B = new int[m];
    // for (int i = 0; i < m; i++)
    //     cin >> B[i];
    cout << "Array before sorting: ";
    printArray(A, n);
    mergeSort(A, 0, n - 1);
    cout << "Array after sorting: ";
    printArray(A, n);
    cout << endl;
    // cout << "Array before sorting: ";
    // printArray(B, m);
    // mergeSortNew(B, 0, m - 1);
    // cout << "Array after sorting: ";
    // printArray(B, m);
    delete[] A;
    // delete[] B;
    return 0;
}
