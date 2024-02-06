//geracao de arquivo de texto

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    FILE *fp;
    int i, vet[5] = {1, 2, 3, 4, 5};
    if ((fp = fopen("arquivo2.txt", "w")) == NULL)
    {
        printf("Erro na abertura do arquivo.\n");
        exit(1);
    }
    for (i = 0; i < 5; i++)
        fprintf(fp, "%d\n", vet[i]);
    fclose(fp);
    if ((fp = fopen("arquivo2.txt", "r")) == NULL)
    {
        printf("Erro na abertura do arquivo.\n");
        exit(1);
    }
    for (i = 0; i < 5; i++)
        fscanf(fp, "%d", &vet[i]);
    for (i = 0; i < 5; i++)
        printf("%d\n", vet[i]);
    fclose(fp);
    return 0;
}