//Escreva um programa que crie um arquivo binário e escreva nele uma sequência de números.

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    FILE *fp;
    int num;
    if ((fp = fopen("arquivo1.bin", "wb")) == NULL)
    {
        printf("Erro na abertura do arquivo.\n");
        exit(1);
    }
    printf("Digite uma sequência de números (digite 0 para terminar): ");
    scanf("%d", &num);
    while (num != 0)
    {
        fwrite(&num, sizeof(int), 1, fp);
        scanf("%d", &num);
    }
    fclose(fp);
    return 0;
}