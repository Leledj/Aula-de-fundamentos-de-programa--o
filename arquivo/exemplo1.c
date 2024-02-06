//Um exemplo de manipulacao de arquivo binario

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    FILE *fp;
    int i, vet[5] = {1, 2, 3, 4, 5};
    if ((fp = fopen("arquivo.bin", "wb")) == NULL)
    {
        printf("Erro na abertura do arquivo.\n");
        exit(1);
    }
    fwrite(vet, sizeof(int), 5, fp);
    fclose(fp);
    if ((fp = fopen("arquivo.bin", "rb")) == NULL)
    {
        printf("Erro na abertura do arquivo.\n");
        exit(1);
    }
    fread(vet, sizeof(int), 5, fp);
    for (i = 0; i < 5; i++)
        printf("%d\n", vet[i]);
    fclose(fp);
    return 0;
}