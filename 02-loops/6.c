/*************************************************************************************************
 * AUTHOR: Vitor Watanabe
 * VISIT: https://github.com/vitordwb/fei-ccp130
 * 
 * Faça um programa que receba um número inteiro maior que 1 e verifique se o número fornecido é
 * primo ou não. Mostre uma mensagem de número primo ou de número não primo. Um número é primo
 * quando é divisível apenas pelo número um e por ele mesmo.
 *************************************************************************************************/

#include <stdio.h>

int main() {
  int n, i, flag = 0;
  printf("Digite um número inteiro:\n");
  scanf("%d", &n);

  for (i = 2; i <= n / 2; ++i) {
    // condition for non-prime
    if (n % i == 0) {
      flag = 1;
      break;
    }
  }

  if (n == 1) {
    printf("1 is neither prime nor composite.");
  } 
  else {
    if (flag == 0)
      printf("O número %d é primo.", n);
    else
      printf("O número %d não é primo.", n);
  }

  return 0;
}