//Escreva um programa em C para criar um arquivo de texto e escrever seu nome e sobrenome nele.

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    FILE *fp;
    char nome[30], sobrenome[30];
    if ((fp = fopen("arquivo2.txt", "w")) == NULL)
    {
        printf("Erro na abertura do arquivo.\n");
        exit(1);
    }
    printf("Digite seu nome: ");
    scanf("%s", nome);
    printf("Digite seu sobrenome: ");
    scanf("%s", sobrenome);
    fprintf(fp, "%s %s\n", nome, sobrenome);
    fclose(fp);
    return 0;
}