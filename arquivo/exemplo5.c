// geracao de arquivo de texto simulando criptografia

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    FILE *fp;
    int i, vet[5] = {1, 2, 3, 4, 5};
    if ((fp = fopen("arquivo6.txt", "w")) == NULL)
    {
        printf("Erro na abertura do arquivo.\n");
        exit(1);
    }
    for (i = 0; i < 5; i++)
        fprintf(fp, "%d\n", vet[i] + 1);
    fclose(fp);
    if ((fp = fopen("arquivo6.txt", "r")) == NULL)
    {
        printf("Erro na abertura do arquivo.\n");
        exit(1);
    }
    for (i = 0; i < 5; i++)
    {
        fscanf(fp, "%d", &vet[i]);
        vet[i]--;
    }
    for (i = 0; i < 5; i++)
        printf("%d\n", vet[i]);
    fclose(fp);
    return 0;
}