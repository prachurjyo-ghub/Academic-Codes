#include <bits/stdc++.h>
using namespace std;

int size;          
int *arr;       
int top = -1;    


void push(int value)
{
    if (top == size )
    {
        cout << "Stack overflow! Cannot push more elements." << endl;
        return;
    }
    arr[++top] = value;
    cout << "Pushed " << value << " into the arr." << endl;
}

void pop()
{
    if (top < 0)
    {
        cout << "arr underflow! Cannot pop elements from an empty arr." << endl;
        return;
    }
    cout << "Popped " << arr[top] << " from the arr." << endl;
    top--;
}

void show()
{
    if (top < 0)
    {
        cout << "The arr is empty.\n";
        return;
    }
    cout << "arr elements: ";
    for (int i = 0; i <= top; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";
}

int main()
{
    cout << "Enter the size of the arr: ";
    cin >> size;
    arr = new int[size]; 
    int choice, value;

    while (true)
    {
        cout << "\nChoose an operation:\n";
        cout << "1. Push\n";
        cout << "2. Pop\n";
        cout << "3. Show\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter a value to push: ";
            cin >> value;
            push(value);
            break;
        case 2:
            pop();
            break;
        case 3:
            show();
            break;
        case 4:
            cout << "Exiting the program.\n";
            delete[] arr; // Free the dynamically allocated memory
            return 0;
        default:
            cout << "Invalid choice. Please try again.\n";
        }
    }

    return 0;
}