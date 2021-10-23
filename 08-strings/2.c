/*************************************************************************************************
 * Escreva um programa que recebe uma linha de texto no vetor de char s[100]. Produza a linha em 
 * letras maiúsculas e em letras minúsculas.
 ************************************************************************************************/

#include <stdio.h>

// The 'string.h' lib has some problems depending of the compiler version,
// functions such 'strupr' and 'strlwr' are not supported,
// that's why I made my own version of those functions.
char* strupper(char*);
char* strlower(char*);

int main(void) {
  char s[100];
  puts("Digite uma frase...");
  fgets(s, 100, stdin);
  printf("Frase em maiúsculo: %s\n", strupper(s));
  printf("Frase em minúsculo: %s\n", strlower(s));
  return 0;
}

char* strupper(char *str) {
  int i = 0;
  while(str[i] != '\0') {
    if((int) str[i] > 96 && (int) str[i] < 123) {
      str[i] -= 32;
    }
    i++;
  }
  return str;
}

char* strlower(char *str) {
  int i = 0;
  while(str[i] != '\0') {
    if((int) str[i] > 64 && (int) str[i] < 91) {
      str[i] += 32;
    }
    i++;
  }
  return str;
}