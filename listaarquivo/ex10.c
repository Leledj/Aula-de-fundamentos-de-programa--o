//Crie um programa que leia um arquivo binário contendo números e calcule a soma desses números.

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    FILE *fp;
    int num, soma = 0;
    if ((fp = fopen("arquivo1.bin", "rb")) == NULL)
    {
        printf("Erro na abertura do arquivo.\n");
        exit(1);
    }
    while (fread(&num, sizeof(int), 1, fp) == 1)
    {
        soma += num;
    }
    printf("%d\n", soma);
    fclose(fp);
    return 0;
}