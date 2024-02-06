//Escreva um programa que leia um arquivo de texto e imprima seu conteúdo na tela.

#include<stdio.h>

int main(){
    FILE *arq;
    char nome[100], c;

    printf("Digite o nome do arquivo: ");
    scanf("%s", nome);

    arq = fopen(nome, "r");

    while((c = fgetc(arq)) != EOF){
        printf("%c", c);
    }

    fclose(arq);

    return 0;
}