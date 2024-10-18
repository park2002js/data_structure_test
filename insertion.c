#include "common.h"

void insSort(int* a, int size){


    int i, k, temp;

    for(i = 1; i<size; i++){ // k 번째
        temp = a[i];
        k = i - 1;
        while( k>=0 && a[k] > temp ){
            a[k+1] = a[k];   // swap 함수를 쓰면 10000개 기준 0.3초 더 늘어남
            k--;
        }
        a[k+1] = temp;
    }


    // for(i = 1; i<size; i++){ // k 번째

    //     for(k = i; k>0 && (a[k-1] > a[k]); k--)
    //     {
    //         swap(&a[k-1], &a[k]);
    //         /* k-1 번째 값과 k번째 값을 비교, k 번째 값보다 k-1 번째 값이 더 크면 교환
    //         k 번째 값보다 처음으로 작은 값이 나왔을 경우, 혹은 k-1=0에 다다랐을 경우 교환 반복 종료 */
    //     }
    // }

    
    // for(i=1; i<size;i++){ // k번째

    //     for(int j=0; j < i; j++){ // 1~k-1 번째 값들

    //         if( a[i] < a[j] ){  // k번째 값보다 처음으로 큰 값이 나왔는가?

    //             temp = a[i]; // k 번째 값 임시 저장               
    //             for(int k=i; k > j; k--){ // 뒤에서부터 뒤로 한칸 씩 이동
    //                 a[k] = a[k-1];
    //             }
    //             a[j] = temp; // 임시 저장한 값을 삽입하고자 한 인덱스에 삽입 <- 그래서 뒤로 한칸 씩 이동
            
    //             break; // k 번째 값을 제자리에 위치시켰으므로 더이상 1~ k-1의 값을 확인할 필요가 없음
    //         }     
    //     }
    // }
}