//Desenvolva um programa que leia um arquivo de texto e o converta em um arquivo binário, e vice-versa.

#include <stdio.h>
#include <stdlib.h>

int main(void){
    FILE *fp_txt, *fp_bin;
    char ch;
    if ((fp_txt = fopen("arquivo1.txt", "r")) == NULL){
        printf("Erro na abertura do arquivo.\n");
        exit(1);
    }
    if ((fp_bin = fopen("arquivo1.bin", "wb")) == NULL){
        printf("Erro na abertura do arquivo.\n");
        exit(1);
    }
    while ((ch = fgetc(fp_txt)) != EOF){
        fwrite(&ch, sizeof(char), 1, fp_bin);
    }
    fclose(fp_txt);
    fclose(fp_bin);
    return 0;
}