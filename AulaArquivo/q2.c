//Modifique o programa anterior para adicionar seu sobrenome ao arquivo existente.

#include<stdio.h>

int main(){
    FILE *arq;
    char nome[100], sobrenome[100];

    printf("Digite o nome do arquivo: ");
    scanf("%s", nome);

    arq = fopen(nome, "a");

    printf("Digite seu sobrenome: ");
    scanf("%s", sobrenome);

    fprintf(arq, "Sobrenome: %s\n", sobrenome);

    fclose(arq);

    return 0;
}