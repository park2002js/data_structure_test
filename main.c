#include "common.h"

int main(){

    setRandom();

    int *vec;
    int size = 50000;
    int i;

    // int sizet = 10000;
    // vec = vector(sizet);
    // int* a = vector(sizet);
    // makeVec(vec, sizet);
    // printArr(vec, sizet);
    // memcpy(a, vec, sizet * sizeof(int));
    // bubSort(vec, sizet);
    // memcpy(a, vec, sizet * sizeof(int));
    // selSort(vec, sizet);
    // memcpy(a, vec, sizet * sizeof(int));
    // insSort(a, sizet);
    // printArr(vec, sizet);
    // free(a);
    // free(vec);


    while(0){

        printf("\nlength '%d'\n",size);

        for(i=1; i<=10; i++)
        {
            vec = vector(size);
            makeVec(vec, size);

            if (vec == NULL) {
                printf("Memory allocation failed!\n");
                return 1; // 오류 처리
            }

            printf("CASE '%d' :\t", i);

            test_bubble(vec, size, i);

            test_selection(vec, size, i);

            test_insertion(vec, size, i);

            printf("\n");

            free(vec);
        }
        if(size == 1000000){
            return 0;
        }
        if(size == 10000){
            size = 100000;
        }
        else{
            size = size + 100000;
        }
        

        i=1;
    }
    return 0;
    //printArr(vec,8);
}