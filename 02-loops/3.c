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
#include <stdbool.h>
#include <math.h>

int main(void) {
  int xcoord = 0, ycoord = 0, fst_xcoord = 0, fst_ycoord = 0, lst_xcoord = 0, lst_ycoord = 0;
  bool fst_iter = true;
  float distance = 0, perimeter = 0;
  do {
    printf("Digite o x da coordenada:\n");
    scanf("%d", &xcoord);

    if(xcoord == -99) {
      xcoord = lst_xcoord;
      ycoord = lst_ycoord;
      break;
    }

    printf("Digite o y da coordenada:\n");
    scanf("%d", &ycoord);

    if(fst_iter) {
      fst_xcoord = xcoord;
      fst_ycoord = ycoord;
      fst_iter = false;
    }

    distance = sqrt(pow(xcoord - lst_xcoord, 2) + pow(ycoord - lst_ycoord, 2));
    // printf("Distância %f\n", distance);
    perimeter += distance;

    lst_xcoord = xcoord;
    lst_ycoord = ycoord;
    // printf("lst Y: %d, lst X: %d\n", lst_ycoord, lst_xcoord);
  } while(xcoord != -99);

  if(perimeter) {
    distance = sqrt(pow(xcoord - fst_xcoord, 2) + pow(ycoord - fst_ycoord, 2));
    perimeter += distance;
    printf("Perímetro total de %.2f\n", perimeter);
  }

  return 0;
}