/*************************************************************************************************
 * As temperaturas de uma cidade foram armazenadas em um vetor chamado temperatura. 
 * 
 * Exemplo: temperaturas = {-10, -8, 0, 1, 2, 5, -2, -4 }.
 * 
 * Faça um programa que imprime a menor e a maior temperatura, assim como a média.
 * 
 * Os valores do vetor temperaturas são fornecidos pelo programa do Moodle, faça o código sem 
 * declarar o vetor, apenas use esse vetor.
 ************************************************************************************************/

#include <stdio.h>

int main (void){
    int temperaturas[8] = {-10, -8, 0, 1, 2, 5, -2, -4 }; //comentar essa linha para colocar no moodle
    int higher = temperaturas[0], lower = temperaturas[0];
    float soma=0, media;

    for (int i=0; i<8; i++){
        if(temperaturas[i]<lower)
            lower = temperaturas[i];

        if (temperaturas[i]>higher)
            higher = temperaturas[i];

        soma += temperaturas[i];
    }

    media = soma/8;

    printf("O menor valor é %d\n", lower);
    printf("O Maior valor é %d\n", higher);
    printf("A média de temperaturas é %.1f\n", media);

    return 0;
}