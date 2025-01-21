#include <stdio.h>

void sort(int array[], int size);
void heap(int arr[], int size, int i);
void printArray(int array[], int size);

void main(){
    int arr[] = { 24,03,42,16,67,38,65,27};
    int size = sizeof(arr) / sizeof(arr[0]);
    sort(arr,size);
    printf("sorted array\n");
    printArray(arr,size);  
}


void sort(int array[], int size){
    //build heap 
    for(int i = size / 2 - 1; i >= 0; i--){
        heap(array,size,i);
    }
	
    // One by one extract an element from heap
	for (int i=size-1; i>=0; i--){
	    // Move current root to end
	    int temp = array[0];
	    array[0] = array[i];
	    array[i] = temp;
	  
	    // call max heapify on the reduced heap
	    heap(array, i, 0);
	}    

} 

void heap(int arr[], int size, int i){
    //initialize largest as root
    int largest = i;
    int left = 2*i +1;
    int right = 2*i +2;

    //if left child is larger than root
    if(left < size && arr[left] > arr[largest]){
        largest = left;
    }
    
    //if right child is larger than root
    if(right < size && arr[right] > arr[largest]){
        largest = right;
    }

    // if largest is not a root
    if(largest != i){
        int swap = arr[i];
        arr[i] = arr[largest];
        arr[largest] = swap;

        // Recursively heapify the affected sub-tree
	    heap(arr, size, largest);
    }
}

void printArray(int array[], int size){

    for (int i=0; i<size; ++i) {
		printf("%d ", array[i]);
	}
}    