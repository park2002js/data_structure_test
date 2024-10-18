#include "common.h"

int main(){

    setRandom();

    int *vec;

    int size = 10;

    int i;

    // vec = vector(size);
    // makeVec(vec, size);
    
    // printArr(vec, size);
    // insSort(vec, size);
    // printArr(vec, size);


    while(1){

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
        if(size == 10000){
            size = 100000;
        }
        else{
            size = size + 100000;
        }
        if(size == 1000000){
            return 0;
        }

        i=1;
    }
    return 0;
    //printArr(vec,8);
}