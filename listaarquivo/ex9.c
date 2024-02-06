//Desenvolva um programa para comparar o conteúdo de dois arquivos de texto.

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    FILE *fp1, *fp2;
    char nome1[30], nome2[30];
    if ((fp1 = fopen("arquivo1.txt", "r")) == NULL)
    {
        printf("Erro na abertura do arquivo.\n");
        exit(1);
    }
    if ((fp2 = fopen("arquivo2.txt", "r")) == NULL)
    {
        printf("Erro na abertura do arquivo.\n");
        exit(1);
    }
    fscanf(fp1, "%s", nome1);
    fscanf(fp2, "%s", nome2);
    if (strcmp(nome1, nome2) == 0)
    {
        printf("Os arquivos são iguais.\n");
    }
    else
    {
        printf("Os arquivos são diferentes.\n");
    }
    fclose(fp1);
    fclose(fp2);
    return 0;
}