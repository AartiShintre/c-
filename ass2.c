#include <stdio.h>

void findMinMax(int arr[], int n, int *min, int *max) {
   
    if (n <= 0) {
        printf("Array is empty.\n");
        return;
    }

    *min = *max = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] < *min) {
            *min = arr[i];
        }
        if (arr[i] > *max) {
            *max = arr[i];
        }
    }
}

int main() {
    int arr[] = {12, 34, 5, 7, 89, 1, 6, 0};  
    int n = sizeof(arr) / sizeof(arr[0]);   
    int min, max;

    findMinMax(arr, n, &min, &max);

    printf("Minimum value: %d\n", min);
    printf("Maximum value: %d\n", max);

    return 0;
}

