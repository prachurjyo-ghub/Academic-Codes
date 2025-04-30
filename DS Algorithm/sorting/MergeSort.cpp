#include <bits/stdc++.h>
using namespace std;

void merge(int ar[], int start, int mid, int end)
{

    int m = mid - start + 1;
    int n = end - mid;
    int l[m], r[n];
    // coping
    for (int i = 0; i < m; i++)
    {
        l[i] = ar[start + i];
    }
    for (int i = 0; i < n; i++)
    {
        r[i] = ar[mid + 1 + i];
    }
    int i = 0, j = 0, k = start;
    while (i < m && j < n)
    {
        if (l[i] <= r[j])
        {
            ar[k] = l[i];
            i++;
            k++;
        }
        else
        {
            ar[k] = r[j];
            j++;
            k++;
        }
    }

    while (i < m)
    {
        ar[k] = l[i];
        i++;
        k++;
    }
    while (j < n)
    {
        ar[k] = r[j];
        j++;
        k++;
    }
}

void MergeSort(int ar[], int start, int end)
{
    if (start < end)
    {
        int mid = start+ (end - start) / 2;
        MergeSort(ar, start, mid);
        MergeSort(ar, mid + 1, end);
        merge(ar, start, mid, end);
    }
}

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}

// Main function
int main()
{
    int arr[] = {10, 7, 8, 9, 1, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    printArray(arr, n);

    MergeSort(arr, 0, n - 1);

    cout << "Sorted array: ";
    printArray(arr, n);
    return 0;
}