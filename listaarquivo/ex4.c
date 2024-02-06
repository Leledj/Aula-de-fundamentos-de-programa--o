//Crie um programa para copiar o conteúdo de um arquivo para outro.

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    FILE *fp1, *fp2;
    char nome[30];
    if ((fp1 = fopen("arquivo1.txt", "r")) == NULL)
    {
        printf("Erro na abertura do arquivo.\n");
        exit(1);
    }
    if ((fp2 = fopen("arquivo2.txt", "w")) == NULL)
    {
        printf("Erro na abertura do arquivo.\n");
        exit(1);
    }
    fscanf(fp1, "%s", nome);
    fprintf(fp2, "%s\n", nome);
    fclose(fp1);
    fclose(fp2);
    return 0;
}