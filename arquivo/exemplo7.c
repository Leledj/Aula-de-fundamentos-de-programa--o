//geracao de arquivo binario simulando sistema de mercado com produtos, precos unitarios e quantidade em estoque. Gerar um segundo arquivo binario com dados de venda de produtos, quantidade vendida e valor total da venda. Gerar um terceiro arquivo binario com dados de compra de produtos, quantidade comprada e valor total da compra.

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    FILE *fp;
    char produto[30];
    float preco, quantidade;
    if ((fp = fopen("arquivo8.txt", "w")) == NULL)
    {
        printf("Erro na abertura do arquivo.\n");
        exit(1);
    }
    while (1)
    {
        printf("Digite o nome do produto: ");
        scanf("%s", produto);
        if (produto[0] == '0')
            break;
        printf("Digite o preco do produto: ");
        scanf("%f", &preco);
        printf("Digite a quantidade em estoque: ");
        scanf("%f", &quantidade);
        fprintf(fp, "%s %f %f\n", produto, preco, quantidade);
    }
    fclose(fp);
    if ((fp = fopen("arquivo8.txt", "r")) == NULL)
    {
        printf("Erro na abertura do arquivo.\n");
        exit(1);
    }
    while (fscanf(fp, "%s %f %f", produto, &preco, &quantidade) != EOF)
        printf("%s %f %f\n", produto, preco, quantidade);
    fclose(fp);
    float venda;
    if ((fp = fopen("arquivo8.txt", "r")) == NULL)
    {
        printf("Erro na abertura do arquivo.\n");
        exit(1);
    }
    while (fscanf(fp, "%s %f %f", produto, &preco, &quantidade) != EOF)
    {
        printf("Digite a quantidade vendida do produto %s: ", produto);
        scanf("%f", &venda);
        printf("Valor total da venda: %f\n", venda * preco);
    }
    fclose(fp);
    float compra;
    if ((fp = fopen("arquivo8.txt", "r")) == NULL)
    {
        printf("Erro na abertura do arquivo.\n");
        exit(1);
    }
    while (fscanf(fp, "%s %f %f", produto, &preco, &quantidade) != EOF)
    {
        printf("Digite a quantidade comprada do produto %s: ", produto);
        scanf("%f", &compra);
        printf("Valor total da compra: %f\n", compra * preco);
    }

    return 0;
}