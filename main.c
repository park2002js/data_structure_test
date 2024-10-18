#include "common.h"

int main(){

    setRandom();

    int *vec;

    int size = 10000;
    
    for(int i=1; i<=1; i++)
    {
        vec = vector(size);
        makeVec(vec, size, 100000);

        if (vec == NULL) {
        printf("Memory allocation failed!\n");
        return 1; // ���� ó��
        }

        test_bubble(vec, size, i);

        test_selection(vec, size, i);

        test_insertion(vec, size, i);

        free(vec);
    }

    //printArr(vec,8);
}