#include <bits/stdc++.h>
using namespace std;

void selectionSort(int arr[], int size)
{

    for (int i = 0; i < size - 1; i++)
    {
        int minIndx = i;
        for (int j = i + 1; j < size; j++)
        {
            if (arr[j] < arr[minIndx])
            {
                minIndx = j;
            }
        }
        cout<<i;
        swap(arr[i], arr[minIndx]);
    }
}

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main()
{
    int arr[] = {10, 7, 8, 9, 1, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    printArray(arr, n);

    selectionSort(arr, n);

    cout << "Sorted array: ";
    printArray(arr, n);
    return 0;
}