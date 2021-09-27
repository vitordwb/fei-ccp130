// Escreva um programa em C para alocar memória dinamicamente para
// armazenar N números inteiros inseridos pelo usuário e, em seguida,
// exiba a soma de todos os N números.

// Obs: não deve ocorrer desperdício de memória; e, após ser utilizada,
// a memória deve ser liberada

#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int *i = malloc(sizeof(int));
  float *f = malloc(sizeof(float));
  char *c = malloc(sizeof(char));

  printf("Digite um número inteiro: ");
  scanf("%d", i);
  printf("Digite um número real: ");
  scanf("%f", f);
  printf("Digite um caractere: ");
  scanf(" %c", c);

  printf("O inteiro: %d\n", *i);
  printf("O real: %f\n", *f);
  printf("O caractere: %c\n", *c);

  free(i);
  free(f);
  free(c);

  return 0;
}