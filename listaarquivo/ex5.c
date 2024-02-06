//Escreva um programa que conte o número de palavras em um arquivo de texto.

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    FILE *fp;
    char nome[30];
    int count = 0;
    if ((fp = fopen("arquivo1.txt", "r")) == NULL)
    {
        printf("Erro na abertura do arquivo.\n");
        exit(1);
    }
    while (fscanf(fp, "%s", nome) != EOF)
    {
        count++;
    }
    printf("%d\n", count);
    fclose(fp);
    return 0;
}