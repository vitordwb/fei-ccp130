/*************************************************************************************************
 * Crie um programa que deve armazenar uma palavra com 5 letras e apresentá-la, através do uso de
 * ponteiros char. Faça um ponteiro por letra.
 * 
 * |-----------------------------------------------------------------------------------------------------------------|
 * | Input | Result                                                                                                  |
 * |-----------------------------------------------------------------------------------------------------------------|
 * | f     | Digite a 1ª letra: Digite a 2ª letra: Digite a 3ª letra: Digite a 4ª letra: Digite a 5ª letra: Letra: f |
 * | e     | Letra: e                                                                                                |
 * | i     | Letra: i                                                                                                |
 * | =     | Letra: =                                                                                                |
 * | =     | Letra: =                                                                                                |
 * |-----------------------------------------------------------------------------------------------------------------|
 * 
 ************************************************************************************************/

#include <stdio.h>

int main(void) {
  char a, b, c, d, e, *pA = &a, *pB = &b, *pC = &c, *pD = &d, *pE = &e;

  printf("Digite a 1ª letra: ");
  scanf(" %c", &a);
  printf("Digite a 2ª letra: ");
  scanf(" %c", &b);
  printf("Digite a 3ª letra: ");
  scanf(" %c", &c);
  printf("Digite a 4ª letra: ");
  scanf(" %c", &d);
  printf("Digite a 5ª letra: ");
  scanf(" %c", &e);

  printf("Letra: %c\n", *pA);
  printf("Letra: %c\n", *pB);
  printf("Letra: %c\n", *pC);
  printf("Letra: %c\n", *pD);
  printf("Letra: %c\n", *pE);
  return 0;
}
