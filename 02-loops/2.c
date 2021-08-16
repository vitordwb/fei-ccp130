/*************************************************************************************************
 * AUTHOR: Vitor Watanabe
 * VISIT: https://github.com/vitordwb/fei-ccp130
 * 
 * Um zoológico em particular determina o preço da entrada com base na idade do visitante. Os
 * visitantes com 2 anos de idade ou menos têm entrada gratuita. Crianças entre 3 e 12 anos pagam
 * R$ 14,00. Idosos com 65 anos ou mais pagam R$ 18,00. A entrada para todos os outros visitantes
 * custa R$ 23,00.
 * Crie um programa que comece lendo as idades de todos os visitantes de um mesmo grupo, sendo uma
 * idade informada em cada linha. O usuário digitará 0 (zero) para indicar que não há mais pessoas
 * no grupo. Em seguida, seu programa deve exibir o custo total para o grupo. O custo deve ser exibido
 * usando duas casas decimais.
 *************************************************************************************************/

#include <stdio.h>

int main(void) {
  int age;
  float total = 0;

  do {
    printf("Digite a idade do visitante:\n");
    scanf("%d", &age);
    if (age <= 2)
      total += 0;
    else if (age <= 12)
      total += 14;
    else if (age <= 64)
      total += 23;
    else
      total += 18;

  } while (age);
  printf("O Valor do grupo é %.2f", total);

  return 0;
}