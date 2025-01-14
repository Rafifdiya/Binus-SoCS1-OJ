#include <stdio.h>

int main() {
    int arr[] = {4, 6, 23, 18, 7, 47, 2, 83, 16, 38};
    int size = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    printf("Sorted Array (Ascending): ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

