#include "common.h"


void bubSort(int *a, int size)
{
    int lastIndex = size - 1;

    int i, j, temp;

    for(i=0 ; i < lastIndex; i++){

        for(j=0 ; j < lastIndex-i; j++){

            if(a[j] > a[j+1]){
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
                //swap(&a[j], &a[j+1]);
            }
        }
    }
}