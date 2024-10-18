#include "common.h"

// 1���� �迭 ���� ����, rows���� �������� ������
int *vector( int rows){
	int *vec;

	vec = (int *) malloc( sizeof( int ) * rows );

	return vec;
}

void makeVec(int* vec, int row, int range){
	
	//setRand();
	for(int i=0; i<row; i++)
		vec[i] = mrand(range);
}

void printArr(int* a, int size){
    for(int i=0; i<size; i++)
        printf("\t%d", a[i]);

    printf("\n");
}

void swap(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void setRandom(){
    srand(time(NULL));
}

int mrand(int range){



    return rand() % range;
}