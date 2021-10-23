/*************************************************************************************************
 * Construa uma estrutura aluno com nome, sobrenome, número de matrícula (RA) e curso. Receba do 
 * usuário as informações referentes à 5 alunos, armazene em um vetor dessa estrutura e imprima 
 * os dados na tela.
 ************************************************************************************************/

#include <stdio.h>
#include <stdlib.h>

struct aluno {
  char nome[50];
  char sobrenome[50];
  char curso[100];
  int matricula;
};

void fill_data(struct aluno[5], int);
void show_info(struct aluno*);

int main(void) {
  struct aluno alunos[5];
  puts("Digite os dados dos alunos:\n");
  for(int i = 0; i < 5; i++) {
    fill_data(&alunos[i], i);
  }
  puts("Imprimindo os alunos cadastrados:\n");
  show_info(alunos);
  return 0;
}

void fill_data(struct aluno *a, int idx) {
  char matricula[20];
  printf("Digite o nome do aluno %d: ", idx + 1);
  fgets(a->nome, 50, stdin);
  printf("Digite o sobrenome do aluno %d: ", idx + 1);
  fgets(a->sobrenome, 50, stdin);
  printf("Digite o curso do aluno %d: ", idx + 1);
  fgets(a->curso, 100, stdin);
  printf("Digite a matrícula do aluno %d: ", idx + 1);
  fgets(matricula, 20, stdin);
  a->matricula = atoi(matricula);
  printf("\n");
}

void show_info(struct aluno a[5]) {
  for(int i = 0; i < 5; i++) {
    printf("Aluno: %s %s", a[i].nome, a[i].sobrenome);
    printf("Curso: %s", a[i].curso);
    printf("Matrícula: %d", a[i].matricula);
    printf("\n");
  }
}
