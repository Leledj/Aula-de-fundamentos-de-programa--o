//Escreva um programa que inverta o conteúdo de um arquivo de texto (a última linha se torna a primeira, etc.).

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 256

int main(void){
    FILE *fp;
    char *linhas[MAX];
    int i = 0;
    char buffer[MAX];
    if ((fp = fopen("arquivo1.txt", "r")) == NULL){
        printf("Erro na abertura do arquivo.\n");
        exit(1);
    }
    while (fgets(buffer, MAX, fp) != NULL){
        linhas[i] = malloc(strlen(buffer) + 1);
        strcpy(linhas[i], buffer);
        i++;
    }
    fclose(fp);
    if ((fp = fopen("arquivo1.txt", "w")) == NULL){
        printf("Erro na abertura do arquivo.\n");
        exit(1);
    }
    for (int j = i - 1; j >= 0; j--){
        fprintf(fp, "%s", linhas[j]);
    }
    fclose(fp);
    return 0;

}