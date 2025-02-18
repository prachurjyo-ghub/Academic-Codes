#include <stdio.h>

void searchAndUpdate(int arr[], int size, int target) {
    int found = 0;
    for(int i = 0; i < size; i++) {
        if(arr[i] == target) {
            arr[i] = -1;
            found = 1;
        }
    }
    if(found)
        printf("Value %d found and updated.\n", target);
    else
        printf("Value %d not found.\n", target);
}

void displayArray(int arr[], int size) {
    printf("Updated array: ");
    for(int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {10, 5, 4, 10, 67, 45, 60};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target;

    printf("Enter a value to search and update: ");
    scanf("%d", &target);

    searchAndUpdate(arr, size, target);
    displayArray(arr, size);

    return 0;
}
