/*************************************************************************************************
 * Faça um programa para receber um vetor de 10 elementos inteiros e apresentar todos os conteúdos 
 * que forem maiores que a soma de dois de seus antecessores
 ************************************************************************************************/

#include <stdio.h>

int main(void){
    int T[4] = {1, 7 ,2 ,4}; //comentar essa linha para colocar no moodle
    int lower = T[0];

    for(int i=0; i<4; i++){
        if(T[i]<lower)
            lower = T[i];
    }

    printf("O menor valor é %d", lower);

    return 0;
}