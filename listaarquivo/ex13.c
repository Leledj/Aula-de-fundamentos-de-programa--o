//Crie um programa que busque uma string específica em um arquivo de texto e imprima a linha onde ela foi encontrada.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
    FILE *fp;
    char palavra[30], linha[30];
    if ((fp = fopen("arquivo1.txt", "r")) == NULL){
        printf("Erro na abertura do arquivo.\n");
        exit(1);
    }
    printf("Digite a palavra que deseja buscar: ");
    scanf("%s", palavra);
    while (fscanf(fp, "%s", linha) != EOF){
        if (strcmp(palavra, linha) == 0){
            printf("%s\n", linha);
        }
    }
    fclose(fp);
    return 0;
}