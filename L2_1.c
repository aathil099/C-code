#include <stdio.h>

void main (void) {
    int sort_array[10] = {5, 7, 1, 9, 12, 17, 3, 6, 11, 4}; // 4 bytes

    int i, j;

    // Initial array without sort
    printf("Initial array:\n");
    for (i = 0; i < 10; i++) {
        printf("[%d] ", sort_array[i]);
    }
    printf("\n");

    int low_index, temp;

    // Sort
    for (i = 0; i < 10; i++) {
        low_index = i;
        printf("Outer loop iteration %d: \n", i);
        
        for (j = i + 1; j < 10; j++) {
            printf("  Inner loop iteration %d: comparing sort_array[%d] = %d and sort_array[%d] = %d\n", j, j, sort_array[j], low_index, sort_array[low_index]);
            
            if (sort_array[j] < sort_array[low_index]) {
                low_index = j;
                printf("    --> New low_index = %d (value = %d)\n", low_index, sort_array[low_index]);
            }
        }
        
        // Swap the found minimum element with the first element
        temp = sort_array[low_index];
        sort_array[low_index] = sort_array[i];
        sort_array[i] = temp;

        // Print the array after each outer loop iteration
        printf("  Array after outer loop iteration %d: ", i);
        for (int k = 0; k < 10; k++) {
            printf("[%d] ", sort_array[k]);
        }
        printf("\n");
    }

    // Final sorted array
    printf("Sorted array:\n");
    for (i = 0; i < 10; i++) {
        printf("[%d] ", sort_array[i]);
    }
    printf("\n");
}
