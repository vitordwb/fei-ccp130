#include "mtrx.h"
#include <stdio.h>

int bellow_main_diagonal_sum(int mtrx[SIZE][SIZE]) {
  float sum = 0;
  float mean;
  for(int i = 0; i < SIZE; i++) {
    for(int j = 0; j < SIZE; j++) {
      if(j < i) {
        //printf("IDX (%d, %d)\n", i, j);
        //printf("EL: %d\n", mtrx[i][j]);
        sum += mtrx[i][j];
      }
    }
  }

  //print matrix
  for(int i=0;i<12;i++){
    for(int j=0;j<12;j++){
      printf("%d ",mtrx[i][j]);
    }
    printf("\n");
  }

  mean = sum/SIZE;
  printf("Soma: %.2f\n", sum);
  printf("Média: %.2f\n", mean);
  return 0;
}