/*************************************************************************************************
 * Escreva um programa que recebe quatro strings (sem utilizar o scanf()) que representam números 
 * inteiros, converte as strings em inteiros, soma os valores e imprime o total dos quatro valores.

 * Fazer com vetores de ponteiros.
 ************************************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char *s1 = malloc(sizeof(char)*10);
    char *s2 = malloc(sizeof(char)*10);
    char *s3 = malloc(sizeof(char)*10);
    char *s4 = malloc(sizeof(char)*10);
    int i1, i2, i3, i4;

    printf("Digite os números:\n");
    fgets(s1, 10, stdin);
    fgets(s2, 10, stdin);
    fgets(s3, 10, stdin);
    fgets(s4, 10, stdin);
    i1 = atoi(s1);
    i2 = atoi(s2);
    i3 = atoi(s3);
    i4 = atoi(s4);
    printf("Soma = %d", i1+i2+i3+i4);
    return 0;
}