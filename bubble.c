#include "common.h"


void bubSort(int* origin, int size){

    int a[size];
    memcpy(a, origin, size * sizeof(int));

    int lastIndex = size - 1;

    int i;
    int j;

    for(i=0 ; i < lastIndex; i++){

        for(j=0 ; j < lastIndex-i; j++){

            if(a[j] > a[j+1]){
                swap(&a[j], &a[j+1]);
            }
        }
    }
}