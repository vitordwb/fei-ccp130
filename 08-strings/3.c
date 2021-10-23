/*************************************************************************************************
 * Escreva um programa que leia uma série de strings e imprima apenas aquelas que começam com a 
 * letra "b". O programa deve ler strings até que uma linha em branco (nada) seja digitado.
 ************************************************************************************************/

#include <stdio.h>
#include <string.h>

int main() {
  char str[100];
  while(1) {
    puts("Digite uma palavra ou enter para sair: ");
    fgets(str, 100, stdin);
    if(!strcmp(str, "\n")) {
      break;
    }
    if((int) str[0] == 66 || (int) str[0] == 98) {
      printf("Palavra que começa com 'b' ou 'B': %s", str);
    }
  }
}