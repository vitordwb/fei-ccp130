/*************************************************************************************************
 * Faça um programa que preencha um vetor com dez números inteiros aleatórios (de 0 a 100). 
 * Calcule e mostre os números superiores a 50 e suas respectivas posições. O programa deverá 
 * mostrar uma mensagem caso não exista nenhum número nessa condição.
 * 
 * Para usar os números aleatórios, utilize a variável seed no lugar do time(NULL). A variável 
 * seed é uma variável que é declarada pelos testes no Moodle.
 * 
 * Use assim: srand(seed);
 * 
 * For example:
 * ------------------------------------------------------------------------------
 * | Test              | Result                                                 |
 * | int seed = 100;   | Há 6 números maiores que 50 nas posições: 1 2 3 4 5 8  |
 * ------------------------------------------------------------------------------

 ************************************************************************************************/

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void){
    int seed = 100; //comentar essa linha quando colocar no moodle
    srand(seed);
    int n = 0;
    int arr[10], index[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, count=0;

    for(int i=0; i<10; i++){
        arr[i] = rand() % 101;
        
        if(arr[i]>50){
            index[n] = i;
            n++;
            count++;
        }
    }

    // printa a quantidade total de numeros maiores que 50
    printf("Há %d números maiores que 50 nas posições:", count);

    // printa as posicoes
    for(int i=0; i<count; i++){
        printf(" %d", index[i]);
    }

    return 0;
}
