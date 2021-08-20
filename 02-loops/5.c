/*************************************************************************************************
 * AUTHOR: Vitor Watanabe
 * VISIT: https://github.com/vitordwb/fei-ccp130
 * 
 * A seguinte sequência de números 0, 1, 1, 2, 3, 5, 8, 13, 21, ... é conhecida como série de
 * Fibonacci. Nesta sequência, cada número, depois dos 2 primeiros, é igual à soma dos 2
 * anteriores. Escreva um algoritmo que leia um inteiro N (N < 46) e mostre os N primeiros números
 * dessa série.
 * Saída: Os valores devem ser mostrados na mesma linha, separados por um espaço em branco. Não deve
 * haver espaço após o último valor.
 * 
 * EXEMPLO:
 * Entrada: 5
 * 
 * Saída: 0 1 1 2 3
 *************************************************************************************************/

#include <stdio.h>

int main(void) {

  int n1=0, n2=1, res;
  int next_num = n1 + n2;

  printf("Digite um número:\n");
  scanf("%d", &res);

  printf("%d %d", n1, n2); // print the first two numbers n1 and n2

  for(int i=3; i <= res; i++){
    // 0 1 1 2 3 5 8 13 21 ...
    printf(" %d", next_num);
    n1 = n2;
    n2 =  next_num;
    next_num = n1 + n2;
  }

  return 0;
}