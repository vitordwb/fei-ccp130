/*************************************************************************************************
 * Escreva um programa que recebe uma frase e um caractere de pesquisa e determina o total de 
 * ocorrências do caractere na frase.
 ************************************************************************************************/

#include <stdio.h>
#include <string.h>

int main() {
  char str[100], letra;
  int contador = 0;
  puts("Digite uma frase:");
  fgets(str, 100, stdin);
  puts("Digite um caractere:");
  scanf("%c", &letra);

  int i = 0;
  while(str[i] != '\0' && str[i] != '\n') {
    if(str[i] == letra) {
      contador++;
    }
    i++;
  }
  printf("O caractere %c foi encontrado %d vezes", letra, contador);
  return 0;
}