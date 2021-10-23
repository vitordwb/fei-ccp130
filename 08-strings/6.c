/*************************************************************************************************
 * Leitor de datas: Crie um procedimento em C que receba uma string data e três inteiros por 
 * referência: dia, mês e ano. Este procedimento deverá escrever nas variáveis dia, mês e ano seus 
 * respectivos valores obtidos a partir da data representada na string. 

 * Considere que a string data possa ter os seguintes formatos: 

 * 20/04/2021
 * 20-04-2021
 * 20-4-2021
 * 20.4.2021
 * 20/4/21
 ************************************************************************************************/

#include <stdio.h>
#include <string.h>

void separaDatas(char*, int*, int*, int*);

int main() {
  char date[15];
  int day, month, year;
  puts("Digite uma data:");
  scanf("%s", date);
  separaDatas(date, &day, &month, &year);
  printf("Dia: %d, Mês: %d, Ano: %d\n", day, month, year);
  return 0;
}

void separaDatas(char *date, int *dia, int *mes, int *ano) {
  sscanf(date, "%d%*c%d%*c%d", dia, mes, ano);
}