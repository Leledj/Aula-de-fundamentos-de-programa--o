//Escreva um programa que crie um arquivo binário e escreva nele uma sequência de números.

#include<stdio.h>

int main(){
    FILE *arq;
    char nome[100];
    int n;

    printf("Digite o nome do arquivo: ");
    scanf("%s", nome);

    arq = fopen(nome, "wb");

    printf("Digite uma sequência de números: ");
    scanf("%d", &n);

    while(n != 0){
        fwrite(&n, sizeof(int), 1, arq);
        scanf("%d", &n);
    }

    fclose(arq);

    return 0;
}