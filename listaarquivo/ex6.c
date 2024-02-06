//Desenvolva um programa que substitua todas as ocorrências de uma palavra específica em um arquivo de texto.

#include <stdio.h>
#include <stdlib.h>

int main(void){
    FILE *fp;
    char palavra[30], palavra2[30];
    if ((fp = fopen("arquivo1.txt", "r")) == NULL){
        printf("Erro na abertura do arquivo.\n");
        exit(1);
    }
    printf("Digite a palavra que deseja substituir: ");
    scanf("%s", palavra);
    printf("Digite a palavra que deseja colocar no lugar: ");
    scanf("%s", palavra2);
    while (fscanf(fp, "%s", palavra) != EOF){
        if (palavra == palavra2){
            fprintf(fp, "%s", palavra2);
        }
    }
    fclose(fp);
    return 0;
}