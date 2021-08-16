#include <stdio.h>

int main(void) {
    int num, i=0, sum=0;
    do {
        printf("Digite um número:\n");
        scanf("%d", &num);
        sum = sum + num;
        i++;
        
    }while(num != 0);
    printf("Você digitou %d números\n", i-1);
    printf("O somatório dos números é %d\n", sum);
    printf("Média = %d", sum/(i-1));
    
    return 0;
}