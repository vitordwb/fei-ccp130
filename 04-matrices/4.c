#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
  int m[10][3], personal_lowest[10], general_lowest[3], general_lowest_value[3];

  // srand(seed);

  for(int i = 0; i < 10; i++) {
    for(int j = 0; j < 3; j++) {
      int num = (rand() % 11);
      m[i][j] = num;
      if(i == 0 || num < general_lowest_value[j]) {
        general_lowest_value[j] = num;
        general_lowest[j] = 1;
      } else if(num == general_lowest_value[j]) {
        general_lowest[j]++;
      }
      if(j == 0 || num < personal_lowest[i]) {
        personal_lowest[i] = num;
      }
    }
  }

  for(int i = 0; i < 10; i++) {
    for(int j = 0; j < 3; j++) {
      printf("%2d ", m[i][j]);
    }
    printf("\n");
  }

  for(int i = 0; i < 10; i++) {
    printf("Aluno %d: Menor nota na prova %d com nota %d\n", i + 1, general_lowest[i] ,personal_lowest[i]);
  }

  for(int i = 0; i < 3; i++) {
    printf("%d aluno(s) ficou(aram) com %d na prova %d\n", general_lowest[i], general_lowest_value[i], i + 1);
  }

  return 0;
}