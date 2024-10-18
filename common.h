#ifndef __COMMON__
#define __COMMON__

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <time.h>

/* common.c */
int mrand(int);
void setRandom();

int *vector( int );
void makeVec(int*, int, int);

void swap(int*, int*);
void printArr(int*, int );

/* test.c */
void test_bubble(int*, int, int);
void test_selection(int*, int, int);
void test_insertion(int*, int, int);

/* bubble, insertion, selection */
void bubSort(int* , int);
void selSort(int* , int);
void insSort(int* , int);

#endif