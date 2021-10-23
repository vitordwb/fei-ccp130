/*************************************************************************************************
 * Escreva uma função que calcula o quociente e o resto da divisão inteira entre dois números.
 * Utilize apenas as operações de soma e subtração para calcular o resultado. Dica: utilize uma
 * estrutura de repetição para isso. 

 * Faça um programa principal que recebe o dividendo e o divisor do usuário e, depois de chamar a
 * função, exibe o quociente e o resto
 ************************************************************************************************/

#include <stdio.h>

void divide(int, int);

int main(void) {
  int divisor, dividendo;
  printf("Digite o dividendo: ");
  scanf("%d", &dividendo);
  printf("Digite o divisor: ");
  scanf("%d", &divisor);
  divide(dividendo, divisor);

  return 0;
}

void divide(int a, int b) {
  int quociente = 0, resto = a;
  while(resto >= b) {
    resto -= b;
    quociente++;
  }
  printf("O quociente é %d com resto %d\n", quociente, resto);
}