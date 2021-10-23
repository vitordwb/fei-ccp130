/*************************************************************************************************
 * Uma data é considerada mágica quando o dia multiplicado pelo mês é igual ao ano de dois dígitos. 
 * Por exemplo, 10 de junho de 1960 é uma data mágica porque junho é o sexto mês e 6 vezes 10 é 60, 
 * o que equivale ao ano de dois dígitos. Escreva uma função que determine se uma data é ou não uma 
 * data mágica. Use sua função em um programa principal que deve encontrar e exibir todas as datas 
 * mágicas do século XX.

 * O padrão da mensagem de saída é:
 * A data 1/1/1901 é mágica
 * A data 2/1/1902 é mágica
 ************************************************************************************************/

#include <stdio.h>
#include <stdbool.h> 

bool dataMagica(int a, int b, int c) {
  int ano = c % 100;
  if(a * b == ano) {
    return true;
  }
  return false;
}

bool ano_bissexto(int ano) {
  if((ano % 400 == 0) ||((ano % 4 == 0) && (ano % 100 != 0))) {
    return true;
  }
  return false;
}

int main(void) {
  for(int i = 1900; i < 2000; i++) {
    bool leap = ano_bissexto(i);
    for(int j = 1; j < 13; j++) {
      for(int k = 1; k < 32; k++) {
        if((leap && j == 2 && k == 30) || (!leap && j == 2 && k == 29) || (j == 4 && k == 31) || (j == 6 && k == 31) || (j == 9 && k == 31) || (j == 11 && k == 31)) {
          break;
        }
        if(dataMagica(k, j, i)){
          printf("A data %d/%d/%d é mágica\n", k, j, i);
        }
      }
    }
  }

  return 0;
}

