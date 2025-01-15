#include <stdio.h>
#include <stdlib.h>

void printArray(int arr[], int size);
void sort(int arr[], int size);


    int arr[] = {12, 11, 13, 5, 6};
int main(void){

    int size = sizeof(arr) / sizeof(arr[0]);
    printf("Array\n");
    printArray(arr, size);
    printf("\n");
    sort(arr, size);
    printf("\n");
    printArray(arr, size);
    printf("\n");
    
    return 0;
}

void sort(int arr[], int size){
    int i, j, test_value;
    for (i = 0; i < size; i++){
        test_value = arr[i];
        j = i - 1;
        printf("Considering element: %d i = %d\n", test_value, i);

        while (j >= 0 && arr[j] > test_value){
            arr[j + 1] = arr[j];
            j--;
            printf("Moved element: %d to position = %d\n", arr[j + 1], (j + 2));
        }
        arr[j + 1] = test_value;
        printf("Placed element: %d at position = %d\n", test_value, (j + 1));
        for (int k = 0; k < size; k++) {
            printf("|%3d|", arr[k]);
        }
        printf("\n");
    }
}

void printArray(int arr[], int size){
    int i;
    for (i = 0; i < size; i++){
        printf("|%3d|", arr[i]);
    }
    printf("\n");
}
