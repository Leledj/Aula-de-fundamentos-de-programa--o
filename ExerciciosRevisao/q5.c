//Faça um programa que leia uma string e a reverta usando ponteiros.
#include <stdio.h>
#include <string.h>

int main(void){
    char palavra[100], *p;
    int i, tam;

    printf("Digite uma palavra: ");
    scanf("%s", palavra);

    tam = strlen(palavra);

    p = palavra + tam - 1;

    printf("A palavra revertida é: ");
    for(i = 0; i < tam; i++){
        printf("%c", *p);
        p--;
    }
    printf("\n");

    return 0;
}