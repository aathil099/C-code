#include <stdio.h>
#include <stdbool.h>

void swap(int array[], int index1, int index2) {
    int temp = array[index1];
    array[index1] = array[index2];
    array[index2] = temp;
}

void bubble_sort(int array[], int size) {
    bool isSorted;
    for (int i = 0; i < size; i++) {
        isSorted = true;
        for (int j = 1; j < size; j++) {
            if (array[j] < array[j - 1]) {
                swap(array, j, j - 1);
                isSorted = false;
            }
        }
        if (isSorted) {
            return;
        }
    }
}

void print_array(int array[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {21, 16, 7, 4, 2, 55, 10};
    int size = sizeof(arr) / sizeof(arr[0]);

    bubble_sort(arr, size);

    printf("Sorted array: ");
    print_array(arr, size);

    return 0;
}
