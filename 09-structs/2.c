/*************************************************************************************************
 * Faça um programa que cria uma struct livro, que contém os campos nome, editora, isbn, ano de 
 * edição e número de páginas. Faça um procedimento para armazenar, então, 5 livros em um vetor. 
 * Faça outro procedimento para exibir a média do número de páginas dos livros e o nome do livro 
 * mais antigo e do livro mais novo.

 * Use os vetores e matrizes disponibilizados pelo Moodle.
 ************************************************************************************************/

# include <stdio.h>
#include <string.h>

struct book {
  char name[50];
  char pub_comp[50];
  int isbn;
  int edition_year;
  int paginas;
};

void fill_data(struct book*);
void display_data(struct book*);

int main(void) {
  struct book books[5];
  fill_data(books);
  display_data(books);
  return 0;
}

void fill_data(struct book books[]) {
  // comentar a linha 33 até a 37 para passar para o moodle
  char nomes[5][50] = {"Livro01", "Livro02", "Livro03", "Livro04", "Livro05"};
  char editoras[5][50] = {"Comp01", "Comp02", "Comp03", "Comp04", "Comp05"};
  int isbns[5] = {123, 456, 789, 101, 111};
  int anos[5] = {2000, 2001, 2002, 2003, 2004};
  int paginas[5] = {100, 200, 300, 400, 500};
  // comentar até aqui

  for(int i = 0; i < 5; i++){
    strcpy(books[i].name, nomes[i]);
    strcpy(books[i].pub_comp, editoras[i]);
    books[i].isbn = isbns[i];
    books[i].edition_year = anos[i];
    books[i].paginas = paginas[i];
  }
}

void display_data(struct book books[]) {
  float sum = 0;
  struct book newest = books[0], oldest = books[0];
  for(int i = 0; i < 5; i++){
    if(books[i].edition_year > newest.edition_year) {
      newest = books[i];
    } else if(books[i].edition_year < oldest.edition_year) {
      oldest = books[i];
    }
    sum += books[i].paginas;
  }
  printf("Média das páginas dos livros cadastrados: %.0f\n", sum / 5);
  printf("Livro mais novo: %s (publicado em %d)\n", newest.name, newest.edition_year);
  printf("Livro mais velho: %s (publicado em %d)\n", oldest.name, oldest.edition_year);
}