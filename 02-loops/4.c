/*************************************************************************************************
 * AUTHOR: Vitor Watanabe
 * VISIT: https://github.com/vitordwb/fei-ccp130
 * 
 * Escreva um programa que leia um valor inteiro n (1 < n < 1000).
 * n*2 linhas de saída serão apresentadas na execução do programa, seguindo a lógica do exemplo
 * abaixo.
 * 
 * Exemplo:
 * Entrada: 5
 * 
 * Saída:
 *        1 1 1
 *        1 2 2
 *        2 4 8
 *        2 5 9
 *        3 9 27
 *        3 10 28
 *        4 16 64
 *        4 17 65
 *        5 25 125
 *        5 26 126
 *************************************************************************************************/

#include <stdio.h>
#include <math.h>

int main(void) {
  int num;

  printf("Digite um número: \n");
  scanf("%d", &num);

  for(int i = 1; i <= num; i++){
    printf("%d %d %d\n", i, i*i, i*i*i);
    printf("%d %d %d\n", i, i*i+1, i*i*i+1);
  }

  return 0;
}