//geracao de dois arquivos texto onde eh feita a leitura de um e escrita em outro

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    FILE *fp1, *fp2;
    int i, vet[5] = {1, 2, 3, 4, 5};
    if ((fp1 = fopen("arquivo4.txt", "w")) == NULL)
    {
        printf("Erro na abertura do arquivo.\n");
        exit(1);
    }
    for (i = 0; i < 5; i++)
        fprintf(fp1, "%d\n", vet[i]);
    fclose(fp1);
    if ((fp1 = fopen("arquivo4.txt", "r")) == NULL)
    {
        printf("Erro na abertura do arquivo.\n");
        exit(1);
    }
    if ((fp2 = fopen("arquivo5.txt", "w")) == NULL)
    {
        printf("Erro na abertura do arquivo.\n");
        exit(1);
    }
    for (i = 0; i < 5; i++)
    {
        fscanf(fp1, "%d", &vet[i]);
        fprintf(fp2, "%d\n", vet[i]);
    }
    fclose(fp1);
    fclose(fp2);
    return 0;
}