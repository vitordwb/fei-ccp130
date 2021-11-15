/***********************************************************************************************************
 * Faça uma função que receba como parâmetro um vetor A com  dez números reais e retorne esses números 
 * ordenados de forma crescente.
**********************************************************************************************************/

#include <stdio.h>
#include "sort.h"

int main(void) {
  //int arr[10] = {2, 3, 1, 5, 4, 6, 9, 7, 8, 10};
  int arr[10];
  puts("Entre 10 valores:\n");
  for(int i=0; i<10; i++){
    scanf("%d",&arr[i]);
  }

  sort_array(arr, 10);
  puts("Sorted Array:");
  for(int i = 0; i < 10; i++) {
    printf("\t %d", arr[i]);
  }
  printf("\n");
  return 0;
}