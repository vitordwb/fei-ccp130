/*************************************************************************************************
 * Faça um programa que preencha um vetor com vinte números inteiros aleatórios (de 0 a 200).
 * Ordene, então, o vetor de forma crescente.
 * 
 * Para usar os números aleatórios, utilize a variável seed no lugar do time(NULL). A variável 
 * seed é uma variável que é declarada pelos testes no Moodle.
 * 
 * Use assim: srand(seed);
 * 
 * -------------------------------------------------------------------------------------------
 * | Test	           | Result                                                              |
 * | int seed = 100;   | 10 10 12 15 64 77 81 82 83 85 93 95 100 142 154 161 167 177 190 194 |
 * -------------------------------------------------------------------------------------------
 ************************************************************************************************/

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void){
    int seed = 100; //comentar essa linha quando colocar no moodle
    srand(seed);
    int arr[20];
    
    // gera uma array com numeros aleatorios
    for(int i=0; i<20; i++){
        arr[i] = rand() % 201;
    }

    // ordena a array em ordem crescente - "dumb sort" O(n^2)
    for(int i = 0; i < 20; i++) {
        for(int j = 0; j < 20; j++) {
            if(arr[i] < arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    // printa os numeros da array
    for(int i = 0; i < 20; i++){
        printf("%d ", arr[i]);
    }

    return 0;
}