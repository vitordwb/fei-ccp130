#include <stdio.h>
#include <math.h>

float get_delta(float a, float b, float c) {
  return (b * b) - (4 * a * c);
}

int main(void) {
  float a, b, c;
  float x1, x2;
  printf("Digite os valores de 'a', 'b' e 'c' respectivamente separados por um espaco: \n");
  scanf("%f %f %f", &a, &b, &c);

  if(!a) {
    printf("A equacao nao e de Segundo grau, porque 'a=0'\n");
    return 0;
  }

  float delta = get_delta(a, b, c);
  if (delta < 0) {
    printf("Delta negativo (%.2f), portanto nao existem raizes reais.\n", delta);
  } else if (delta == 0) {
    x1 = (-b + sqrtf(delta)) / (2 * a);
    printf("Delta igual a 0 (%.2f), existe apenas uma raiz real: %.4f.", delta, x1);
  } else {
    x1 = (-b + sqrtf(delta)) / (2 * a);
    x2 = (-b - sqrt(delta))/(2 * a);
    printf("Delta positivo (%.2f), existem duas raizes reais: %.4f e %.4f.", delta, x1, x2);
  }
  
  return 0;
}