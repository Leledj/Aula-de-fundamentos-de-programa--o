//Desenvolva um programa que leia um numero e imprima seu binário.

#include <stdio.h>

int main(void){
    int num, i, j, bin[32];

    printf("Digite um numero: ");
    scanf("%d", &num);

    for(i = 0; num > 0; i++){
        bin[i] = num % 2;
        num /= 2;
    }

    printf("O numero em binario é: ");
    for(j = i - 1; j >= 0; j--){
        printf("%d", bin[j]);
    }
    printf("\n");

    return 0;
}