//Escreva um programa em C para criar um arquivo de texto e escrever seu nome nele.

#include<stdio.h>

int main(){
    FILE *arq;
    char nome[100];

    printf("Digite o nome do arquivo: ");
    scanf("%s", nome);

    arq = fopen(nome, "w");

    fprintf(arq, "Nome: %s\n", nome);

    fclose(arq);

    return 0;
}