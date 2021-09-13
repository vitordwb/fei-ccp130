/*************************************************************************************************
 * Desenvolva um programa que cria um vetor inteiro (vetor tradicional). Então, apresente cada um
 * dos elementos e seus respectivos endereços.
 ************************************************************************************************/

#include <stdio.h>

int main (void){
    int v[] = { 10, 5, 4, 2, 1};

    for(int i = 0; i < 5; i++) {
        printf("Elemento %d: Valor: %d - Endereço: %p\n", i+1, v[i], &v[i]);
    }

    return 0;
}
