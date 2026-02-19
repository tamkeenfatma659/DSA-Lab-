#include <stdio.h>


int binarySearch(int arr[], int item, int low, int high) {
    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == item)
            return mid + 1;   
        else if (arr[mid] < item)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return low;
}


void binaryInsertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;

        
        int pos = binarySearch(arr, key, 0, j);

   
        while (j >= pos) {
            arr[j + 1] = arr[j];
            j--;
        }
  arr[j + 1] = key;
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}


int main() {
    int arr[] = {12, 11, 13, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    binaryInsertionSort(arr, n);

    printf("Sorted array: ");
    printArray(arr, n);

    return 0;
    }