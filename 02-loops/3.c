/*************************************************************************************************
 * AUTHOR: Vitor Watanabe
 * VISIT: https://github.com/vitordwb/fei-ccp130
 * 
 * Escreva um programa que calcule o perímetro de um polígono. Comece recebendo do usuário os
 * valores de x e y para o primeiro ponto do polígono. Em seguida, continue lendo pares de valores
 * x e y até que o usuário insira -99 para a coordenada x. Cada vez que você lê
 * uma coordenada adicional, você deve calcular a distância até o ponto anterior e adicioná-la ao
 * perímetro. Quando o número -99 for inserido para a coordenada x, seu programa deve adicionar a
 * distância do último ponto de volta ao primeiro ponto. Em seguida, ele deve exibir o perímetro
 * total.
 *************************************************************************************************/

#include <stdio.h>
#include <math.h>

int main(void) {
  int x, y, first_x, first_y, total;
  float distance, perimeter=0;

  while(x != -99) {
    printf("Digite o x da coordenada: ");
    scanf("%d", &x);
    if (x == -99)
      break;

    printf("Digite o y da coordenada: ");
    scanf("%d", &y);

    first_x = x;
    first_y = y;


  }

  printf("Perímetro total de %.2f", total);

  return 0;
}
