//Desenvolva um sistema de folha de pagamento onde cada registro contém o nome do funcionário, ID, horas trabalhadas e taxa por hora. O programa deve calcular o salário e armazenar os registros em um arquivo.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    char nome[100];
    int id;
    float horas;
    float taxa;
}Funcionario;

int main(void){
    FILE *arq;
    Funcionario f;
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
        printf("1 - Adicionar funcionario\n");
        printf("2 - Remover funcionario\n");
        printf("3 - Sair\n");
        printf("Digite uma opcao: ");
        scanf("%d", &opcao);

        switch(opcao){
            case 1:
                printf("Digite o nome do funcionario: ");
                scanf("%s", f.nome);
                printf("Digite o id: ");
                scanf("%d", &f.id);
                printf("Digite as horas trabalhadas: ");
                scanf("%f", &f.horas);
                printf("Digite a taxa: ");
                scanf("%f", &f.taxa);

                arq = fopen(nome, "a");
                fprintf(arq, "%s %d %.2f %.2f\n", f.nome, f.id, f.horas, f.taxa);
                fclose(arq);
                break;
            case 2:
                printf("Digite o id do funcionario: ");
                scanf("%d", &f.id);

                arq = fopen(nome, "r");
                FILE *arq2 = fopen("temp.txt", "w");

                while(fscanf(arq, "%s %d %f %f", f.nome, &f.id, &f.horas, &f.taxa) != EOF){
                    if(f.id != f.id){
                        fprintf(arq2, "%s %d %.2f %.2f\n", f.nome, f.id, f.horas, f.taxa);
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

    arq = fopen(nome, "r");

    if(arq == NULL){
        printf("Erro ao abrir o arquivo\n");
        exit(1);
    }

    while(fscanf(arq, "%s %d %f %f", f.nome, &f.id, &f.horas, &f.taxa) != EOF){
        printf("Nome: %s\n", f.nome);
        printf("ID: %d\n", f.id);
        printf("Horas trabalhadas: %.2f\n", f.horas);
        printf("Taxa: %.2f\n", f.taxa);
        printf("Salario: %.2f\n", f.horas * f.taxa);
        printf("\n");
    }

    fclose(arq);

    return 0;
}