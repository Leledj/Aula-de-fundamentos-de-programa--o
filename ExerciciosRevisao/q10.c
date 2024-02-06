//Faça um programa que gerencie empréstimos de livros em uma biblioteca, registrando em um arquivo o título do livro, nome do usuário, e datas de empréstimo e devolução.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    char titulo[100];
    char usuario[100];
    char dataEmprestimo[100];
    char dataDevolucao[100];
}Emprestimo;

int main(void){
    FILE *arq;
    Emprestimo e;
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
        printf("1 - Adicionar emprestimo\n");
        printf("2 - Remover emprestimo\n");
        printf("3 - Sair\n");
        printf("Digite uma opcao: ");
        scanf("%d", &opcao);

        switch(opcao){
            case 1:
                printf("Digite o titulo do livro: ");
                scanf("%s", e.titulo);
                printf("Digite o nome do usuario: ");
                scanf("%s", e.usuario);
                printf("Digite a data de emprestimo: ");
                scanf("%s", e.dataEmprestimo);
                printf("Digite a data de devolucao: ");
                scanf("%s", e.dataDevolucao);

                arq = fopen(nome, "a");
                fprintf(arq, "%s %s %s %s\n", e.titulo, e.usuario, e.dataEmprestimo, e.dataDevolucao);
                fclose(arq);
                break;
            case 2:
                printf("Digite o nome do usuario: ");
                scanf("%s", e.usuario);

                arq = fopen(nome, "r");
                FILE *arq2 = fopen("temp.txt", "w");

                while(fscanf(arq, "%s %s %s %s", e.titulo, e.usuario, e.dataEmprestimo, e.dataDevolucao) != EOF){
                    if(strcmp(e.usuario, e.usuario) != 0){
                        fprintf(arq2, "%s %s %s %s\n", e.titulo, e.usuario, e.dataEmprestimo, e.dataDevolucao);
                    }
                }

                fclose(arq);
                fclose(arq2);

                remove(nome);
                rename("temp.txt", nome);
                break;
            case 3:
                break;
            default:
                printf("Opcao invalida\n");
        }
    }while(opcao != 3);

    return 0;
}
