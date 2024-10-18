#include "common.h"

void selSort(int* a, int size){

    int i, j, smaller, temp;
    for(i=0; i<size-1; i++){

        smaller = i;

        for(j=i+1; j<size; j++){
            if(a[smaller] > a[j]){
                smaller = j;
            }
        }
        
        temp = a[i];
        a[i] = a[smaller];
        a[smaller] = temp;
        //swap(&a[i], &a[smaller]);

    }
}