//Desenvolva um programa que conte o número de linhas em um arquivo.
#include <stdio.h>
#include <stdlib.h>

int main(void){
    FILE *arq;
    char nome[100], c;
    int linhas = 0;

    printf("Digite o nome do arquivo: ");
    scanf("%s", nome);

    arq = fopen(nome, "r");

    if(arq == NULL){
        printf("Erro ao abrir o arquivo\n");
        exit(1);
    }

    while((c = fgetc(arq)) != EOF){
        if(c == '\n'){
            linhas++;
        }
    }

    printf("O arquivo tem %d linhas\n", linhas);

    fclose(arq);

    return 0;
}