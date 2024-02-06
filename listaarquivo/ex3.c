//Escreva um programa que leia um arquivo de texto e imprima seu conteúdo na tela.

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    FILE *fp;
    char nome[30];
    if ((fp = fopen("arquivo1.txt", "r")) == NULL)
    {
        printf("Erro na abertura do arquivo.\n");
        exit(1);
    }
    fscanf(fp, "%s", nome);
    printf("%s\n", nome);
    fclose(fp);
    return 0;
}