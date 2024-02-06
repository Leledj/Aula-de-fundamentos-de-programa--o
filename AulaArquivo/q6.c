//Crie um programa que leia um arquivo binário contendo números e calcule a soma desses números.

#include<stdio.h>

int main(){
    FILE *arq;
    char nome[100];
    int n, soma = 0;

    printf("Digite o nome do arquivo: ");
    scanf("%s", nome);

    arq = fopen(nome, "rb");

    while(fread(&n, sizeof(int), 1, arq) != 0){
        soma += n;
    }

    printf("Soma: %d\n", soma);

    fclose(arq);

    return 0;
}
