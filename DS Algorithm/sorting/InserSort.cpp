#include <bits/stdc++.h>
using namespace std;

void Insertion_Sort(vector<int> &ar, int size)
{

    for (int i = 1; i < size; i++)
    {
        int elementToBeInsrt = ar[i];
        int j = i - 1; // it will use to travers in the sorted part to insert
        while (j >= 0 && ar[j] > elementToBeInsrt)
        {
            ar[j + 1] = ar[j];
            j--;
        }
        ar[j + 1] = elementToBeInsrt;
    }
}

int main()
{

    int size;
    cout << "Size ";
    cin >> size;
    vector<int> ar(size);
    cout << "Elements : \n";
    for (size_t i = 0; i < size; i++)
    {
        cin >> ar[i];
    }

    Insertion_Sort(ar, size);

    cout << "sorted Elements : \n";
    for (size_t i = 0; i < size; i++)
    {
        cout << ar[i];
    }

    return 0;
}