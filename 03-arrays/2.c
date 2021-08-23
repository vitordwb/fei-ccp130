/*************************************************************************************************
 * Faça um programa que mostra o menor valor dentro do vetor
 * use T={1, 7 ,2 ,4}
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