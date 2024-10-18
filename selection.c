#include "common.h"

void selSort(int* origin, int size){
    int a[size];
    memcpy(a, origin, size * sizeof(int));
    
    int i, j, smaller;
    for(i=1; i<size-1; i++){

        smaller = i;

        for(j=i+1; j<size; j++){
            if(a[smaller] > a[j]){
                smaller = j;
            }
        }

        swap(&a[i], &a[smaller]);

    }
    printArr(a,8);
}