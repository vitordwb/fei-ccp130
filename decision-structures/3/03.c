#include <stdio.h>
#include <string.h>

int main(void) {
  float total, litro, desconto;
  char tipo;
  printf("Digite o tipo de combustivel (G para Gasolina ou A para Alcool):\n");
  scanf("%c", &tipo);
  printf("Digite a quantidade de litros:\n");
  scanf("%f", &litro);
  if (tipo=='A'||'a'){ 
    if (litro<=20){
      desconto=3;
      total=(litro*3.19)*0.97;
      printf("Valor com desconto de %.0f: %.2f\n", desconto,total);
    }
    else if (litro>20){
      desconto=5;
      total=(litro*3.19)*0.95;
      printf("Valor com desconto de %.0f: %.2f\n",desconto, total);
    }
    return 0;
  }
  else if (tipo=='G'||'g'){
    if (litro<=20){
      desconto=4;
      total=(litro*4.39)*0.96;
      printf("Valor com desconto de %.0f: %.2f\n", desconto, total);
    }
    else if (litro>20){
      desconto=6;
      total=(litro*4.39)*0.94;
      printf("Valor com desconto de %.0f: %.2f\n",desconto, total);
    }
    return 0;
  }
  return 0;
}