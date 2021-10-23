/*************************************************************************************************
 * Crie um programa que lê 4 pontos (struct ponto) num plano cartesiano, e os armazena na 
 * estrutura retângulo (struct retangulo). Exiba, então, a área e o perímetro do retângulo.
 ************************************************************************************************/

#include <stdio.h>
#include <math.h>

struct point {
  int x;
  int y;
};

struct rectangle {
  struct point points[4];
};

float calc_perimeter(struct rectangle);
float calc_area(struct rectangle);

int main(void) {
  struct rectangle rect;



  for(int i = 0; i < 4; i++) {
    printf("Digite o x do ponto %d: ", i);
    scanf("%d", &rect.points[i].x);
    // rect.points[i].x = coordinates[i][0];
    printf("Digite o y do ponto %d: ", i);
    scanf("%d", &rect.points[i].y);
    // rect.points[i].y = coordinates[i][1];
  }
  printf("\n");
  printf("Perímetro: %.2f\n", calc_perimeter(rect));
  printf("Área: %.2f\n", calc_area(rect));
  return 0;
}

float calc_perimeter(struct rectangle r) {
  float height = sqrt(pow((r.points[1].x - r.points[0].x), 2) + pow((r.points[1].y - r.points[0].y), 2));
  float width = sqrt(pow((r.points[3].x - r.points[0].x), 2) + pow((r.points[3].y - r.points[0].y), 2));
  return (height * 2) + (width * 2);
}

float calc_area(struct rectangle r) {
  float height = sqrt(pow((r.points[1].x - r.points[0].x), 2) + pow((r.points[1].y - r.points[0].y), 2));
  float width = sqrt(pow((r.points[3].x - r.points[0].x), 2) + pow((r.points[3].y - r.points[0].y), 2));
  return height * width;
}
