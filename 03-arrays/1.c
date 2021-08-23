/*************************************************************************************************
 * Faça um programa para receber um vetor de 10 elementos inteiros e apresentar todos os conteúdos 
 * que forem maiores que a soma de dois de seus antecessores
 ************************************************************************************************/

#include <stdio.h>

int main(void) {
    int arr[10];

    for(int i=0; i<10; i++){
        // printf("Digite o valor do vetor: ");
        scanf("%d", &arr[i]);
    }

    printf("Abaixo estão os números que atendem a condição\n");
    for(int i=2; i<10; i++){
        if(arr[i] > arr[i-1]+arr[i-2]){
            printf("%d\n", arr[i]);
        }
    }

    return 0;
}