#include "common.h"

void selSort(int* a, int size){
    
    int i, j, smaller;
    for(i=0; i<size-1; i++){

        smaller = i;

        for(j=i+1; j<size; j++){
            if(a[smaller] > a[j]){
                smaller = j;
            }
        }

        swap(&a[i], &a[smaller]);

    }
}