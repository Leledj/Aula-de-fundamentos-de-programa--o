//Escreva um programa em C para criar um arquivo de texto e escrever seu nome nele.

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    FILE *fp;
    char nome[30];
    if ((fp = fopen("arquivo1.txt", "w")) == NULL)
    {
        printf("Erro na abertura do arquivo.\n");
        exit(1);
    }
    printf("Digite seu nome: ");
    scanf("%s", nome);
    fprintf(fp, "%s\n", nome);
    fclose(fp);
    return 0;
}
