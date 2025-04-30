#include<bits/stdc++.h>
using namespace std;
void printArray(int arr[], int size);
int partition(int ar[], int start, int end)
{

    int pivot = ar[end];
    int i = start - 1;

    for (int j = start; j < end; j++)
    {
        if (ar[j] < pivot)
        {
            i++;

            swap(ar[i], ar[j]);
            cout<<" swaped"<<i<<" "<<j <<endl;
            printArray(ar,end);
        }
    }
    swap(ar[i + 1], ar[end]);
    cout<<"iterate \n";
    printArray(ar,end);
    return i + 1;
}

void Quicksort(int ar[], int start, int end)
{
    if (start < end)
    {
        int pivotIndex = partition(ar, start, end);
        Quicksort(ar, start, pivotIndex - 1);
        Quicksort(ar, pivotIndex + 1, end);
    }
}
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}
    
   
    int main() {
        int arr[] = {10, 7, 8, 9, 1, 5};
        int n = sizeof(arr) / sizeof(arr[0]);
    
        cout << "Original array: ";
        printArray(arr, n);
    
        Quicksort(arr, 0, n - 1);
    
        cout << "Sorted array: ";
        printArray(arr, n);
        return 0;
    }