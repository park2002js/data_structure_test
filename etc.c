#include "common.h"

void swap(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void printArr(int* a, int size){
    for(int i=0; i<size; i++)
        printf("\t%d", a[i]);

    printf("\n");
}