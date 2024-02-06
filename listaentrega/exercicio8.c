#include <stdio.h>
// Crie um vetor para catalogar os livros que você leu no ano, 
// armazenando o título e a avaliação.

int main(void) {
  int titulo, ano, quantidade, a=1;
  char autor [50][6]= {'0', '0', '0', '0', '0'}; // '0' é o mesmo que '\0
  char livros [50][6]= {0, 0, 0, 0, 0};
  char avaliacao [50][10]= { "Excelente" , "Bom",  "Regular", "Ruim", "Péssimo"};
  printf("\n\n\nQuantos livros você leu esse ano?\n");
  scanf("%d", &quantidade);
  printf("Quais os titulos dos livros?\n");
  scanf("%s", &livros);
  printf("Quais as avaliacoes do livro?\n");
  printf("0- Excelente, 1- Bom, 2- Regular, 3- Ruim, 4- Péssimo\n");
  scanf("%d", &a);
  printf("Você leu %d livro(s) esse ano.\n", quantidade);
  printf("O livro é: %s\n", livros);
  printf("A avaliacao do livro é: %s\n", avaliacao[a]);
  return 0;
}