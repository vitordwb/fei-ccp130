#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
  int A[10][5], tA[5][10];

  srand(time(0)); // trocar time(0) por seed quando colocar no moodle

  for(int i = 0; i < 10; i++){
    for(int j = 0; j < 5; j++){
      int num = (rand() % 101);
      A[i][j] = num;
      tA[j][i] = num;
    }
  }

  for(int i = 0; i < 10; i++) {
    for(int j = 0; j < 5; j++) {
      printf("%3d ", A[i][j]);
    }
    printf("\n");
  }

  printf("\n");
  for(int i = 0; i < 5; i++) {
    for(int j = 0; j < 10; j++) {
      printf("%3d ", tA[i][j]);
    }
    printf("\n");
  }

  return 0;
}