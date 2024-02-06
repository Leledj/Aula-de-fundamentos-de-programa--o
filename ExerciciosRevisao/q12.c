/*Desenvolva um programa em C que simula um sistema de login com funcionalidades adicionais. O programa deve ser capaz de realizar as seguintes operações: ​

Permitir que um novo usuário crie uma conta. Para isso, o usuário deve fornecer um nome de usuário e uma senha. ​

O programa deve verificar se o nome de usuário já existe. Se existir, deve solicitar que o usuário escolha um nome diferente. ​

As informações de conta devem ser salvas em um arquivo.​

Permitir que um usuário faça login usando seu nome de usuário e senha.​

O programa deve verificar as credenciais no arquivo. Se as credenciais estiverem corretas, o acesso é concedido; caso contrário, uma mensagem de erro é exibida.​

Após o login, permitir que o usuário altere sua senha.​

A nova senha deve ser atualizada no arquivo de contas.​

Permitir que o usuário exclua sua conta.​

Após a exclusão, os detalhes da conta devem ser removidos do arquivo.​

Adicione uma funcionalidade para listar todos os usuários registrados (apenas os nomes de usuário).​

Essa funcionalidade deve estar disponível apenas após um login bem-sucedido.​

Garanta a segurança das senhas, considerando a implementação de alguma forma de hashing. Esse hashing pode ser uma mudança simples da senha.​

Trate possíveis erros, como falha na abertura de arquivos ou entrada de dados inválida.​*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    char nome[100];
    char senha[100];
}Usuario;

int main(void){
    FILE *arq;
    Usuario u;
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
        printf("1 - Criar conta\n");
        printf("2 - Login\n");
        printf("3 - Alterar senha\n");
        printf("4 - Excluir conta\n");
        printf("5 - Listar usuarios\n");
        printf("6 - Sair\n");
        printf("Digite uma opcao: ");
        scanf("%d", &opcao);

        switch(opcao){
            case 1:
                printf("Digite o nome de usuario: ");
                scanf("%s", u.nome);
                printf("Digite a senha: ");
                scanf("%s", u.senha);

                arq = fopen(nome, "r");

                if(arq == NULL){
                    printf("Erro ao abrir o arquivo\n");
                    exit(1);
                }

                while(fscanf(arq, "%s %s", u.nome, u.senha) != EOF){
                    if(strcmp(u.nome, nome) == 0){
                        printf("Nome de usuario ja existe\n");
                        exit(1);
                    }
                }

                fclose(arq);

                arq = fopen(nome, "a");
                fprintf(arq, "%s %s\n", u.nome, u.senha);
                fclose(arq);
                break;
            case 2:
                printf("Digite o nome de usuario: ");
                scanf("%s", u.nome);
                printf("Digite a senha: ");
                scanf("%s", u.senha);

                arq = fopen(nome, "r");

                if(arq == NULL){
                    printf("Erro ao abrir o arquivo\n");
                    exit(1);
                }

                while(fscanf(arq, "%s %s", u.nome, u.senha) != EOF){
                    if(strcmp(u.nome, nome) == 0 && strcmp(u.senha, senha) == 0){
                        printf("Login realizado com sucesso\n");
                        break;
                    }
                }

                fclose(arq);
                break;
            case 3:
                printf("Digite o nome de usuario: ");
                scanf("%s", u.nome);
                printf("Digite a senha: ");
                scanf("%s", u.senha);

                arq = fopen(nome, "r");
                FILE *arq2 = fopen("temp.txt", "w");

                while(fscanf(arq, "%s %s", u.nome, u.senha) != EOF){
                    if(strcmp(u.nome, nome) == 0){
                        printf("Digite a nova senha: ");
                        scanf("%s", u.senha);
                    }

                    fprintf(arq2, "%s %s\n", u.nome, u.senha);
                }

                fclose(arq);
                fclose(arq2);

                remove(nome);
                rename("temp.txt", nome);
                break;
            case 4:
                printf("Digite o nome de usuario: ");
                scanf("%s", u.nome);
                printf("Digite a senha: ");
                scanf("%s", u.senha);

                arq = fopen(nome, "r");
                FILE *arq2 = fopen("temp.txt", "w");

                while(fscanf(arq, "%s %s", u.nome, u.senha) != EOF){
                    if(strcmp(u.nome, nome) == 0){
                        continue;
                    }

                    fprintf(arq2, "%s %s\n", u.nome, u.senha);
                }

                fclose(arq);
                fclose(arq2);

                remove(nome);
                rename("temp.txt", nome);            

                break;
            case 5:
                arq = fopen(nome, "r");

                if(arq == NULL){
                    printf("Erro ao abrir o arquivo\n");
                    exit(1);
                }

                while(fscanf(arq, "%s %s", u.nome, u.senha) != EOF){
                    printf("%s\n", u.nome);
                }

                fclose(arq);
                break;
            case 6:
            
                break;
            default:
                printf("Opcao invalida\n");
        }
    }while(opcao != 6);

    return 0;
}