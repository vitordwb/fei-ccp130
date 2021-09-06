#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
  int m[8][8], main_diagonal = 0;
  
  srand(time(0));

  for(int i = 0; i < 8; i++) {
    for(int j = 0; j < 8; j++) {
        int num = (rand() % 101);
        m[i][j] = num;
    }
  }

  for(int i = 0; i < 8; i++) {
    for(int j = 0; j < 8; j++) {
      printf("%3d ", m[i][j]);
      if(i == j) {
        main_diagonal += m[i][j];
      }
    }
    printf("\n");
  }

  printf("A soma da diagonal principal é %d\n", main_diagonal);

  return 0;
}