#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
  int m[5][6], coord_line, coord_row, lowest, biggest;

  // srand(seed);

  for(int i = 0; i < 5; i++){
    for(int j = 0; j < 6; j++) {
      int num = (rand() % 1001);
      m[i][j] = num;
      if((j == 0 && i == 0)|| num < lowest) {
        lowest = num;
        coord_line = i;
        coord_row = j;
      }
    }
  }

  for(int i = 0; i < 5; i++) {
    for(int j = 0; j < 6; j++) {
      printf("%4d ", m[i][j]);
    }
    printf("\n");
  }

  for(int i = 0; i < 6; i++) {
    if(i == 0 || m[coord_line][i] > biggest) {
      biggest = m[coord_line][i];
      coord_row = i;
    }
  }

  printf("MINMAX=%d na linha %d coluna %d\n", biggest, coord_line, coord_row);

  return 0;
}