/*************************************************************************************************
 * Escreva uma função chamada exponencial que recebe um valor n passado por valor e dois inteiros 
 * b e k passados por “referência". Sua função deve retornar em b e k valores tal que b^k = n e b 
 * seja o menor possível.

 * Atenção: Submeta somente o código da função, sem o main.
 ************************************************************************************************/

#include <stdio.h>
#include <math.h>

void exponencial(int n, int *b, int *k) {
  if(n == 1) {
    *b = 1;
    *k = 0;
  } else if(n == 0) {
    *b = 0;
    *k = 1;
  } else {
    // ---- Minimum b for a given n ----
    // If n is divisible by some number (n % i = 0) means that n can be written multiplying i by itself k times
    for(int i = 2; i <= n; i++) {
      int count = 0, rem = n;
      while(rem >= i && rem % i == 0){
        rem /= i;
        count++;
      }
      if(pow(i, count) == n) {
        *b = i;
        *k = count;
        break;
      }
    }
  }
}