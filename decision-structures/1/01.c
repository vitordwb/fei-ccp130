/*************************************************************************************************
 * AUTHOR: Vitor Watanabe
 * VISIT: https://github.com/vitordwb/fei-ccp130
 * 
 * 
 * Leia 2 valores reais (x e y), que devem representar as coordenadas de um ponto em um plano. Então, 
 * determine a que quadrante (Q1, Q2, Q3 ou Q4) o ponto pertence ou se está sobre um dos eixos cartesianos 
 * ou na origem (x = y = 0).
 *************************************************************************************************/

#include <stdio.h>
#include <locale.h> //necessário para usar setlocale

int main(void) {
  setlocale(LC_ALL, "Portuguese"); //habilita a acentuação para o português

  int x, y;
  printf("Digite x e y:\n");
  scanf("%d %d", &x, &y);

  if(x==0 && y==0)
    printf("Esta na origem");
  else if (x>0 && y>0)
    printf("Q1");
  else if (x<0 && y>0)
    printf("Q2");
  else if (x<0 && y<0)
    printf("Q3");
  else if (x>0 && y<0)
    printf("Q4");
}
