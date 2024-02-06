//Desenvolva um programa que leia um arquivo binário e imprima os números em ordem reversa.

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
    fseek(fp, 0, SEEK_END);
    int size = ftell(fp);
    fseek(fp, 0, SEEK_SET);
    while (ftell(fp) < size)
    {
        fseek(fp, -sizeof(int), SEEK_CUR);
        fread(&num, sizeof(int), 1, fp);
        printf("%d\n", num);
    }
    fclose(fp);
    return 0;
}