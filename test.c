#include "common.h"

void test_bubble(int* origin, int size, int case_num)
{
    int* vec = vector(size);
    memcpy(vec, origin, size * sizeof(int)); // 같은 배열을 쓰기 위해 원본 보호

    clock_t start = clock(); 
    bubSort(vec, size);  // 정렬 수행
    clock_t end = clock(); 
    
    double t = (double)(end - start) / CLOCKS_PER_SEC;
    printf("Bubble Sort : case '%d' takes %lf seconds on vector of length %d\n", case_num, t, size);

    free(vec);
}

void test_selection(int* origin, int size, int case_num)
{
    int* vec = vector(size);
    memcpy(vec, origin, size * sizeof(int)); // 같은 배열을 쓰기 위해 원본 보호

    clock_t start = clock(); 
    selSort(vec, size);  // 정렬 수행
    clock_t end = clock(); 
    
    double t = (double)(end - start) / CLOCKS_PER_SEC;
    printf("Selection Sort : case '%d' takes %lf seconds on vector of length %d\n", case_num, t, size);

    free(vec);
}

void test_insertion(int* origin, int size, int case_num)
{
    int* vec = vector(size);
    memcpy(vec, origin, size * sizeof(int)); // 같은 배열을 쓰기 위해 원본 보호

    clock_t start = clock(); 
    insSort(vec, size);  // 정렬 수행
    clock_t end = clock(); 
    
    double t = (double)(end - start) / CLOCKS_PER_SEC;
    printf("Insertion sort: case '%d' takes %lf seconds on vector of length %d\n", case_num, t, size);

    free(vec);
}