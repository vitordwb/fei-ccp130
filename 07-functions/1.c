/*************************************************************************************************
 * Existem restrições para que uma pessoa possa doar sangue. Uma delas é relativa ao peso.
 * Mulheres tem que pesar no mínimo 50kg e homens no mínimo 60kg. Faça uma função para informar se
 * uma pessoa está ou não apta a doar sangue sabendo seu sexo e seu peso. 

 * O programa principal deve ler as entradas, acionar a função e exibir a resposta.
 ************************************************************************************************/

#include <stdio.h>
#include <stdbool.h>

bool can_donate(char, float);

int main(void) {
  char sex;
  float weight;
  printf("Digite seu sexo (m ou f):");
  scanf(" %c", &sex);
  printf("Digite seu peso em kg:");
  scanf("%f", &weight);

  if(can_donate(sex, weight)) {
    printf("Você pode doar sangue!\n");
  } else {
    printf("Você não pode doar sangue!\n");
  }
  return 0;
}

bool can_donate(char s, float w) {
  if((s == 'm' && w >= 60) || (s == 'f' && w >= 50)) {
    return true;
  }
  return false;
}