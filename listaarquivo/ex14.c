//Escreva um programa que divida um arquivo de texto grande em vários arquivos menores.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 256
#define LINHAS 100

int main(void){
    FILE *fp;
    FILE *fp_small;
    char buffer[MAX];
    int line_count = 0;
    int file_count = 0;
    char filename[30];
    if ((fp = fopen("arquivo1.txt", "r")) == NULL){
        printf("Erro na abertura do arquivo.\n");
        exit(1);
    }
    sprintf(filename, "arquivo%d.txt", file_count);
    fp_small = fopen(filename, "w");

    while (fgets(buffer, MAX, fp) != NULL){
        if (line_count == LINHAS){
            fclose(fp_small);
            file_count++;
            sprintf(filename, "arquivo%d.txt", file_count);
            fp_small = fopen(filename, "w");
            line_count = 0;
        }
        fprintf(fp_small, "%s", buffer);
        line_count++;
    }
    fclose(fp_small);
    fclose(fp);
    return 0;
}