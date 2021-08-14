/*************************************************************************************************
 * AUTHOR: Vitor Watanabe
 * VISIT: https://github.com/vitordwb/fei-ccp130
 * 
 * Faça um programa para um caixa eletrônico. O programa deverá perguntar ao
 * usuário o valor do saque e depois informar quantas notas de cada valor serão
 * fornecidas. O programa sempre tenta dar a menor quantidade de notas possível.
 * As notas disponíveis são as de 1, 5, 10, 50, 100 reais. O valor mínimo de saque é
 * de 10 reais e o máximo de 1000 reais. O programa não deve se preocupar coma
 * a quantidade de notas existentes na máquina.
 * 
 * Exemplo 1: Para sacar a quantia de 256 reais, o programa fornece duas notas
 * de 100, uma de 50, uma de 5 e uma nota de 1;
 *
 * Exemplo 2: Para sacar a quantia de 399 reais, o programa fornece três notas
 * de 100, uma nota de 50, quatro notas de 10, uma nota de 5 e quatro notas
 * de 1.
 *************************************************************************************************/

#include <stdio.h>

int main(void) {
  int bills_qty[5], withdraw;
  printf("Digite quanto deseja sacar: ");
  scanf("%d", &withdraw);

  if(withdraw >= 10 && withdraw <= 1000) {
    int value = withdraw / 100;
    bills_qty[0] = value;
    int remainder = withdraw % 100;

    value = remainder / 50;
    bills_qty[1] = value;
    remainder %= 50;
    
    value = remainder / 10;
    bills_qty[2] = value;
    remainder %= 10;
    
    value = remainder / 5;
    bills_qty[3] = value;
    remainder %= 5;
    
    value = remainder / 1;
    bills_qty[4] = value;

    printf("%d nota(s) de 100\n%d nota(s) de 50\n%d nota(s) de 10\n%d nota(s) de 5\n%d nota(s) de 1\n", bills_qty[0], bills_qty[1], bills_qty[2], bills_qty[3], bills_qty[4]);
  } else {
    printf("Valor de saque não permitido...\n");
  }

  return 0;
}