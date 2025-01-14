#include <stdio.h>

// void array1(void);

// void main (void){
//     int i = 0; //4 bytes
    
//     //int a[5];
//     // a[0] = 11;
//     // a[1] = 22;
//     // a[2] = 33;
//     // a[3] = 44;
//     // a[4] = 55;

//     int a[5]={11,22,33,44,77}; 

//     for (; i < 5; i++) {
//        // a[i] = i * 2;
//         printf("a[%d]=%d\n", i, a[i]);
//     }
//     printf("\n");
//     array1();
// }

void main (void){
    int sort_array[10] = {5,7,1,9,12,17,3,6,11,4}; //4 bytes

    int i, j;

//initial array without sort

    for (i=0; i < 10; i++) {
       printf("[%d] ", sort_array[i]);
    }
    printf("\n");

    int low_index, temp;
//sort
    for (i=0; i < 10; i++) {
        low_index = i;
        
        for (j=i+1; j < 10; j++) {
            
            if (sort_array[j] < sort_array[low_index]){
                low_index = j;
            }
            
        }
        temp = sort_array[low_index];
        sort_array[low_index] = sort_array[i];
        sort_array[i] = temp;
    }

    for (i=0; i < 10; i++) {
       printf("[%d] ", sort_array[i]);
    }
    printf("\n");
}    