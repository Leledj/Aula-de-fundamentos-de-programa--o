//Crie um sistema para agendar consultas médicas, registrando em um arquivo o nome do paciente, data e hora da consulta, e o nome do médico.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    char nome[100];
    char data[100];
    char hora[100];
    char medico[100];
}Consulta;

int main(void){
    FILE *arq;
    Consulta c;
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
        printf("1 - Adicionar consulta\n");
        printf("2 - Remover consulta\n");
        printf("3 - Sair\n");
        printf("Digite uma opcao: ");
        scanf("%d", &opcao);

        switch(opcao){
            case 1:
                printf("Digite o nome do paciente: ");
                scanf("%s", c.nome);
                printf("Digite a data: ");
                scanf("%s", c.data);
                printf("Digite a hora: ");
                scanf("%s", c.hora);
                printf("Digite o nome do medico: ");
                scanf("%s", c.medico);

                arq = fopen(nome, "a");

                if(arq == NULL){
                    printf("Erro ao abrir o arquivo\n");
                    exit(1);
                }

                fprintf(arq, "%s %s %s %s\n", c.nome, c.data, c.hora, c.medico);

                fclose(arq);

                break;
            case 2:
                printf("Digite o nome do paciente: ");
                scanf("%s", c.nome);

                arq = fopen(nome, "r");

                if(arq == NULL){
                    printf("Erro ao abrir o arquivo\n");
                    exit(1);
                }

                quantidade = 0;

                while(fscanf(arq, "%s %s %s %s\n", c.nome, c.data, c.hora, c.medico) != EOF){
                    quantidade++;
                }

                fclose(arq);

                arq = fopen(nome, "w");

                if(arq == NULL){
                    printf("Erro ao abrir o arquivo\n");
                    exit(1);
                }

                fprintf(arq, "%d\n", quantidade);

                fclose(arq);

                arq = fopen(nome, "a");

                if(arq == NULL){
                    printf("Erro ao abrir o arquivo\n");
                    exit(1);
                }

                while(fscanf(arq, "%s %s %s %s\n", c.nome, c.data, c.hora, c.medico) != EOF){
                    if(strcmp(c.nome, nome) != 0){
                        fprintf(arq, "%s %s %s %s\n", c.nome, c.data, c.hora, c.medico);
                    }
                }

                fclose(arq);

                break;
            case 3:
                break;
            default:
                printf("Opcao invalida\n");
                break;
        }
    }while(opcao != 3);

    arq = fopen(nome, "r");

    if(arq == NULL){
        printf("Erro ao abrir o arquivo\n");
        exit(1);
    }

    quantidade = 0;

    while(fscanf(arq, "%s %s %s %s\n", c.nome, c.data, c.hora, c.medico) != EOF){
        quantidade++;
    }

    fclose(arq);

    arq = fopen(nome, "r");

    if(arq == NULL){
        printf("Erro ao abrir o arquivo\n");
        exit(1);
    }

    fscanf(arq, "%d\n", &quantidade);

    for(i = 0; i < quantidade; i++){
        fscanf(arq, "%s %s %s %s\n", c.nome, c.data, c.hora, c.medico);
        printf("Nome: %s\n", c.nome);
        printf("Data: %s\n", c.data);
        printf("Hora: %s\n", c.hora);
        printf("Medico: %s\n", c.medico);
        printf("\n");
    }

    fclose(arq);

    return 0;
}