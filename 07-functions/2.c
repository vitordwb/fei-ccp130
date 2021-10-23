/*************************************************************************************************
 * Escreva uma função chamada triplo que recebe três números reais a, b e c passados por 
 * “referência". Sua função deve “retornar” em a, b e c o triplo de cada valor.

 * Atenção:  Submeta somente o código da função, sem o main.
 ************************************************************************************************/

#include <stdio.h>

void triplo(int*, int*, int*);


void triplo(int *a, int *b, int *c){
  *a *= 3;
  *b *= 3;
  *c *= 3;
}