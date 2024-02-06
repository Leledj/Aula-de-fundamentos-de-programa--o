//geracao de arquivo de texto simulando banco de dados de clientes com nome e saldo em conta corrente e poupanca

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    FILE *fp;
    char nome[30];
    float cc, cp;
    if ((fp = fopen("arquivo7.txt", "w")) == NULL)
    {
        printf("Erro na abertura do arquivo.\n");
        exit(1);
    }
    while (1)
    {
        printf("Digite o nome do cliente: ");
        scanf("%s", nome);
        if (nome[0] == '0')
            break;
        printf("Digite o saldo da conta corrente: ");
        scanf("%f", &cc);
        printf("Digite o saldo da conta poupanca: ");
        scanf("%f", &cp);
        fprintf(fp, "%s %f %f\n", nome, cc, cp);
    }
    fclose(fp);
    if ((fp = fopen("arquivo7.txt", "r")) == NULL)
    {
        printf("Erro na abertura do arquivo.\n");
        exit(1);
    }
    while (fscanf(fp, "%s %f %f", nome, &cc, &cp) != EOF)
        printf("%s %f %f\n", nome, cc, cp);
    fclose(fp);
    return 0;
}