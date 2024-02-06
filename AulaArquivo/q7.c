//Desenvolva um programa que leia um arquivo de texto e o converta em um arquivo binário, e vice-versa.

#include<stdio.h>

int main(){
    FILE *arq1, *arq2;
    char nome1[100], nome2[100], c;

    printf("Digite o nome do arquivo de texto: ");
    scanf("%s", nome1);

    printf("Digite o nome do arquivo binário: ");
    scanf("%s", nome2);

    arq1 = fopen(nome1, "r");
    arq2 = fopen(nome2, "wb");

    while((c = fgetc(arq1)) != EOF){
        fwrite(&c, sizeof(char), 1, arq2);
    }

    fclose(arq1);
    fclose(arq2);

    return 0;
}