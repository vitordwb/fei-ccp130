// Escreva um programa em linguagem C que solicita ao usuário a quantidade
// de alunos de uma turma e aloca dinamicamente um vetor de notas (números reais).
// Depois de ler as notas, imprime a média aritmética.

// Obs: não deve ocorrer desperdício de memória; e, após ser utilizada, a memória
// deve ser liberada

#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int n = 0, *nums, sum = 0;
  
  printf("Digite quantos números deseja inserir: ");
  scanf("%d", &n);
  nums = (int*)calloc(n, sizeof(int));
  if(nums == NULL) {
    printf("Memória não alocada!");
    return 0;
  }
  
  for(int i = 0; i < n; i++){
    printf("Digite o %dº número: ", i+1);
    scanf("%d", &nums[i]);
    sum += nums[i];
  }

  printf("A soma dos números digitados é: %d\n", sum/n);

  free(nums);

  return 0;
}