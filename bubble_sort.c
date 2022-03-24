//
//  bubble_sort.c
//  sorting_algorithms
//
//  Created by Camarly Thomas on 19/03/22.
//

#include <stdio.h>


void bubble_sort(int *array, int size) {

    int swap_count = -1;
    int temp_hold = 0;

    while(swap_count != 0) {

        swap_count = 0;

        for(int i=0; i<size-1; i++) {
            if( array[i] < array[i+1]) {
                temp_hold = array[i];
                array[i] = array[i+1];
                array[i+1] = temp_hold;
                swap_count++;
            }
        }
    }
}


int main(int argc, const char * argv[]) {
    
    int array[] = {1, 4, 56, 98, 34, 9, 234, 506, 1001};
    int size = sizeof(array) / sizeof(*array);

    bubble_sort(array, size);

    for(int i=0; i<size; i++) {
        printf("%d ", array[i]);
    }
    
    printf("\n");
    
    return 0;
}
