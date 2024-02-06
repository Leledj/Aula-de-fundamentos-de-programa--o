//Desenvolva um programa que mantenha um registro de estoque em um arquivo. Cada entrada deve conter o nome do produto, quantidade e preço. O programa deve permitir adicionar e remover itens do estoque.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    char nome[100];
    int quantidade;
    float preco;
}Produto;

int main(void){
    FILE *arq;
    Produto p;
    char nome[100], c;
    int opcao, i, achou = 0, quantidade;

    printf("Digite o nome do arquivo: ");
    scanf("%s", nome);

    arq = fopen(nome, "r");

    if(arq == NULL){
        printf("Erro ao abrir o arquivo\n");
        exit(1);
    }

    while((c = fgetc(arq)) != EOF){
        if(c == '\n'){
            achou = 1;
            break;
        }
    }

    fclose(arq);

    if(!achou){
        arq = fopen(nome, "w");
        fclose(arq);
    }

    do{
        printf("1 - Adicionar produto\n");
        printf("2 - Remover produto\n");
        printf("3 - Sair\n");
        printf("Digite uma opcao: ");
        scanf("%d", &opcao);

        switch(opcao){
            case 1:
                printf("Digite o nome do produto: ");
                scanf("%s", p.nome);
                printf("Digite a quantidade: ");
                scanf("%d", &p.quantidade);
                printf("Digite o preco: ");
                scanf("%f", &p.preco);

                arq = fopen(nome, "a");

                if(arq == NULL){
                    printf("Erro ao abrir o arquivo\n");
                    exit(1);
                }

                fprintf(arq, "%s %d %.2f\n", p.nome, p.quantidade, p.preco);

                fclose(arq);
                break;
            case 2:
                printf("Digite o nome do produto: ");
                scanf("%s", p.nome);

                arq = fopen(nome, "r");

                if(arq == NULL){
                    printf("Erro ao abrir o arquivo\n");
                    exit(1);
                }

                achou = 0;
                while(fscanf(arq, "%s %d %f", p.nome, &p.quantidade, &p.preco) != EOF){
                    if(strcmp(p.nome, nome) == 0){
                        achou = 1;
                        break;
                    }
                }

                fclose(arq);

                if(!achou){
                    printf("Produto não encontrado\n");
                    break;
                }

                printf("Digite a quantidade: ");
                scanf("%d", &quantidade);

                if(quantidade > p.quantidade){
                    printf("Quantidade insuficiente\n");
                    break;
                }

                p.quantidade -= quantidade;

                arq = fopen(nome, "w");

                if(arq == NULL){
                    printf("Erro ao abrir o arquivo\n");
                    exit(1);
                }

                fprintf(arq, "%s %d %.2f\n", p.nome, p.quantidade, p.preco);

                fclose(arq);

                break;
            case 3:
                break;
            default:
                printf("Opcao invalida\n");
        }
    }while(opcao != 3);

    return 0;
}
