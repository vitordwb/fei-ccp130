/*************************************************************************************************
 * AUTHOR: Vitor Watanabe
 * VISIT: https://github.com/vitordwb/fei-ccp130
 * 
 * Um posto está vendendo combustíveis com a seguinte tabela de descontos:
 * a. Álcool:
 *    i. até 20 litros, desconto de 3% por litro
 *    ii. acima de 20 litros, desconto de 5% por litro
 * b. Gasolina:
 *    i. até 20 litros, desconto de 4% por litro
 *    ii. acima de 20 litros, desconto de 6% por litro
 * 
 * Escreva um programa que solicita o número de litros vendidos e o tipo de combustível (álcool ou gasolina.
 * Então, calcule e imprima o valor a ser pago pelo cliente sabendo-se que o preço do litro da gasolina é
 * R$ 4,39 e, do álcool, R$ 3,19.
 *************************************************************************************************/

#include <stdio.h>
#include <math.h>

float gas(float liters, float gas_price) {
  if (liters <= 20) {
    float descount = 4;
    float total_price = (liters*gas_price*(100-descount)/100);
    printf("Valor com desconto de %.0f%%: %.2f\n",descount,  total_price);
  } else {
    float descount = 6;
    float total_price = (liters*gas_price*(100-descount)/100);
    printf("Valor com desconto de %.0f%%: %.2f\n",descount,  total_price);
  }
  return 0;
}

float alcohol(float liters, float alcohol_price) {
  if (liters <= 20) {
    float descount = 3;
    float total_price = (liters*alcohol_price*(100-descount)/100);
    printf("Valor com desconto de %.0f%%: %.2f\n",descount,  total_price);
  } else {
    float descount = 5;
    float total_price = (liters*alcohol_price*(100-descount)/100);
    printf("Valor com desconto de %.0f%%: %.2f\n",descount,  total_price);
  }
  return 0;
}


int main(void) {
  float liters, gas_price = 4.39, alcohol_price = 3.19;
  char fuel_type;

  printf("Digite o tipo de combustivel (G para Gasolina ou A para Alcool):\n");
  scanf("%s", &fuel_type);
  printf("Digite a quantidade de litros:\n");
  scanf("%f", &liters);

  switch (fuel_type)
  {
  case 'G':
  case 'g':
    gas(liters, gas_price);
    break;
  
  case 'A':
  case 'a':
    alcohol(liters, alcohol_price);
    break;

  default:
    printf("Codigo invalido\n");
    break;
  }

  return 0;
}
